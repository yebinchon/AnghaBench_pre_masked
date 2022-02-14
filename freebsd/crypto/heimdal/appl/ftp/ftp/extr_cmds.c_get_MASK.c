
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char**,int ,char*) ;
 scalar_t__ VAR_2 ;

void
FUNC_1(int VAR_3, char **VAR_4)
{
    char *VAR_5;

    if (VAR_2) {
 if (VAR_1 == VAR_0)
     VAR_5 = "r+wb";
 else
     VAR_5 = "r+w";
    } else {
 if (VAR_1 == VAR_0)
     VAR_5 = "wb";
 else
     VAR_5 = "w";
    }

    FUNC_0(VAR_3, VAR_4, 0, VAR_5);
}
