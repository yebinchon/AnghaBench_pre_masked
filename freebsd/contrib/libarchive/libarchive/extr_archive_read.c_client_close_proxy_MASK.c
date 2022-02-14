
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct archive_read_filter {TYPE_2__* archive; } ;
struct archive {int dummy; } ;
struct TYPE_6__ {int (* closer ) (struct archive*,int ) ;unsigned int nodes; TYPE_1__* dataset; } ;
struct TYPE_5__ {TYPE_3__ client; } ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter *VAR_1)
{
 int VAR_2 = VAR_0, VAR_3;
 unsigned int VAR_4;

 if (VAR_1->archive->client.closer == ((void*)0))
  return (VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1->archive->client.nodes; VAR_4++)
 {
  VAR_3 = (VAR_1->archive->client.closer)
   ((struct archive *)VAR_1->archive,
    VAR_1->archive->client.dataset[VAR_4].data);
  if (VAR_2 > VAR_3)
   VAR_2 = VAR_3;
 }
 return (VAR_2);
}
