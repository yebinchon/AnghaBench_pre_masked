
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int XDRPROC_T_TYPE ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,char*,int ,char*,struct timeval) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_5(CLIENT *VAR_7, char *VAR_8)
{
  enum clnt_stat VAR_9;
  struct timeval VAR_10;

  FUNC_4("%s: removing ALL\n", VAR_8);
  FUNC_2(VAR_5);

  VAR_10.tv_sec = VAR_0;
  VAR_10.tv_usec = 0;

  if ((VAR_9 = FUNC_0(VAR_7,
    VAR_1,
    (XDRPROC_T_TYPE) VAR_6,
    (char *) ((void*)0),
    (XDRPROC_T_TYPE) VAR_6,
    (char *) ((void*)0),
    VAR_10)) != VAR_2) {



    if (VAR_9 != VAR_3) {
      FUNC_3(VAR_4, "%s MOUNTPROC_UMNTALL: ", VAR_8);
      FUNC_1(VAR_9);
      FUNC_2(VAR_4);
      return -1;
    }
  }

  return 0;
}
