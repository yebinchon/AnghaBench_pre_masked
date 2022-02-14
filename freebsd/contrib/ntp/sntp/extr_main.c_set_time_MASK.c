
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (double) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (double) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_4(
 double VAR_7
 )
{
 int VAR_8;

 if (VAR_6)
  return VAR_0;





 if (FUNC_0(VAR_3) &&
     ( !FUNC_0(VAR_2)
      || (FUNC_0(VAR_2) && (FUNC_2(VAR_7) > VAR_5))
     )) {
  VAR_8 = FUNC_3(VAR_7);


  if (1 == VAR_8)
   VAR_6 = VAR_4;
  return (VAR_6)
      ? VAR_0
      : 1;






 }

 if (FUNC_0(VAR_2)) {
  VAR_8 = FUNC_1(VAR_7);


  if (1 == VAR_8)
   VAR_6 = VAR_4;
  return (VAR_6)
      ? VAR_0
      : 1;






 }

 return VAR_1;
}
