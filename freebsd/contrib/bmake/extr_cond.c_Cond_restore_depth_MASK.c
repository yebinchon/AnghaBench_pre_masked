
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

void
FUNC_1(unsigned int VAR_3)
{
    int VAR_4 = VAR_1 - VAR_2;

    if (VAR_4 != 0 || VAR_3 > VAR_1) {
 FUNC_0(VAR_0, "%d open conditional%s", VAR_4,
      VAR_4 == 1 ? "" : "s");
 VAR_1 = VAR_2;
    }

    VAR_2 = VAR_3;
}
