
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(time_t VAR_0, char VAR_1[64])
{
    if (VAR_0)
 FUNC_1(VAR_1, 64, "%m-%dT%H:%M", FUNC_0(&VAR_0));
    else
 FUNC_2(VAR_1, "never", 64);
}
