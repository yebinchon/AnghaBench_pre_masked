
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (char const*,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;

int
FUNC_5(const char *VAR_3, char *VAR_4, size_t VAR_5,
    unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8;
 char *VAR_9;

 VAR_7 = VAR_6 & 0xFFFF;
 VAR_8 = VAR_6 >> 16;

 if (VAR_3 == ((void*)0) ||
     ((VAR_7 = FUNC_2(VAR_3, VAR_7)) == 0)) {
  VAR_2 = VAR_0;
  return (-1);
 }

 if ((VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_8)) == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }

 if (VAR_4 == ((void*)0) || VAR_5 < FUNC_3(VAR_9) + 1) {
  FUNC_1(VAR_9);
  VAR_2 = VAR_1;
  return (-1);
 }

 FUNC_4(VAR_4, VAR_9, VAR_5);
 VAR_4[VAR_5 - 1] = '\0';
 FUNC_1(VAR_9);

 return (0);
}
