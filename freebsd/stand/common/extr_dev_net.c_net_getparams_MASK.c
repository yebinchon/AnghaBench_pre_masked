
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* n_long ;
struct TYPE_6__ {scalar_t__ s_addr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 char* VAR_5 ;
 char* FUNC_3 (TYPE_1__) ;
 char* FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 TYPE_1__ VAR_6 ;
 void* FUNC_6 () ;
 void* VAR_7 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int) ;
 TYPE_1__ VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_9(int VAR_11)
{
 char VAR_12[VAR_2];
 n_long VAR_13, VAR_14;
 if (FUNC_8(VAR_11)) {
  FUNC_7("net_open: RARP failed\n");
  return (VAR_0);
 }
 FUNC_7("net_open: client addr: %s\n", FUNC_3(VAR_6));


 if (FUNC_2(VAR_11)) {
  FUNC_7("net_open: bootparam/whoami RPC failed\n");
  return (VAR_0);
 }
 VAR_14 = 0;
 VAR_4.s_addr = 0;
 if (FUNC_1(VAR_11, "gateway", &VAR_4, VAR_12) == 0) {

  VAR_14 = FUNC_5(VAR_12);
 }
 if (VAR_14) {
  VAR_7 = VAR_14;




 }






 if (FUNC_1(VAR_11, "root", &VAR_8, VAR_9)) {
  FUNC_7("net_open: bootparam/getfile RPC failed\n");
  return (VAR_0);
 }
exit:
 if ((VAR_13 = FUNC_6()) != VAR_1)
  VAR_8.s_addr = VAR_13;
 return (0);
}
