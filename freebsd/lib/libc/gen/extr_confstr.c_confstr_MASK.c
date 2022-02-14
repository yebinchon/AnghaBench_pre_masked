
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;

size_t
FUNC_2(int VAR_4, char *VAR_5, size_t VAR_6)
{
 const char *VAR_7;
 const char VAR_8[] = "unsupported programming environment";

 switch (VAR_4) {
 case 141:
  VAR_7 = VAR_2;
  goto docopy;
 case 140:
 case 139:
 case 138:
 case 131:
 case 130:
 case 129:



  VAR_7 = VAR_8;
  goto docopy;

 case 137:
 case 136:
 case 135:
  if (sizeof(long) * VAR_0 == 32 &&
      sizeof(off_t) > sizeof(long))
   VAR_7 = "";
  else
   VAR_7 = VAR_8;
  goto docopy;

 case 134:
 case 133:
 case 132:
  if (sizeof(long) * VAR_0 >= 64 &&
      sizeof(void *) * VAR_0 >= 64 &&
      sizeof(int) * VAR_0 >= 32 &&
      sizeof(off_t) >= sizeof(long))
   VAR_7 = "";
  else
   VAR_7 = VAR_8;
  goto docopy;

 case 128:

  if (sizeof(long) * VAR_0 >= 64)
   VAR_7 = "_POSIX_V6_LP64_OFF64";
  else
   VAR_7 = "_POSIX_V6_ILP32_OFFBIG";
  goto docopy;

docopy:
  if (VAR_6 != 0 && VAR_5 != ((void*)0))
   FUNC_0(VAR_5, VAR_7, VAR_6);
  return (FUNC_1(VAR_7) + 1);

 default:
  VAR_3 = VAR_1;
  return (0);
 }

}
