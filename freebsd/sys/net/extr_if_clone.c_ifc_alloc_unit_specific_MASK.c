
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int ifc_maxunit; char* ifc_name; int ifc_unrhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct if_clone*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct if_clone *VAR_3, int *VAR_4)
{
 char VAR_5[VAR_2];

 if (*VAR_4 > VAR_3->ifc_maxunit)
  return (VAR_1);

 if (FUNC_1(VAR_3->ifc_unrhdr, *VAR_4) == -1)
  return (VAR_0);

 FUNC_4(VAR_5, VAR_2, "%s%d", VAR_3->ifc_name, *VAR_4);
 if (FUNC_3(VAR_5) != ((void*)0)) {
  FUNC_2(VAR_3->ifc_unrhdr, *VAR_4);
  return (VAR_0);
 }

 FUNC_0(VAR_3);

 return (0);
}
