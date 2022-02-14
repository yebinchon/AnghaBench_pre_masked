
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_buffer ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (void const*,int,char*,int *) ;
 int FUNC_4 (void const*,char const*) ;
 int FUNC_5 (void const*,int,char*) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(const void *VAR_0, int VAR_1, int VAR_2)
{
    char VAR_3[20];
    const char*VAR_4;
    int VAR_5, VAR_6, VAR_7;
    int VAR_8 = FUNC_2(VAR_2);
    int VAR_9 = FUNC_1(VAR_2);

    VAR_4 = FUNC_3(VAR_0, VAR_1, "pip", ((void*)0));
    if (!VAR_4)
    {
        FUNC_0("ERROR: pip path not found in device tree\n");
        return -1;
    }
    VAR_5 = FUNC_4(VAR_0, VAR_4);
    if (VAR_5 < 0)
    {
        FUNC_0("ERROR: pip not found in device tree\n");
        return -1;
    }



    FUNC_6(VAR_3, sizeof(VAR_3), "interface@%d", VAR_8);

    VAR_6 = FUNC_5(VAR_0, VAR_5, VAR_3);
    if (VAR_6 < 0)
    {
        FUNC_0("ERROR : pip intf %d not found in device tree \n",
                     VAR_8);
        return -1;
    }



    FUNC_6(VAR_3, sizeof(VAR_3), "ethernet@%x", VAR_9);

    VAR_7 = FUNC_5(VAR_0, VAR_6, VAR_3);
    if (VAR_7 < 0)
    {
        FUNC_0("ERROR : pip interface@%d ethernet@%d not found in device "
                     "tree\n", VAR_8, VAR_9);
        return -1;
    }
    return VAR_7;
}
