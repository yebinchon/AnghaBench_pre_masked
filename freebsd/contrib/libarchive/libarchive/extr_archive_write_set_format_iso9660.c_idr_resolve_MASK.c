
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct idrent {int noff; TYPE_2__* avail; int rbnode; TYPE_1__* isoent; struct idrent* wnext; } ;
struct TYPE_6__ {struct idrent* first; } ;
struct idr {int rbtree; int null_size; int num_size; TYPE_3__ wait_list; } ;
struct TYPE_5__ {int rename_num; } ;
struct TYPE_4__ {scalar_t__ identifier; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct idrent*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct idr *VAR_0, void (*VAR_1)(unsigned char *VAR_2, int VAR_3))
{
 struct idrent *VAR_4;
 unsigned char *VAR_5;

 for (VAR_4 = VAR_0->wait_list.first; VAR_4 != ((void*)0); VAR_4 = VAR_4->wnext) {
  FUNC_1(VAR_4, VAR_0->num_size, VAR_0->null_size);
  VAR_5 = (unsigned char *)VAR_4->isoent->identifier + VAR_4->noff;
  do {
   VAR_1(VAR_5, VAR_4->avail->rename_num++);
  } while (!FUNC_0(
      &(VAR_0->rbtree), &(VAR_4->rbnode)));
 }
}
