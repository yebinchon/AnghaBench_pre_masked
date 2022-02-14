
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int node_p ;
typedef int hook_p ;
typedef int * hinfo_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_4, hook_p VAR_5, const char *VAR_6)
{
 hinfo_p VAR_7;


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_5, VAR_7);
 return (0);
}
