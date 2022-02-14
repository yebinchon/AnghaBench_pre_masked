
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int ifc_unrhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct if_clone*,int*) ;

__attribute__((used)) static int
FUNC_3(struct if_clone *VAR_2, int *VAR_3)
{
 int VAR_4;

 *VAR_3 = FUNC_0(VAR_2->ifc_unrhdr);
 if (*VAR_3 == -1)
  return (VAR_1);

 FUNC_1(VAR_2->ifc_unrhdr, *VAR_3);
 for (;;) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (VAR_4 != VAR_0)
   break;

  (*VAR_3)++;
 }

 return (VAR_4);
}
