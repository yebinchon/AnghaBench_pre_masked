
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 () ;
 void** VAR_5 ;
 int ** VAR_6 ;
 int * VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,char*,int) ;

int
FUNC_6()
{
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 char *VAR_19;

 VAR_8 = VAR_1 = FUNC_3((10240 * (sizeof(char))));
 VAR_2 = FUNC_5(VAR_3, VAR_1, 10240);
 if ((VAR_2 >= 10240) || (VAR_2 < 0))
  return(0);



 VAR_12 = FUNC_0();



 if (VAR_12 != 282)
 {
  VAR_4 = VAR_9;
  VAR_8--;
  VAR_8--;
  VAR_12 = FUNC_0();
  if (VAR_12 != 282)
   return(0);
 }



 VAR_14 = FUNC_0();
 VAR_15 = FUNC_0();
 VAR_16 = FUNC_0();
 VAR_17 = FUNC_0();
 VAR_18 = FUNC_0();
 VAR_7 = FUNC_3(VAR_18);
 while (VAR_14 > 0)
 {
  VAR_8++;
  VAR_14--;
 }
 VAR_13 = 0;
 while (VAR_15)
 {
  VAR_15--;
  VAR_0[VAR_13++] = *VAR_8++;
 }
 if ((unsigned long)VAR_8 & 1)
  VAR_8++;
 VAR_13 = 0;
 while (VAR_16)
 {
  VAR_16--;
  VAR_5[VAR_13] = FUNC_0();
  VAR_13++;
 }
 VAR_19 = VAR_8 + VAR_17 + VAR_17;
 FUNC_4(VAR_7, VAR_19, VAR_18);
 VAR_13 = VAR_10;
 while (VAR_17)
 {
  VAR_17--;
  if ((VAR_11=FUNC_0()) != -1)
  {
   if (VAR_6[VAR_13] == ((void*)0))
    VAR_6[VAR_13] = VAR_7 + VAR_11;
  }
  else
   VAR_6[VAR_13] = ((void*)0);
  VAR_13++;
 }
 FUNC_1(VAR_3);
 FUNC_2(VAR_1);
 return(VAR_9);
}
