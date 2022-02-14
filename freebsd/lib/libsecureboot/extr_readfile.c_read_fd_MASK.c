
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (int,unsigned char*,int) ;

unsigned char *
FUNC_3(int VAR_0, size_t VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned char *VAR_5;

 VAR_5 = FUNC_1(VAR_1 + 1);
 for (VAR_4 = 0, VAR_2 = VAR_1; VAR_2 > 0; ) {
  VAR_3 = FUNC_2(VAR_0, &VAR_5[VAR_4], VAR_2);
  if (VAR_3 < 0)
   break;
  if (VAR_3 > 0) {
   VAR_2 -= VAR_3;
   VAR_4 += VAR_3;
  }
 }
 if (VAR_2 == 0) {
  VAR_5[VAR_1] = '\0';
  return (VAR_5);
 }
 FUNC_0(VAR_5);
 return (((void*)0));
}
