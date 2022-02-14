
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct thr_create_initthr_args {int tid; int ctx; } ;
struct thr_create_args {int id; int ctx; } ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,int *,int ,struct thr_create_initthr_args*) ;

int
FUNC_2(struct thread *VAR_1, struct thr_create_args *VAR_2)

{
 struct thr_create_initthr_args VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2->ctx, &VAR_3.ctx, sizeof(VAR_3.ctx))))
  return (VAR_4);
 VAR_3.tid = VAR_2->id;
 return (FUNC_1(VAR_1, ((void*)0), VAR_0, &VAR_3));
}
