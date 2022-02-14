
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int * unp_socket; int unp_refcount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct unpcb*) ;
 int FUNC_2 (struct unpcb*) ;
 int FUNC_3 (struct unpcb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct unpcb*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(struct unpcb *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->unp_refcount);
 if ((VAR_2 = FUNC_4(&VAR_1->unp_refcount))) {

  FUNC_0(VAR_1->unp_socket == ((void*)0));
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  FUNC_5(VAR_0, VAR_1);
 }
 return (VAR_2);
}
