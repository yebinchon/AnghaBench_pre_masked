
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (char const*,char*) ;

int FUNC_4(int VAR_1, const char** VAR_2) {
    int VAR_3 = 1;
    int VAR_4 = 0;
    if (VAR_1 < 2) {
        FUNC_2(VAR_0, "Error : no argument : need input file \n");
        FUNC_0(9);
    }

    if (!FUNC_3(VAR_2[VAR_3], "--cctxParams")) {
      VAR_4 = 1;
      VAR_3++;
    }

    FUNC_1(VAR_2[VAR_3], VAR_4);
    FUNC_2(VAR_0, "no pb detected\n");
    return 0;
}
