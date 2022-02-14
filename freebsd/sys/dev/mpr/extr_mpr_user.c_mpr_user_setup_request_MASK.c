
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpr_usr_command {int dummy; } ;
struct mpr_user_func {int (* f_pre ) (struct mpr_command*,struct mpr_usr_command*) ;scalar_t__ Function; } ;
struct mpr_command {scalar_t__ cm_req; } ;
struct TYPE_2__ {scalar_t__ Function; } ;
typedef TYPE_1__ MPI2_REQUEST_HEADER ;


 int VAR_0 ;
 struct mpr_user_func* VAR_1 ;
 int FUNC_0 (struct mpr_command*,struct mpr_usr_command*) ;

__attribute__((used)) static int
FUNC_1(struct mpr_command *VAR_2, struct mpr_usr_command *VAR_3)
{
 MPI2_REQUEST_HEADER *VAR_4 = (MPI2_REQUEST_HEADER *)VAR_2->cm_req;
 struct mpr_user_func *VAR_5;

 for (VAR_5 = VAR_1; VAR_5->f_pre != ((void*)0); VAR_5++) {
  if (VAR_4->Function == VAR_5->Function)
   return (VAR_5->f_pre(VAR_2, VAR_3));
 }
 return (VAR_0);
}
