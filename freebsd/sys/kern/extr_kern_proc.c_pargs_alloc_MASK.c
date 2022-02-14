
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pargs {int ar_length; int ar_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pargs* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *,int) ;

struct pargs *
FUNC_2(int VAR_2)
{
 struct pargs *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct pargs) + VAR_2, VAR_0,
  VAR_1);
 FUNC_1(&VAR_3->ar_ref, 1);
 VAR_3->ar_length = VAR_2;
 return (VAR_3);
}
