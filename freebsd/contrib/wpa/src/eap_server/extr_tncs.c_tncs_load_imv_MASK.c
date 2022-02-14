
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {int * path; int name; int * dlhandle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct tnc_if_imv*) ;
 scalar_t__ FUNC_3 (struct tnc_if_imv*) ;
 scalar_t__ FUNC_4 (struct tnc_if_imv*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct tnc_if_imv *VAR_3)
{
 if (VAR_3->path == ((void*)0)) {
  FUNC_5(VAR_0, "TNC: No IMV configured");
  return -1;
 }

 FUNC_5(VAR_0, "TNC: Opening IMV: %s (%s)",
     VAR_3->name, VAR_3->path);
 VAR_3->dlhandle = FUNC_1(VAR_3->path, VAR_2);
 if (VAR_3->dlhandle == ((void*)0)) {
  FUNC_5(VAR_1, "TNC: Failed to open IMV '%s' (%s): %s",
      VAR_3->name, VAR_3->path, FUNC_0());
  return -1;
 }

 if (FUNC_4(VAR_3) < 0) {
  FUNC_5(VAR_1, "TNC: Failed to resolve IMV functions");
  return -1;
 }

 if (FUNC_2(VAR_3) < 0 ||
     FUNC_3(VAR_3) < 0) {
  FUNC_5(VAR_1, "TNC: Failed to initialize IMV");
  return -1;
 }

 return 0;
}
