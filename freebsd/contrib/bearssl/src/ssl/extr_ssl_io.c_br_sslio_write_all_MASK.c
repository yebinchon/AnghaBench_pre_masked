
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sslio_context ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;

int
FUNC_1(br_sslio_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;

 VAR_3 = VAR_1;
 while (VAR_2 > 0) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
  if (VAR_4 < 0) {
   return -1;
  }
  VAR_3 += VAR_4;
  VAR_2 -= (size_t)VAR_4;
 }
 return 0;
}
