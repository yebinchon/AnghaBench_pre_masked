
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int voidp ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int host_addr ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int VAR_7 ;
 int * FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct sockaddr_in*,int ,int ,int*,int ,int ) ;
 int * FUNC_5 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 struct hostent* FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct sockaddr_in*,int ,int) ;
 int FUNC_12 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_11 ;
 int FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static CLIENT *
FUNC_16(char *VAR_12, struct timeval *VAR_13)
{
  CLIENT *VAR_14;
  struct sockaddr_in VAR_15;
  struct hostent *VAR_16;

  int VAR_17;


  if (FUNC_13(VAR_7)) {
    if (!VAR_10) {
      FUNC_7(VAR_11, "%s: ", VAR_12);
      FUNC_3(VAR_4);
      FUNC_7(VAR_11, "\n");
      FUNC_6(VAR_11);
    }
    return ((void*)0);
  }
  FUNC_14(VAR_5, VAR_8);
  FUNC_15(VAR_13->tv_sec * 1000000 + VAR_13->tv_usec, 0);




  if ((VAR_16 = FUNC_8(VAR_12)) == 0 && !FUNC_0(VAR_12, VAR_9)) {
    FUNC_7(VAR_11, "can't get address of %s\n", VAR_12);
    return ((void*)0);
  }
  FUNC_11(&VAR_15, 0, sizeof(VAR_15));

  VAR_15.sin_family = VAR_0;
  if (VAR_16) {
    FUNC_10((voidp) &VAR_15.sin_addr, (voidp) VAR_16->h_addr,
     sizeof(VAR_15.sin_addr));
  } else {

    VAR_15.sin_addr.s_addr = FUNC_9(0x7f000001);
  }







  VAR_17 = VAR_3;
  VAR_14 = FUNC_4(&VAR_15, VAR_1, VAR_2, &VAR_17, 0, 0);
  if (!VAR_14) {

    VAR_17 = FUNC_12(VAR_6);
    VAR_14 = FUNC_5(&VAR_15, VAR_1, VAR_2, *VAR_13, &VAR_17);
  }


  if (!VAR_14) {
    FUNC_15(0, 0);
    if (!VAR_10) {
      FUNC_2(VAR_12);
      FUNC_6(VAR_11);
    }
    return ((void*)0);
  }

  FUNC_15(0, 0);
  return VAR_14;
}
