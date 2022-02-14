
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion_status; int val; int ae; int cmp; int con; int extended_status; } ;
typedef TYPE_1__ sli4_mcqe_t ;
typedef int int32_t ;


 int FUNC_0 (int *,char*,int,int ,int ,int ,int ,int ) ;

int32_t
FUNC_1(void *VAR_0)
{
 sli4_mcqe_t *VAR_1 = VAR_0;






 if (!VAR_1->cmp) {
  return -2;
 }

 if (VAR_1->completion_status) {
  FUNC_0(((void*)0), "bad status (cmpl=%#x ext=%#x con=%d cmp=%d ae=%d val=%d)\n",
    VAR_1->completion_status,
    VAR_1->extended_status,
    VAR_1->con,
    VAR_1->cmp,
    VAR_1->ae,
    VAR_1->val);
 }

 return VAR_1->completion_status;
}
