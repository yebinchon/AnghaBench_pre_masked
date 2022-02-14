
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_flag_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*,int ,char*) ;
 int FUNC_1 (char const*,int*,int ,char*,int*) ;

int
FUNC_2(const char *VAR_1, acl_flag_t *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1, &VAR_5, VAR_0, "flags", &VAR_4);
 if (VAR_3 && VAR_4)
  VAR_3 = FUNC_0(VAR_1, &VAR_5, VAR_0, "flags");

 *VAR_2 = VAR_5;

 return (VAR_3);
}
