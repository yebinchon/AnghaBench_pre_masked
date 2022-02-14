
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int,int) ;
 long FUNC_1 () ;
 long VAR_5 ;

int
FUNC_2(void)
{
 long VAR_6;

 VAR_1 = 0;
 VAR_3 = VAR_5 = VAR_2;
 while ((VAR_6 = FUNC_1()) >= 0) {
  VAR_1++;
  VAR_3 = VAR_5;
  VAR_5 = VAR_6;
  if (*VAR_4 != ',' && *VAR_4 != ';')
   break;
  else if (*VAR_4++ == ';')
   VAR_2 = VAR_6;
 }
 if ((VAR_1 = FUNC_0(VAR_1, 2)) == 1 || VAR_5 != VAR_6)
  VAR_3 = VAR_5;
 return (VAR_6 == VAR_0) ? VAR_0 : 0;
}
