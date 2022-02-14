
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NODE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,char const*) ;

__attribute__((used)) static int
FUNC_2(NODE *VAR_1, NODE *VAR_2, int VAR_3, char const *VAR_4)
{

 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_1, VAR_3, VAR_4);
  return (1);
 }
 if (VAR_1 == ((void*)0)) {
  FUNC_0("\t");
  FUNC_1(VAR_2, VAR_3, VAR_4);
  return (1);
 }
 if (!(VAR_3 & VAR_0))
  return(0);
 FUNC_0("\t\t");
 FUNC_1(VAR_1, VAR_3, VAR_4);
 FUNC_0("\t\t");
 FUNC_1(VAR_2, VAR_3, VAR_4);
 return (1);
}
