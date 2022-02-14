
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int memlimitstr ;
typedef enum message_verbosity { ____Placeholder_message_verbosity } message_verbosity ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char*) ;
 char* FUNC_6 (int,int) ;
 int VAR_2 ;

extern void
FUNC_7(enum message_verbosity VAR_3, uint64_t VAR_4)
{
 if (VAR_3 > VAR_2)
  return;





 VAR_4 = FUNC_4(VAR_4);

 uint64_t VAR_5 = FUNC_2(VAR_1);



 if (VAR_5 == VAR_0) {
  FUNC_3(VAR_3, FUNC_1("%s MiB of memory is required. "
    "The limiter is disabled."),
    FUNC_6(VAR_4, 0));
  return;
 }




 char VAR_6[128];




 if (VAR_5 < (FUNC_0(1) << 20)) {
  FUNC_5(VAR_6, sizeof(VAR_6), "%s B",
    FUNC_6(VAR_5, 1));
 } else {






  FUNC_5(VAR_6, sizeof(VAR_6), "%s MiB",
    FUNC_6(FUNC_4(VAR_5), 1));
 }

 FUNC_3(VAR_3, FUNC_1("%s MiB of memory is required. The limit is %s."),
   FUNC_6(VAR_4, 0), VAR_6);

 return;
}
