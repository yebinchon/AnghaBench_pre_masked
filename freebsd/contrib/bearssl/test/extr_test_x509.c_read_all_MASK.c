
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t FUNC_0 (unsigned char*,int,size_t,int *) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;

__attribute__((used)) static unsigned char *
FUNC_4(FILE *VAR_0, size_t *VAR_1)
{
 unsigned char *VAR_2;
 size_t VAR_3, VAR_4;

 VAR_4 = 1024;
 VAR_2 = FUNC_3(VAR_4);
 VAR_3 = 0;
 for (;;) {
  size_t VAR_5;

  if (VAR_3 == VAR_4) {
   unsigned char *VAR_6;

   VAR_4 <<= 1;
   VAR_6 = FUNC_3(VAR_4);
   FUNC_1(VAR_6, VAR_2, VAR_3);
   FUNC_2(VAR_2);
   VAR_2 = VAR_6;
  }
  VAR_5 = FUNC_0(VAR_2 + VAR_3, 1, VAR_4 - VAR_3, VAR_0);
  if (VAR_5 == 0) {
   unsigned char *VAR_7;

   VAR_7 = FUNC_3(VAR_3);
   FUNC_1(VAR_7, VAR_2, VAR_3);
   FUNC_2(VAR_2);
   *VAR_1 = VAR_3;
   return VAR_7;
  }
  VAR_3 += VAR_5;
 }
}
