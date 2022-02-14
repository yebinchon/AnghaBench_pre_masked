
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logininfo {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (struct logininfo*,int ,char const*,char const*,char const*) ;
 struct logininfo* FUNC_1 (int) ;

struct
logininfo *FUNC_2(pid_t VAR_0, const char *VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 struct logininfo *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
 return (VAR_4);
}
