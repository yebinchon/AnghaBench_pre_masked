
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_4__ {char* rcv_path; } ;
typedef int SCR ;
typedef TYPE_1__ EXF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,int ,char*,...) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,char*,char*) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;

int
FUNC_12(
 SCR *VAR_10,
 EXF *VAR_11,
 char *VAR_12)
{
 struct stat VAR_13;
 int VAR_14;
 char *VAR_15, *VAR_16;
 if (FUNC_9(VAR_10, VAR_4, 0))
  goto err;
 VAR_15 = FUNC_1(VAR_10, VAR_4);
 if (FUNC_11(VAR_15, &VAR_13)) {
  if (VAR_9 != VAR_0 || FUNC_7(VAR_15, 0)) {
   FUNC_8(VAR_10, VAR_3, "%s", VAR_15);
   goto err;
  }
  (void)FUNC_2(VAR_15, VAR_7 | VAR_5 | VAR_6 | VAR_8);
 }

 if ((VAR_16 = FUNC_6(VAR_15, "vi.XXXXXX")) == ((void*)0))
  goto err;
 if ((VAR_14 = FUNC_10(VAR_10, VAR_16, VAR_15)) == -1) {
  FUNC_5(VAR_16);
  goto err;
 }
 (void)FUNC_4(VAR_14, VAR_7);
 (void)FUNC_3(VAR_14);

 VAR_11->rcv_path = VAR_16;
 if (0) {
err: FUNC_8(VAR_10, VAR_2,
      "056|Modifications not recoverable if the session fails");
  return (1);
 }


 FUNC_0(VAR_11, VAR_1);
 return (0);
}
