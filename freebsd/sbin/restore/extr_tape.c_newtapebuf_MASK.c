
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (long) ;
 long VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

void
FUNC_4(long VAR_4)
{
 static int VAR_5 = -1;

 VAR_1 = VAR_4;
 if (VAR_4 <= VAR_5)
  return;
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3 - VAR_0);
 VAR_3 = FUNC_3((VAR_4+1) * VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2, "Cannot allocate space for tape buffer\n");
  FUNC_0(1);
 }
 VAR_3 += VAR_0;
 VAR_5 = VAR_4;
}
