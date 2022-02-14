
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int*) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int
FUNC_7(char *VAR_9, char *VAR_10, char *VAR_11, int *VAR_12, int *VAR_13)
{
 int VAR_14[2], VAR_15[2], VAR_16[2];





 FUNC_6(VAR_16);


 if (FUNC_6(VAR_14) < 0) {
  FUNC_5("pipe");
  FUNC_3(255);
 }
 if (FUNC_6(VAR_15) < 0) {
  FUNC_5("pipe");
  FUNC_3(255);
 }


 FUNC_0(VAR_16[0]);
 FUNC_0(VAR_16[1]);


 if (FUNC_4() == 0) {
  char *VAR_17[100];
  unsigned int VAR_18;


  FUNC_0(VAR_14[1]);
  FUNC_0(VAR_15[0]);
  FUNC_1(VAR_14[0], 0);
  FUNC_1(VAR_15[1], 1);
  FUNC_0(VAR_14[0]);
  FUNC_0(VAR_15[1]);

  VAR_18 = 0;
  VAR_17[VAR_18++] = VAR_0;
  if (VAR_7)
   VAR_17[VAR_18++] = "-4";
  if (VAR_8)
   VAR_17[VAR_18++] = "-5";
  if (VAR_6)
   VAR_17[VAR_18++] = "-K";
  if (VAR_1)
   VAR_17[VAR_18++] = "-x";
  if (VAR_3)
   VAR_17[VAR_18++] = "-F";
  if (VAR_4)
   VAR_17[VAR_18++] = "-z";
  if (VAR_5 != ((void*)0)) {
   VAR_17[VAR_18++] = "-p";
   VAR_17[VAR_18++] = VAR_5;
  }
  if (VAR_2)
      VAR_17[VAR_18++] = "-e";
  if (VAR_10 != ((void*)0)) {
   VAR_17[VAR_18++] = "-l";
   VAR_17[VAR_18++] = VAR_10;
  }
  VAR_17[VAR_18++] = VAR_9;
  VAR_17[VAR_18++] = VAR_11;
  VAR_17[VAR_18++] = ((void*)0);

  FUNC_2(VAR_0, VAR_17);
  FUNC_5(VAR_0);
  FUNC_3(1);
 }

 FUNC_0(VAR_14[0]);
 *VAR_13 = VAR_14[1];
 FUNC_0(VAR_15[1]);
 *VAR_12 = VAR_15[0];
 return 0;
}
