
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_filter_bidder {int (* bid ) (struct archive_read_filter_bidder*,struct archive_read_filter*) ;int (* init ) (struct archive_read_filter*) ;} ;
struct archive_read_filter {struct archive_read_filter* upstream; struct archive_read* archive; struct archive_read_filter_bidder* bidder; int code; int name; } ;
struct TYPE_2__ {int compression_code; int compression_name; } ;
struct archive_read {TYPE_1__ archive; struct archive_read_filter* filter; struct archive_read_filter_bidder* bidders; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_read_filter*,int,scalar_t__*) ;
 int FUNC_1 (struct archive_read*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct archive_read_filter_bidder*,struct archive_read_filter*) ;
 int FUNC_5 (struct archive_read_filter*) ;

__attribute__((used)) static int
FUNC_6(struct archive_read *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct archive_read_filter_bidder *VAR_10, *VAR_11;
 struct archive_read_filter *VAR_12;
 ssize_t VAR_13;
 int VAR_14;

 for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
  VAR_5 = sizeof(VAR_4->bidders) / sizeof(VAR_4->bidders[0]);

  VAR_8 = 0;
  VAR_11 = ((void*)0);

  VAR_10 = VAR_4->bidders;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_10++) {
   if (VAR_10->bid != ((void*)0)) {
    VAR_7 = (VAR_10->bid)(VAR_10, VAR_4->filter);
    if (VAR_7 > VAR_8) {
     VAR_8 = VAR_7;
     VAR_11 = VAR_10;
    }
   }
  }


  if (VAR_11 == ((void*)0)) {

   FUNC_0(VAR_4->filter, 1, &VAR_13);
   if (VAR_13 < 0) {
    FUNC_1(VAR_4);
    return (VAR_1);
   }
   VAR_4->archive.compression_name = VAR_4->filter->name;
   VAR_4->archive.compression_code = VAR_4->filter->code;
   return (VAR_2);
  }

  VAR_12
      = (struct archive_read_filter *)FUNC_3(1, sizeof(*VAR_12));
  if (VAR_12 == ((void*)0))
   return (VAR_1);
  VAR_12->bidder = VAR_11;
  VAR_12->archive = VAR_4;
  VAR_12->upstream = VAR_4->filter;
  VAR_4->filter = VAR_12;
  VAR_14 = (VAR_11->init)(VAR_4->filter);
  if (VAR_14 != VAR_2) {
   FUNC_1(VAR_4);
   return (VAR_1);
  }
 }
 FUNC_2(&VAR_4->archive, VAR_0,
     "Input requires too many filters for decoding");
 return (VAR_1);
}
