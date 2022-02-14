
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int const*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;

void
FUNC_6(nvlist_t *VAR_4, const char *VAR_5,
    uint32_t VAR_6, const uint8_t * VAR_7)
{
 nvlist_t *VAR_8;

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_4, VAR_0);
  return;
 }

 FUNC_5(VAR_8, "unicast-mac");
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_8, "default", VAR_7, VAR_1);
 FUNC_4(VAR_8, VAR_6);

 FUNC_2(VAR_4, VAR_5, VAR_8);
}
