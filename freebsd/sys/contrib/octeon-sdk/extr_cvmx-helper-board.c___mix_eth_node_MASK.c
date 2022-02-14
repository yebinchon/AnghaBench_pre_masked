
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_buffer ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (void const*,int,char*,int *) ;
 int FUNC_2 (void const*,char const*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(const void *VAR_0, int VAR_1, int VAR_2)
{
    char VAR_3[20];
    const char*VAR_4;
    int VAR_5;




    FUNC_3(VAR_3, sizeof(VAR_3), "mix%d", VAR_2);

    VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3, ((void*)0));
    if (!VAR_4)
    {
        FUNC_0("ERROR: mix%d path not found in device tree\n",VAR_2);
    }
    VAR_5 = FUNC_2(VAR_0, VAR_4);
    if (VAR_5 < 0)
    {
        FUNC_0("ERROR: %s not found in device tree\n", VAR_4);
        return -1;
    }
    return VAR_5;
}
