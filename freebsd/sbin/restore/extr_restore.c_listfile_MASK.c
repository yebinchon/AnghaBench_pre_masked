
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ ino_t ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,char*) ;

long
FUNC_3(char *VAR_6, ino_t VAR_7, int VAR_8)
{
 long VAR_9 = VAR_4 ? VAR_1 : VAR_0;

 if (FUNC_0(VAR_7, VAR_3) == 0)
  return (VAR_9);
 FUNC_2(VAR_5, "%s", VAR_8 == VAR_2 ? "leaf" : "dir ");
 FUNC_1(VAR_5, "%10jd\t%s\n", (uintmax_t)VAR_7, VAR_6);
 return (VAR_9);
}
