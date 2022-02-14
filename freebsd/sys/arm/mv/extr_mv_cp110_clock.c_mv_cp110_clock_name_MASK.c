
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,int ,char*,char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_3(device_t VAR_1, const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_0(&VAR_3, VAR_0, "%s-%d", VAR_2, VAR_4) <= 0)
  FUNC_2("Cannot generate unique clock name for %s\n", VAR_2);
 return (VAR_3);
}
