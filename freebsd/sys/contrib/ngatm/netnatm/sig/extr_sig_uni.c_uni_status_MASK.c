
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni {size_t custat; size_t glob_start; size_t glob_respond; int arg; TYPE_1__* funcs; int delq; int workq; scalar_t__ working; } ;
struct TYPE_2__ {int (* status ) (struct uni*,int ,void*,char*,char*) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (struct uni*,int ,void*,char*,char*) ;
 int FUNC_2 (struct uni*,int ,void*,char*,char*) ;
 int FUNC_3 (struct uni*,int ,void*,char*,char*) ;
 int FUNC_4 (struct uni*,int ,void*,char*,char*) ;
 int FUNC_5 (struct uni*,int ,void*,char*,char*) ;
 int FUNC_6 (struct uni*,int ,void*,char*,char*) ;

void
FUNC_7(struct uni *VAR_2, void *VAR_3)
{
 VAR_2->funcs->status(VAR_2, VAR_2->arg, VAR_3,
     "working: %s\n", VAR_2->working ? "yes" : "no");
 VAR_2->funcs->status(VAR_2, VAR_2->arg, VAR_3,
     "work queue: %sempty\n", FUNC_0(&VAR_2->workq)? "" : "not ");
 VAR_2->funcs->status(VAR_2, VAR_2->arg, VAR_3,
     "delayed work queue: %sempty\n",
     FUNC_0(&VAR_2->delq)? "" : "not ");
 VAR_2->funcs->status(VAR_2, VAR_2->arg, VAR_3,
     "coordinator: %s\n", VAR_0[VAR_2->custat]);
 VAR_2->funcs->status(VAR_2, VAR_2->arg, VAR_3,
     "reset-start: %s\n", VAR_1[VAR_2->glob_start]);
 VAR_2->funcs->status(VAR_2, VAR_2->arg, VAR_3,
     "reset-respond: %s\n", VAR_1[VAR_2->glob_respond]);
}
