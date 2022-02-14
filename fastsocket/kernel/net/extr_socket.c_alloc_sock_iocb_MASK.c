
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_iocb {struct kiocb* kiocb; } ;
struct kiocb {struct sock_iocb* private; int ki_dtor; } ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*) ;
 struct sock_iocb* FUNC_1 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct sock_iocb *FUNC_2(struct kiocb *VAR_2,
      struct sock_iocb *VAR_3)
{
 if (!FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
  if (!VAR_3)
   return ((void*)0);
  VAR_2->ki_dtor = VAR_1;
 }

 VAR_3->kiocb = VAR_2;
 VAR_2->private = VAR_3;
 return VAR_3;
}
