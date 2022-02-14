
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wherefrom ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct ip {int ip_hl; TYPE_1__ ip_src; } ;
typedef int fd_set ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char*,struct sockaddr_in*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,struct sockaddr*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,struct sockaddr*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,char**,char*) ;
 int VAR_8 ;
 int FUNC_13 (char*,int ,int ) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (int,char*,int) ;
 int FUNC_15 (int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_16 (int,char*,int,int ) ;
 int FUNC_17 (int ,int (*) (int)) ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int ,char*) ;
 int VAR_11 ;
 scalar_t__ FUNC_20 (char*,struct sockaddr*,char*) ;
 int FUNC_21 () ;
 int FUNC_22 (int,char*,int) ;

int FUNC_23 (int VAR_12, char **VAR_13)
{
  int VAR_14, VAR_15, VAR_16;

  char *VAR_17 = ((void*)0);
  char *VAR_18 = ((void*)0);
  char *VAR_19 = ((void*)0);
  char *VAR_20;
  char *VAR_21 = ((void*)0);
  char *VAR_22 = ((void*)0);
  int VAR_23;

  struct sockaddr VAR_24;
  struct sockaddr VAR_25;
  struct sockaddr VAR_26;
  struct sockaddr_in *VAR_27;

  char VAR_28[0x2000];
  struct ip *VAR_29 = (struct ip *)VAR_28;

  fd_set VAR_30;
  int VAR_31;
  int VAR_32;


  while ((VAR_14 = FUNC_12(VAR_12, VAR_13, "d:s:t:p:")) != -1) {
    switch (VAR_14) {
    case 'd':
      VAR_19 = VAR_9;
      break;
    case 's':
      VAR_18 = VAR_9;
      break;
    case 't':
      VAR_17 = VAR_9;
      break;
    case 'p':
      VAR_22 = VAR_9;
      break;
    }
  }
  VAR_12 -= VAR_10;
  VAR_13 += VAR_10;

  if ((VAR_12 != 1 && VAR_12 != 2) || (VAR_17 == ((void*)0)) ||
      (VAR_18 == ((void*)0)) || (VAR_19 == ((void*)0))) {
    FUNC_21();
  }

  if(VAR_22 == ((void*)0))
      VAR_23 = 94;
  else
      VAR_23 = FUNC_5(VAR_22);

  if (VAR_12 == 1) {
      VAR_20 = *VAR_13;
  } else {
      VAR_21 = *VAR_13++; VAR_20 = *VAR_13;
  }


  FUNC_13("nos-tun", VAR_3, VAR_1);

  if(FUNC_4(VAR_18, (struct sockaddr_in *)&VAR_24)) {
    FUNC_8();
    FUNC_11(2);
  }

  if(FUNC_20(VAR_17, &VAR_24, VAR_19)) {
    FUNC_8();
    FUNC_11(3);
  }

  VAR_27 = (struct sockaddr_in *)&VAR_25;
  if(FUNC_4(VAR_20, VAR_27))
    FUNC_3(4);

  if ((VAR_8 = FUNC_18(VAR_0, VAR_7, VAR_23)) < 0) {
    FUNC_19(VAR_2,"can't open socket - %m");
    FUNC_3(5);
  }

  if (VAR_21) {
 if (FUNC_4(VAR_21, (struct sockaddr_in *)&VAR_26))
   FUNC_3(9);
    if (FUNC_6(VAR_8, &VAR_26, sizeof(VAR_26)) < 0) {
   FUNC_19(VAR_2, "can't bind source address - %m");
   FUNC_3(10);
 }
  }

  if (FUNC_9(VAR_8,&VAR_25,sizeof(struct sockaddr_in)) < 0 ) {
    FUNC_19(VAR_2,"can't connect to target - %m");
    FUNC_7(VAR_8);
    FUNC_3(6);
  }


  FUNC_10(0,0);


  (void)FUNC_17(VAR_4,FUNC_3);
  (void)FUNC_17(VAR_5,FUNC_3);
  (void)FUNC_17(VAR_6,FUNC_3);

  if (VAR_11 > VAR_8)
 VAR_32 = VAR_11;
  else
 VAR_32 = VAR_8;

  for (;;) {

    FUNC_2(&VAR_30);
    FUNC_1(VAR_11,&VAR_30); FUNC_1(VAR_8,&VAR_30);

    VAR_31 = FUNC_15(VAR_32+1,&VAR_30,((void*)0),((void*)0),((void*)0));
    if(VAR_31 < 0) {
      FUNC_19(VAR_2,"interrupted select");
      FUNC_7(VAR_8);
      FUNC_3(7);
    }
    if(VAR_31 == 0) {
      FUNC_19(VAR_2,"timeout in select");
      FUNC_7(VAR_8);
      FUNC_3(8);
    }


    if(FUNC_0(VAR_8,&VAR_30)) {

      VAR_15 = FUNC_14(VAR_8, VAR_28, sizeof(VAR_28));

      if((VAR_29->ip_src).s_addr == (VAR_27->sin_addr).s_addr) {

 VAR_16 = (VAR_29->ip_hl << 2);

 FUNC_22(VAR_11,VAR_28+VAR_16,VAR_15-VAR_16);
      }
    }

    if(FUNC_0(VAR_11,&VAR_30)) {

      VAR_15 = FUNC_14(VAR_11, VAR_28, sizeof(VAR_28));

      if(FUNC_16(VAR_8, VAR_28, VAR_15,0) <= 0) {
 FUNC_19(VAR_2,"can't send - %m");
      }
    }
  }
}
