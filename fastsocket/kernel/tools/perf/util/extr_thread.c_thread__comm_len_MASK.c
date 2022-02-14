
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int comm_len; int comm; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct thread *VAR_0)
{
 if (!VAR_0->comm_len) {
  if (!VAR_0->comm)
   return 0;
  VAR_0->comm_len = FUNC_0(VAR_0->comm);
 }

 return VAR_0->comm_len;
}
