
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char const**) ;

int
FUNC_4(int VAR_3, char *VAR_4[])
{
    static const char *VAR_5[] =
    {
 "#ifndef NCU_KEYS_H",
 "#define NCU_KEYS_H 1",
 "",
 "/* This file was generated by MAKE_KEYS */",
 "",
 "#if BROKEN_LINKER",
 "static",
 "#endif",
 "const struct tinfo_fkeys _nc_tinfo_fkeys[] = {",
 0
    };
    static const char *VAR_6[] =
    {
 "\t{ 0, 0} };",
 "",
 "#endif /* NCU_KEYS_H */",
 0
    };

    FUNC_3(VAR_2, VAR_5);
    if (VAR_3 > 1) {
 int VAR_7;
 for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++) {
     FILE *VAR_8 = FUNC_1(VAR_4[VAR_7], "r");
     if (VAR_8 != 0) {
  FUNC_2(VAR_8, VAR_2);
  FUNC_0(VAR_8);
     }
 }
    } else {
 FUNC_2(VAR_1, VAR_2);
    }
    FUNC_3(VAR_2, VAR_6);
    return VAR_0;
}
