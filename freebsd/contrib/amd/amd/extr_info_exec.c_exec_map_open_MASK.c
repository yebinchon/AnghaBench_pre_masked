
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,char**,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(char *VAR_7, char *VAR_8)
{
  pid_t VAR_9, VAR_10;
  int VAR_11[2], VAR_12, VAR_13;
  char *VAR_14[3];

  if (!VAR_7)
    return 0;

  VAR_14[0] = VAR_7;
  VAR_14[1] = VAR_8;
  VAR_14[2] = ((void*)0);

  if ((VAR_12 = FUNC_4("/dev/null", VAR_3|VAR_2)) < 0)
    return -1;

  if (FUNC_5(VAR_11) < 0) {
    FUNC_0(VAR_12);
    return -1;
  }

  switch ((VAR_9 = FUNC_7())) {
  case -1:

    FUNC_0(VAR_12);
    FUNC_0(VAR_11[0]);
    FUNC_0(VAR_11[1]);
    return -1;
  case 0:

    VAR_10 = FUNC_7();
    switch (VAR_10) {
    case -1:

      FUNC_3(VAR_6);
    case 0:

      if (VAR_11[1] != VAR_5) {
 FUNC_1(VAR_11[1], VAR_5);
 FUNC_0(VAR_11[1]);
      }

      if (VAR_12 != VAR_4) {
 FUNC_1(VAR_12, VAR_4);
 FUNC_0(VAR_12);
      }

      for (VAR_13=0; VAR_13<VAR_1; VAR_13++)
 if (VAR_13 != VAR_5 && VAR_13 != VAR_4)
   FUNC_0(VAR_13);


      if (!FUNC_6(VAR_5)) {
 FUNC_0(VAR_5);
 FUNC_3(-1);
      }

      FUNC_2(VAR_7, VAR_14, ((void*)0));
      FUNC_3(VAR_6);
    }


    FUNC_3(0);
  }


  FUNC_0(VAR_12);
  FUNC_0(VAR_11[1]);


  while (FUNC_8(VAR_9, 0, 0) < 0)
    if (VAR_6 != VAR_0)
      FUNC_3(VAR_6);


  if (!FUNC_6(VAR_11[0])) {
    FUNC_0(VAR_11[0]);
    return -1;
  }

  return VAR_11[0];
}
