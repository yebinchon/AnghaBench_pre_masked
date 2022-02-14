
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int priv_p ;
typedef int node_p ;
typedef int * iffam_p ;
typedef int * hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int ** FUNC_5 (int const,int * const) ;
 int * FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_2, hook_p VAR_3, const char *VAR_4)
{
 const iffam_p VAR_5 = FUNC_6(VAR_4);
 const priv_p VAR_6 = FUNC_2(VAR_2);
 hook_p *VAR_7;

 if (VAR_5 == ((void*)0))
  return (VAR_1);
 FUNC_3(VAR_6);
 VAR_7 = FUNC_5(VAR_6, VAR_5);
 if (*VAR_7 != ((void*)0)) {
  FUNC_4(VAR_6);
  return (VAR_0);
 }
 *VAR_7 = VAR_3;
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_4(VAR_6);
 return (0);
}
