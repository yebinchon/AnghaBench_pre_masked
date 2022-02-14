
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_usec; } ;
typedef int l_fp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*,char const*,int) ;
 int FUNC_1 (struct timeval) ;

int
FUNC_2(
 const char *VAR_3,
 l_fp *VAR_4
 )
{
 struct timeval VAR_5;




 FUNC_0(&VAR_5, VAR_3, sizeof(VAR_5));




 if (VAR_5.tv_usec > VAR_1 - 1)
  return VAR_0;

 *VAR_4 = FUNC_1(VAR_5);

 return VAR_2;
}
