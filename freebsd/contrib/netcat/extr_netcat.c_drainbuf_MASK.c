
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int,unsigned char*,size_t) ;

ssize_t
FUNC_2(int VAR_3, unsigned char *VAR_4, size_t *VAR_5)
{
 ssize_t VAR_6;
 ssize_t VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, *VAR_5);

 if (VAR_6 == -1 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
  VAR_6 = -2;
 if (VAR_6 <= 0)
  return VAR_6;

 VAR_7 = *VAR_5 - VAR_6;
 if (VAR_7 > 0)
  FUNC_0(VAR_4, VAR_4 + VAR_6, VAR_7);
 *VAR_5 -= VAR_6;
 return VAR_6;
}
