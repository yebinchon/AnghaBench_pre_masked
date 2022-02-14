
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned long) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 unsigned long VAR_8;
 unsigned VAR_9, VAR_10;
 unsigned VAR_11 = 0;

 if (VAR_4) {
  FUNC_7(&VAR_3);
  return;
 }

 VAR_2 = 0;

 for ( ; ; ) {
  FUNC_2(&VAR_7, VAR_8);
  VAR_11 |= VAR_6 - VAR_5;
  if (VAR_0 == VAR_5)
   break;
  VAR_9 = VAR_0;
  VAR_10 = VAR_5;
  VAR_0 = VAR_5;
  FUNC_3(&VAR_7);
  FUNC_6();
  FUNC_0(VAR_9, VAR_10);
  FUNC_5();
  FUNC_1(VAR_8);
 }
 VAR_1 = 0;
 FUNC_7(&VAR_3);
 FUNC_4(&VAR_7, VAR_8);
 if (VAR_11)
  FUNC_8();
}
