
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbus_bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static dbus_bool_t FUNC_1(const char *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_2[VAR_4] != ((void*)0)) {
  if (FUNC_0(VAR_3, VAR_2[VAR_4]) == 0)
   return VAR_0;
  VAR_4++;
 }
 return VAR_1;
}
