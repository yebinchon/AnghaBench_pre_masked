
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union umad_gid {int dummy; } umad_gid ;
typedef int buf ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char**,char*) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char const*,char const*,char*,int) ;

int FUNC_4(const char *VAR_1, const char *VAR_2,
   union umad_gid *VAR_3)
{
 char VAR_4[64], *VAR_5, *VAR_6;
 __be16 *VAR_7 = (__be16 *) VAR_3;
 int VAR_8, VAR_9;

 if ((VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_4, sizeof(VAR_4))) < 0)
  return VAR_8;

 for (VAR_6 = VAR_4, VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  if (!(VAR_5 = FUNC_1(&VAR_6, ": \t\n")))
   return -VAR_0;
  VAR_7[VAR_9] = FUNC_0(FUNC_2(VAR_5, ((void*)0), 16) & 0xffff);
 }

 return 0;
}
