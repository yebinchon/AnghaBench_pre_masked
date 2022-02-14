
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {struct thread_info* next; scalar_t__ num; int ptid; } ;
typedef int ptid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct thread_info*,int ,int) ;
 struct thread_info* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

struct thread_info *
FUNC_2 (ptid_t VAR_2)
{
  struct thread_info *VAR_3;

  VAR_3 = (struct thread_info *) FUNC_1 (sizeof (*VAR_3));
  FUNC_0 (VAR_3, 0, sizeof (*VAR_3));
  VAR_3->ptid = VAR_2;
  VAR_3->num = ++VAR_0;
  VAR_3->next = VAR_1;
  VAR_1 = VAR_3;
  return VAR_3;
}
