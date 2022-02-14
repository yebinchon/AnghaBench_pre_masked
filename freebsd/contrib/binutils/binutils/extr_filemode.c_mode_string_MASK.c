
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 char FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,char*) ;

void
FUNC_2 (unsigned long VAR_9, char *VAR_10)
{
  VAR_10[0] = FUNC_0 ((unsigned long) VAR_9);
  VAR_10[1] = (VAR_9 & VAR_2) != 0 ? 'r' : '-';
  VAR_10[2] = (VAR_9 & VAR_5) != 0 ? 'w' : '-';
  VAR_10[3] = (VAR_9 & VAR_8) != 0 ? 'x' : '-';
  VAR_10[4] = (VAR_9 & VAR_0) != 0 ? 'r' : '-';
  VAR_10[5] = (VAR_9 & VAR_3) != 0 ? 'w' : '-';
  VAR_10[6] = (VAR_9 & VAR_6) != 0 ? 'x' : '-';
  VAR_10[7] = (VAR_9 & VAR_1) != 0 ? 'r' : '-';
  VAR_10[8] = (VAR_9 & VAR_4) != 0 ? 'w' : '-';
  VAR_10[9] = (VAR_9 & VAR_7) != 0 ? 'x' : '-';
  FUNC_1 ((unsigned long) VAR_9, VAR_10);
}
