
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int,char*,int,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,char*,int) ;
 int VAR_9 ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int,int *,int *,int *,int *) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static void
FUNC_17 (int VAR_10, int VAR_11,
    int VAR_12, int VAR_13,
    int VAR_14, int VAR_15,
    int VAR_16)
{
    fd_set VAR_17;
    int VAR_18;
    int VAR_19 = 2;
    char *VAR_20;

    if(VAR_10 >= VAR_2 || VAR_13 >= VAR_2 || VAR_15 >= VAR_2)
 FUNC_7 (1, "fd too large");






    FUNC_3(&VAR_17);
    FUNC_2(VAR_10, &VAR_17);
    FUNC_2(VAR_13, &VAR_17);
    FUNC_2(VAR_15, &VAR_17);
    VAR_18 = FUNC_11(VAR_10, FUNC_11(VAR_13, VAR_15)) + 1;

    VAR_20 = FUNC_10(FUNC_11(VAR_3, VAR_4));
    if (VAR_20 == ((void*)0))
 FUNC_16("out of memory");

    for (;;) {
 int VAR_21;
 fd_set VAR_22 = VAR_17;

 VAR_21 = FUNC_14 (VAR_18, &VAR_22, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_21 < 0) {
     if (VAR_6 == VAR_1)
  continue;
     else
  FUNC_16 ("select: %s", FUNC_15(VAR_6));
 }
 if (FUNC_1(VAR_10, &VAR_22)) {
     VAR_21 = FUNC_5 (VAR_10, VAR_20, VAR_3, VAR_7[0]);
     if (VAR_21 < 0)
  FUNC_16 ("read: %s", FUNC_15(VAR_6));
     else if (VAR_21 == 0) {
  FUNC_4 (VAR_10);
  FUNC_4 (VAR_11);
  FUNC_0(VAR_10, &VAR_17);
     } else
  FUNC_12 (VAR_11, VAR_20, VAR_21);
 }
 if (FUNC_1(VAR_13, &VAR_22)) {
     VAR_21 = FUNC_13 (VAR_13, VAR_20, VAR_4);
     if (VAR_21 < 0)
  FUNC_16 ("read: %s", FUNC_15(VAR_6));
     else if (VAR_21 == 0) {
  FUNC_4 (VAR_13);
  FUNC_4 (VAR_12);
  FUNC_0(VAR_13, &VAR_17);
  if (--VAR_19 == 0)
      FUNC_8 (0);
     } else
  FUNC_6 (VAR_12, VAR_20, VAR_21, VAR_8[0]);
 }
 if (FUNC_1(VAR_15, &VAR_22)) {
     VAR_21 = FUNC_13 (VAR_15, VAR_20, VAR_4);
     if (VAR_21 < 0)
  FUNC_16 ("read: %s", FUNC_15(VAR_6));
     else if (VAR_21 == 0) {
  FUNC_4 (VAR_15);
  FUNC_4 (VAR_14);
  FUNC_0(VAR_15, &VAR_17);
  if (--VAR_19 == 0)
      FUNC_8 (0);
     } else
  FUNC_6 (VAR_14, VAR_20, VAR_21, VAR_8[1]);
 }
   }
}
