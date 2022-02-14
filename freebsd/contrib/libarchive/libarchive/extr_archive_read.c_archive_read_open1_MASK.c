
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct archive_read_filter {char* name; struct archive_read_filter* upstream; int code; int (* sswitch ) (struct archive_read_filter*,int ) ;int close; int seek; int skip; int read; int open; int data; struct archive_read* archive; int * bidder; } ;
struct TYPE_9__ {void* state; } ;
struct TYPE_8__ {int (* opener ) (TYPE_3__*,int ) ;unsigned int nodes; TYPE_1__* dataset; int (* closer ) (TYPE_3__*,int ) ;int * reader; } ;
struct archive_read {struct archive_read_filter* filter; TYPE_3__ archive; int * formats; int * format; int bypass_filter_bidding; TYPE_2__ client; } ;
struct archive {int dummy; } ;
struct TYPE_7__ {scalar_t__ begin_position; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 struct archive_read_filter* FUNC_3 (int,int) ;
 int FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct archive_read*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct archive_read_filter*,int ) ;
 int FUNC_7 (struct archive_read*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;

int
FUNC_10(struct archive *VAR_14)
{
 struct archive_read *VAR_15 = (struct archive_read *)VAR_14;
 struct archive_read_filter *VAR_16, *VAR_17;
 int VAR_18, VAR_19 = VAR_2;
 unsigned int VAR_20;

 FUNC_0(VAR_14, VAR_3, VAR_6,
     "archive_read_open");
 FUNC_1(&VAR_15->archive);

 if (VAR_15->client.reader == ((void*)0)) {
  FUNC_2(&VAR_15->archive, VAR_8,
      "No reader function provided to archive_read_open");
  VAR_15->archive.state = VAR_4;
  return (VAR_0);
 }


 if (VAR_15->client.opener != ((void*)0)) {
  VAR_19 = (VAR_15->client.opener)(&VAR_15->archive, VAR_15->client.dataset[0].data);
  if (VAR_19 != 0) {

   if (VAR_15->client.closer) {
    for (VAR_20 = 0; VAR_20 < VAR_15->client.nodes; VAR_20++)
     (VAR_15->client.closer)(&VAR_15->archive,
         VAR_15->client.dataset[VAR_20].data);
   }
   return (VAR_19);
  }
 }

 VAR_16 = FUNC_3(1, sizeof(*VAR_16));
 if (VAR_16 == ((void*)0))
  return (VAR_0);
 VAR_16->bidder = ((void*)0);
 VAR_16->upstream = ((void*)0);
 VAR_16->archive = VAR_15;
 VAR_16->data = VAR_15->client.dataset[0].data;
 VAR_16->open = VAR_10;
 VAR_16->read = VAR_11;
 VAR_16->skip = VAR_13;
 VAR_16->seek = VAR_12;
 VAR_16->close = VAR_9;
 VAR_16->sswitch = FUNC_6;
 VAR_16->name = "none";
 VAR_16->code = VAR_1;

 VAR_15->client.dataset[0].begin_position = 0;
 if (!VAR_15->filter || !VAR_15->bypass_filter_bidding)
 {
  VAR_15->filter = VAR_16;

  VAR_19 = FUNC_4(VAR_15);
  if (VAR_19 < VAR_7) {
   VAR_15->archive.state = VAR_4;
   return (VAR_0);
  }
 }
 else
 {

  VAR_17 = VAR_15->filter;
  while (VAR_17->upstream)
   VAR_17 = VAR_17->upstream;
  VAR_17->upstream = VAR_16;
 }

 if (!VAR_15->format)
 {
  VAR_18 = FUNC_5(VAR_15);
  if (VAR_18 < 0) {
   FUNC_7(VAR_15);
   VAR_15->archive.state = VAR_4;
   return (VAR_0);
  }
  VAR_15->format = &(VAR_15->formats[VAR_18]);
 }

 VAR_15->archive.state = VAR_5;


 FUNC_6(VAR_15->filter, 0);
 return (VAR_19);
}
