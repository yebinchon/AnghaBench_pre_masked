
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ,char const*,int *,size_t) ;
 size_t FUNC_1 (int ,char const*) ;
 int * FUNC_2 (size_t,int ,int ) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_4, const char *VAR_5, pcell_t **VAR_6, size_t *VAR_7)
{

 if ((*VAR_7 = FUNC_1(VAR_4, VAR_5)) <= 0) {
  return (VAR_1);
 }
 if ((*VAR_6 = FUNC_2(*VAR_7, VAR_2, VAR_3)) == ((void*)0)) {
  return (VAR_0);
 }
 if (FUNC_0(VAR_4, VAR_5, *VAR_6, *VAR_7) != *VAR_7) {
  return (VAR_1);
 }
 return (0);
}
