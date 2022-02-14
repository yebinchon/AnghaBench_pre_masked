
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;

void
FUNC_6(nvlist_t *VAR_3, const char *VAR_4, uint32_t VAR_5,
    const char *VAR_6)
{
 nvlist_t *VAR_7;

 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_3, VAR_0);
  return;
 }

 FUNC_5(VAR_7, "string");
 if (VAR_5 & VAR_1)
  FUNC_0(VAR_7, "default", VAR_6);
 FUNC_4(VAR_7, VAR_5);

 FUNC_2(VAR_3, VAR_4, VAR_7);
}
