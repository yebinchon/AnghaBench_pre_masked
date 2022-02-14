
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int ** VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_1 () ;
 int VAR_11 ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_12 ;

int
FUNC_4(void)
{






 VAR_11 = VAR_2;
 if (VAR_6)
  VAR_11 |= VAR_1;
 else
  VAR_11 |= VAR_3;
 if (VAR_5)



  VAR_11 |= VAR_0;

 if (VAR_8)
  VAR_11 |= VAR_4;

 if ((VAR_10 == ((void*)0)) && ((VAR_9[0] = FUNC_2(VAR_7+2)) == ((void*)0))) {
  FUNC_3(1, "Unable to allocate memory for file name buffer");
  return(-1);
 }

 if (FUNC_1() < 0)
  return(-1);
 if (VAR_12 && (FUNC_0() < 0))
  return(-1);
 return(0);
}
