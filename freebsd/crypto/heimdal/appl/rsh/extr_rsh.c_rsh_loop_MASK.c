
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int,char*,int,int ) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,int) ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (int ,char*,int) ;
 int VAR_13 ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static int
FUNC_15 (int VAR_14, int VAR_15)
{
    fd_set VAR_16;
    int VAR_17 = 1;






    if (VAR_14 >= VAR_2 || (VAR_15 != -1 && VAR_15 >= VAR_2))
 FUNC_8 (1, "fd too large");

    FUNC_3(&VAR_16);
    FUNC_2(VAR_14, &VAR_16);
    if (VAR_15 != -1) {
 FUNC_2(VAR_15, &VAR_16);
 ++VAR_17;
    }
    if(VAR_10)
 FUNC_2(VAR_6, &VAR_16);

    for (;;) {
 int VAR_18;
 fd_set VAR_19;
 char VAR_20[VAR_3];

 VAR_19 = VAR_16;
 VAR_18 = FUNC_13 (FUNC_10(VAR_14, VAR_15) + 1, &VAR_19, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_18 < 0) {
     if (VAR_9 == VAR_1)
  continue;
     else
  FUNC_7 (1, "select");
 }
 if (FUNC_1(VAR_14, &VAR_19)) {
     VAR_18 = FUNC_5 (VAR_14, VAR_20, sizeof(VAR_20), VAR_11[0]);
     if (VAR_18 < 0)
  FUNC_7 (1, "read");
     else if (VAR_18 == 0) {
  FUNC_4 (VAR_14);
  FUNC_0(VAR_14, &VAR_16);
  if (--VAR_17 == 0)
      return 0;
     } else
  FUNC_11 (VAR_7, VAR_20, VAR_18);
 }
 if (VAR_15 != -1 && FUNC_1(VAR_15, &VAR_19)) {
     VAR_18 = FUNC_5 (VAR_15, VAR_20, sizeof(VAR_20), VAR_11[1]);
     if (VAR_18 < 0)
  FUNC_7 (1, "read");
     else if (VAR_18 == 0) {
  FUNC_4 (VAR_15);
  FUNC_0(VAR_15, &VAR_16);
  if (--VAR_17 == 0)
      return 0;
     } else
  FUNC_11 (VAR_5, VAR_20, VAR_18);
 }
 if (FUNC_1(VAR_6, &VAR_19)) {
     VAR_18 = FUNC_12 (VAR_6, VAR_20, sizeof(VAR_20));
     if (VAR_18 < 0)
  FUNC_7 (1, "read");
     else if (VAR_18 == 0) {
  FUNC_4 (VAR_6);
  FUNC_0(VAR_6, &VAR_16);
  FUNC_14 (VAR_14, VAR_4);
     } else
  FUNC_6 (VAR_14, VAR_20, VAR_18, VAR_12[0]);
 }
    }
}
