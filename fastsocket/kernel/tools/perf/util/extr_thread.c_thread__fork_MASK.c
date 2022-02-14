
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int comm_set; int mg; scalar_t__ comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int FUNC_3(struct thread *VAR_2, struct thread *VAR_3)
{
 int VAR_4;

 if (VAR_3->comm_set) {
  if (VAR_2->comm)
   FUNC_0(VAR_2->comm);
  VAR_2->comm = FUNC_2(VAR_3->comm);
  if (!VAR_2->comm)
   return -VAR_0;
  VAR_2->comm_set = 1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  if (FUNC_1(&VAR_2->mg, &VAR_3->mg, VAR_4) < 0)
   return -VAR_0;
 return 0;
}
