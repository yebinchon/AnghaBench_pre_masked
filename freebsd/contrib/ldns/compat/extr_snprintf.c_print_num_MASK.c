
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int,int,int) ;
 int FUNC_1 (char**,size_t*,int*,char,int) ;
 int FUNC_2 (char**,size_t*,int*,char*,int) ;

__attribute__((used)) static void
FUNC_3(char** VAR_0, size_t* VAR_1, int* VAR_2, int VAR_3, int VAR_4,
 int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9,
 int VAR_10, int VAR_11, char* VAR_12, int VAR_13)
{
 int VAR_14 = VAR_13;
 char VAR_15 = FUNC_0(VAR_11, VAR_8, VAR_9);
 if(VAR_7) {


  int VAR_16 = VAR_14;
  if(VAR_4 == 0 && VAR_10) VAR_16 = 0;
  if(VAR_16 < VAR_4) VAR_16 = VAR_4;
  if(VAR_15) VAR_16++;


  if(VAR_15) FUNC_1(VAR_0, VAR_1, VAR_2, VAR_15, 1);


  if(VAR_4 == 0 && VAR_10) {

  } else {
   if(VAR_14 < VAR_4)
    FUNC_1(VAR_0, VAR_1, VAR_2, '0', VAR_4 - VAR_14);
   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_12, VAR_13);
  }

  if(VAR_16 < VAR_3)
   FUNC_1(VAR_0, VAR_1, VAR_2, ' ', VAR_3 - VAR_16);
 } else {


  int VAR_17 = VAR_14;
  if(VAR_4 == 0 && VAR_10) VAR_17 = 0;
  if(VAR_17 < VAR_4) VAR_17 = VAR_4;
  if(!VAR_5 && VAR_6 && VAR_17 < VAR_3) VAR_17 = VAR_3;
  else if(VAR_15) VAR_17++;


  if(VAR_17 < VAR_3)
   FUNC_1(VAR_0, VAR_1, VAR_2, ' ', VAR_3 - VAR_17);

  if(VAR_15) {
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_15, 1);
   VAR_17--;
  }

  if(VAR_14 < VAR_17)
   FUNC_1(VAR_0, VAR_1, VAR_2, '0', VAR_17 - VAR_14);
  if(VAR_4 == 0 && VAR_10)
   return;

  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_12, VAR_13);
 }
}
