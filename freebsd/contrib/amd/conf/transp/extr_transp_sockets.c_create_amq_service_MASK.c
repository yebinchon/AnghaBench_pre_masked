
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct netconfig {int dummy; } ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int,int ,int ) ;
 int * FUNC_5 (int,int ,int ) ;

int
FUNC_6(int *VAR_7,
     SVCXPRT **VAR_8,
     struct netconfig **VAR_9,
     int *VAR_10,
     SVCXPRT **VAR_11,
     struct netconfig **VAR_12,
     u_short VAR_13)
{

  if (VAR_10) {
    *VAR_10 = FUNC_3(VAR_0, VAR_4, 0);
    if (*VAR_10 < 0) {
      FUNC_2(VAR_6, "cannot create tcp socket for amq service: %m");
      return 1;
    }


    if (VAR_13 > 0) {






      if (FUNC_1(*VAR_10, &VAR_13) < 0) {
 FUNC_2(VAR_6, "can't bind amq service to requested TCP port %d: %m)", VAR_13);
 return 1;
      }
    }


    if (VAR_11 &&
 (*VAR_11 = FUNC_4(*VAR_10, VAR_1, VAR_1)) == ((void*)0)) {
      FUNC_2(VAR_6, "cannot create tcp service for amq: soAMQp=%d", *VAR_10);
      return 1;
    }
  }


  if (VAR_7) {
    *VAR_7 = FUNC_3(VAR_0, VAR_3, 0);
    if (*VAR_7 < 0) {
      FUNC_2(VAR_6, "cannot create udp socket for amq service: %m");
      return 1;
    }


    if (VAR_13 > 0) {




      if (FUNC_1(*VAR_7, &VAR_13) < 0) {
 FUNC_2(VAR_6, "can't bind amq service to requested UDP port %d: %m)", VAR_13);
 return 1;
      }
    }


    if (VAR_8 &&
 (*VAR_8 = FUNC_5(*VAR_7, VAR_1, VAR_1)) == ((void*)0)) {
      FUNC_2(VAR_6, "cannot create udp service for amq: soAMQp=%d", *VAR_7);
      return 1;
    }
  }

  return 0;
}
