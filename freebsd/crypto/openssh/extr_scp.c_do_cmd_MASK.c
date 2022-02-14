
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int,int) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,int ,char*,char*,char*) ;
 int FUNC_7 () ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

int
FUNC_13(char *VAR_15, char *VAR_16, int VAR_17, char *VAR_18, int *VAR_19, int *VAR_20)
{
 int VAR_21[2], VAR_22[2], VAR_23[2];

 if (VAR_14)
  FUNC_6(VAR_12,
      "Executing: program %s host %s, user %s, command %s\n",
      VAR_10, VAR_15,
      VAR_16 ? VAR_16 : "(unspecified)", VAR_18);

 if (VAR_17 == -1)
  VAR_17 = VAR_11;





 if (FUNC_9(VAR_23) < 0)
  FUNC_5("pipe: %s", FUNC_12(VAR_8));


 if (FUNC_9(VAR_21) < 0)
  FUNC_5("pipe: %s", FUNC_12(VAR_8));
 if (FUNC_9(VAR_22) < 0)
  FUNC_5("pipe: %s", FUNC_12(VAR_8));


 FUNC_1(VAR_23[0]);
 FUNC_1(VAR_23[1]);

 FUNC_11(VAR_3, VAR_13);
 FUNC_11(VAR_4, VAR_13);
 FUNC_11(VAR_5, VAR_13);


 VAR_7 = FUNC_7();
 if (VAR_7 == 0) {

  FUNC_1(VAR_21[1]);
  FUNC_1(VAR_22[0]);
  FUNC_2(VAR_21[0], 0);
  FUNC_2(VAR_22[1], 1);
  FUNC_1(VAR_21[0]);
  FUNC_1(VAR_22[1]);

  FUNC_10(&VAR_6, 0, "%s", VAR_10);
  if (VAR_17 != -1) {
   FUNC_0(&VAR_6, "-p");
   FUNC_0(&VAR_6, "%d", VAR_17);
  }
  if (VAR_16 != ((void*)0)) {
   FUNC_0(&VAR_6, "-l");
   FUNC_0(&VAR_6, "%s", VAR_16);
  }
  FUNC_0(&VAR_6, "--");
  FUNC_0(&VAR_6, "%s", VAR_15);
  FUNC_0(&VAR_6, "%s", VAR_18);

  FUNC_3(VAR_10, VAR_6.list);
  FUNC_8(VAR_10);
  FUNC_4(1);
 } else if (VAR_7 == -1) {
  FUNC_5("fork: %s", FUNC_12(VAR_8));
 }

 FUNC_1(VAR_21[0]);
 *VAR_20 = VAR_21[1];
 FUNC_1(VAR_22[1]);
 *VAR_19 = VAR_22[0];
 FUNC_11(VAR_2, VAR_9);
 FUNC_11(VAR_1, VAR_9);
 FUNC_11(VAR_0, VAR_9);
 return 0;
}
