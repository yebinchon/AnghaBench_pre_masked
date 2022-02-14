
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,unsigned char*,size_t) ;

ssize_t
FUNC_1(int VAR_4, unsigned char *VAR_5, size_t *VAR_6)
{
 size_t VAR_7 = VAR_0 - *VAR_6;
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5 + *VAR_6, VAR_7);

 if (VAR_8 == -1 && (VAR_3 == VAR_1 || VAR_3 == VAR_2))
  VAR_8 = -2;
 if (VAR_8 <= 0)
  return VAR_8;
 *VAR_6 += VAR_8;
 return VAR_8;
}
