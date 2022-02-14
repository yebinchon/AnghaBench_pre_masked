
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tempf ;
struct trust_anchor {TYPE_1__* autr; } ;
struct module_env {scalar_t__ worker; } ;
struct TYPE_2__ {char* file; } ;
typedef int HANDLE ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,struct trust_anchor*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,int,char*,char*,int,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*,char*) ;

void FUNC_18(struct module_env* VAR_2, struct trust_anchor* VAR_3)
{
 FILE* VAR_4;
 char* VAR_5 = VAR_3->autr->file;
 char VAR_6[2048];
 FUNC_11(VAR_3->autr);
 if(!VAR_2) {
  FUNC_12("autr_write_file: Module environment is NULL.");
  return;
 }

 FUNC_14(VAR_6, sizeof(VAR_6), "%s.%d-%d", VAR_5, (int)FUNC_10(),
  VAR_2->worker?*(int*)VAR_2->worker:0);
 FUNC_17(VAR_0, "autotrust: write to disk: %s", VAR_6);
 VAR_4 = FUNC_8(VAR_6, "w");
 if(!VAR_4) {
  FUNC_4("could not open autotrust file for writing, %s: %s",
   VAR_6, FUNC_15(VAR_1));
  return;
 }
 if(!FUNC_3(VAR_4, VAR_6, VAR_3)) {

  FUNC_5(VAR_4);
  FUNC_16(VAR_6);
  FUNC_4("could not completely write: %s", VAR_5);
  return;
 }
 if(FUNC_6(VAR_4) != 0)
  FUNC_12("could not fflush(%s): %s", VAR_5, FUNC_15(VAR_1));




 FUNC_0((HANDLE)FUNC_2(FUNC_1(VAR_4)));

 if(FUNC_5(VAR_4) != 0) {
  FUNC_4("could not complete write: %s: %s",
   VAR_5, FUNC_15(VAR_1));
  FUNC_16(VAR_6);
  return;
 }

 FUNC_17(VAR_0, "autotrust: replaced %s", VAR_5);



 if(FUNC_13(VAR_6, VAR_5) < 0) {
  FUNC_4("rename(%s to %s): %s", VAR_6, VAR_5, FUNC_15(VAR_1));
 }
}
