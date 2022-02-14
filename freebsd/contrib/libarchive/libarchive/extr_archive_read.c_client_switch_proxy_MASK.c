
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct archive_read_filter {void* data; TYPE_3__* archive; } ;
struct archive {int dummy; } ;
struct TYPE_5__ {unsigned int cursor; int (* switcher ) (struct archive*,void*,void*) ;int (* closer ) (struct archive*,void*) ;int (* opener ) (struct archive*,void*) ;TYPE_1__* dataset; } ;
struct TYPE_6__ {TYPE_2__ client; } ;
struct TYPE_4__ {void* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,void*,void*) ;
 int FUNC_1 (struct archive*,void*) ;
 int FUNC_2 (struct archive*,void*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read_filter *VAR_1, unsigned int VAR_2)
{
  int VAR_3 = VAR_0, VAR_4 = VAR_0;
 void *VAR_5 = ((void*)0);


 if (VAR_1->archive->client.cursor == VAR_2)
  return (VAR_0);

 VAR_1->archive->client.cursor = VAR_2;
 VAR_5 = VAR_1->archive->client.dataset[VAR_1->archive->client.cursor].data;
 if (VAR_1->archive->client.switcher != ((void*)0))
 {
  VAR_3 = VAR_4 = (VAR_1->archive->client.switcher)
   ((struct archive *)VAR_1->archive, VAR_1->data, VAR_5);
  VAR_1->data = VAR_5;
 }
 else
 {

  if (VAR_1->archive->client.closer != ((void*)0))
   VAR_3 = (VAR_1->archive->client.closer)
    ((struct archive *)VAR_1->archive, VAR_1->data);
  VAR_1->data = VAR_5;
  if (VAR_1->archive->client.opener != ((void*)0))
   VAR_4 = (VAR_1->archive->client.opener)
    ((struct archive *)VAR_1->archive, VAR_1->data);
 }
 return (VAR_3 < VAR_4) ? VAR_3 : VAR_4;
}
