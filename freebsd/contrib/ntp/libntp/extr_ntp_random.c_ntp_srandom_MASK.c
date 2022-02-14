
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 scalar_t__ VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 () ;
 long VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long* VAR_5 ;
 int FUNC_2 (int ) ;
 unsigned long* VAR_6 ;

void
FUNC_3(
 unsigned long VAR_7
 )
{
 long VAR_8;

 if (VAR_4 == VAR_0) {
  VAR_6[0] = VAR_7;
 } else {
  VAR_6[0] = VAR_7;
  for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++)
   VAR_6[VAR_8] = FUNC_0(VAR_6[VAR_8 - 1]);
  VAR_1 = &VAR_6[VAR_3];
  VAR_5 = &VAR_6[0];
  for (VAR_8 = 0; VAR_8 < 10 * VAR_2; VAR_8++)
   VAR_7 = FUNC_1();
 }


 FUNC_2((u_int)VAR_7);
}
