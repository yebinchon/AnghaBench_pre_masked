
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nsze; } ;
struct nvme_namespace {int * cons_cookie; TYPE_2__ data; } ;
struct TYPE_3__ {int nn; } ;
struct nvme_controller {struct nvme_namespace* ns; TYPE_1__ cdata; int ** cons_cookie; scalar_t__ is_failed; int notification_sent; int is_initialized; } ;
struct nvme_consumer {size_t id; int (* ns_fn ) (struct nvme_namespace*,void*) ;int (* fail_fn ) (void*) ;void* (* ctrlr_fn ) (struct nvme_controller*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct nvme_namespace*,void*) ;

__attribute__((used)) static void
FUNC_5(struct nvme_consumer *VAR_1,
     struct nvme_controller *VAR_2)
{
 struct nvme_namespace *VAR_3;
 void *VAR_4;
 int VAR_5, VAR_6;
 if (!VAR_2->is_initialized)
  return;

 VAR_5 = FUNC_0(&VAR_2->notification_sent, 0, 1);
 if (VAR_5 == 0)
  return;

 if (VAR_1->ctrlr_fn != ((void*)0))
  VAR_4 = (*VAR_1->ctrlr_fn)(VAR_2);
 else
  VAR_4 = (void *)(uintptr_t)0xdeadc0dedeadc0de;
 VAR_2->cons_cookie[VAR_1->id] = VAR_4;


 if (VAR_4 == ((void*)0))
  return;

 if (VAR_2->is_failed) {
  VAR_2->cons_cookie[VAR_1->id] = ((void*)0);
  if (VAR_1->fail_fn != ((void*)0))
   (*VAR_1->fail_fn)(VAR_4);




  return;
 }
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2->cdata.nn, VAR_0); VAR_6++) {
  VAR_3 = &VAR_2->ns[VAR_6];
  if (VAR_3->data.nsze == 0)
   continue;
  if (VAR_1->ns_fn != ((void*)0))
   VAR_3->cons_cookie[VAR_1->id] =
       (*VAR_1->ns_fn)(VAR_3, VAR_4);
 }
}
