
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_3(void)
{
    FUNC_2("\n};\n\n", VAR_7);
    FUNC_1(VAR_7, "const struct linux_logo %s __initconst = {\n", VAR_6);
    FUNC_1(VAR_7, "\t.type\t\t= %s,\n", VAR_4[VAR_3]);
    FUNC_1(VAR_7, "\t.width\t\t= %d,\n", VAR_5);
    FUNC_1(VAR_7, "\t.height\t\t= %d,\n", VAR_2);
    if (VAR_3 == VAR_0) {
 FUNC_1(VAR_7, "\t.clutsize\t= %d,\n", VAR_1);
 FUNC_1(VAR_7, "\t.clut\t\t= %s_clut,\n", VAR_6);
    }
    FUNC_1(VAR_7, "\t.data\t\t= %s_data\n", VAR_6);
    FUNC_2("};\n\n", VAR_7);


    if (VAR_8)
 FUNC_0(VAR_7);
}
