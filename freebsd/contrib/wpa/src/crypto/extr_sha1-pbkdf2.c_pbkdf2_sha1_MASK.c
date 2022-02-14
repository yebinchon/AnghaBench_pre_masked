
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (char const*,unsigned char const*,size_t,int,unsigned int,unsigned char*) ;

int FUNC_2(const char *VAR_1, const u8 *VAR_2, size_t VAR_3,
  int VAR_4, u8 *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned char *VAR_8 = VAR_5;
 size_t VAR_9 = VAR_6, VAR_10;
 unsigned char VAR_11[VAR_0];

 while (VAR_9 > 0) {
  VAR_7++;
  if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_7, VAR_11))
   return -1;
  VAR_10 = VAR_9 > VAR_0 ? VAR_0 : VAR_9;
  FUNC_0(VAR_8, VAR_11, VAR_10);
  VAR_8 += VAR_10;
  VAR_9 -= VAR_10;
 }

 return 0;
}
