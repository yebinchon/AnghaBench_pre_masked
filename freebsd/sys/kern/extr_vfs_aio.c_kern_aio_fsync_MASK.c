
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct aiocb_ops {int dummy; } ;
struct aiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,struct aiocb*,int *,int ,struct aiocb_ops*) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_3, int VAR_4, struct aiocb *VAR_5,
    struct aiocb_ops *VAR_6)
{

 if (VAR_4 != VAR_2)
  return (VAR_0);
 return (FUNC_0(VAR_3, VAR_5, ((void*)0), VAR_1, VAR_6));
}
