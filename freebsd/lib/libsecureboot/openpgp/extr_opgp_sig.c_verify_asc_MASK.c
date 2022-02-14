
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pbuf ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (char*,unsigned char*,size_t,unsigned char*,size_t,int) ;
 unsigned char* FUNC_2 (char const*,size_t*) ;
 size_t FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char) ;

unsigned char *
FUNC_5(const char *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4;
 size_t VAR_5;
 unsigned char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;

 if ((VAR_7 = FUNC_2(VAR_1, &VAR_9))) {
  VAR_5 = FUNC_3(VAR_3, VAR_1, sizeof(VAR_3));
  if ((VAR_4 = FUNC_4(VAR_3, '.')))
   *VAR_4 = '\0';
  if ((VAR_6 = FUNC_2(VAR_3, &VAR_8))) {
   if (FUNC_1(VAR_3, VAR_6, VAR_8, VAR_7,
    VAR_9, VAR_2)) {
    FUNC_0(VAR_6);
    VAR_6 = ((void*)0);
   }
  }
 } else
  VAR_6 = ((void*)0);
 FUNC_0(VAR_7);
 return (VAR_6);
}
