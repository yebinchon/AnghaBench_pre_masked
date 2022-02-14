
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,size_t,char*) ;
 int FUNC_2 (char*,size_t,char*,int ) ;

void
FUNC_3(time_t VAR_0, char *VAR_1, size_t VAR_2, int VAR_3)
{
    if(VAR_0) {
 if(VAR_3)
     FUNC_2(VAR_1, VAR_2, "%Y-%m-%d %H:%M:%S UTC", FUNC_0(&VAR_0));
 else
     FUNC_2(VAR_1, VAR_2, "%Y-%m-%d", FUNC_0(&VAR_0));
    } else
 FUNC_1(VAR_1, VAR_2, "never");
}
