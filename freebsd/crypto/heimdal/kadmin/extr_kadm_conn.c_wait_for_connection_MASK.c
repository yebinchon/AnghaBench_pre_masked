
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_socket_t ;
typedef int krb5_context ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int VAR_9 ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,scalar_t__*,unsigned int,unsigned int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_15 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_16(krb5_context VAR_12,
      krb5_socket_t *VAR_13, unsigned int VAR_14)
{
    unsigned int VAR_15;
    int VAR_16;
    fd_set VAR_17, VAR_18;
    int VAR_19, VAR_20 = -1;

    FUNC_2(&VAR_17);

    for(VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {




 FUNC_1(VAR_13[VAR_15], &VAR_17);
 VAR_20 = FUNC_9(VAR_20, VAR_13[VAR_15]);
    }

    VAR_7 = FUNC_6();

    if(FUNC_12(0, VAR_7) < 0)
 FUNC_3(1, "setpgid");

    FUNC_13(VAR_4, VAR_11);
    FUNC_13(VAR_3, VAR_11);
    FUNC_13(VAR_2, VAR_9);

    while (VAR_10 == 0) {
 VAR_18 = VAR_17;
 VAR_16 = FUNC_11(VAR_20 + 1, &VAR_18, ((void*)0), ((void*)0), ((void*)0));
 if(FUNC_10(VAR_16)) {
     if(VAR_8 != VAR_0)
  FUNC_7(VAR_12, VAR_8, "select");
 } else if(VAR_16 == 0)
     FUNC_8(VAR_12, "select returned 0");
 else {
     for(VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  if(FUNC_0(VAR_13[VAR_15], &VAR_18))
      if(FUNC_14(VAR_12, VAR_13, VAR_14, VAR_15) == 0)
   return;
     }
 }
    }
    FUNC_13(VAR_2, VAR_5);

    while ((FUNC_15(-1, &VAR_19, VAR_6)) > 0)
 ;

    FUNC_5(0);
}
