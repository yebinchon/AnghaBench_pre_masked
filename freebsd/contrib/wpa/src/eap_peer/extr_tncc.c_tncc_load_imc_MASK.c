
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {int * path; int name; int * dlhandle; } ;
typedef int TCHAR ;


 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct tnc_if_imc*) ;
 scalar_t__ FUNC_6 (struct tnc_if_imc*) ;
 scalar_t__ FUNC_7 (struct tnc_if_imc*) ;
 int FUNC_8 (int ,char*,...) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct tnc_if_imc *VAR_3)
{
 if (VAR_3->path == ((void*)0)) {
  FUNC_8(VAR_0, "TNC: No IMC configured");
  return -1;
 }

 FUNC_8(VAR_0, "TNC: Opening IMC: %s (%s)",
     VAR_3->name, VAR_3->path);
 VAR_3->dlhandle = FUNC_3(VAR_3->path, VAR_2);
 if (VAR_3->dlhandle == ((void*)0)) {
  FUNC_8(VAR_1, "TNC: Failed to open IMC '%s' (%s): %s",
      VAR_3->name, VAR_3->path, FUNC_2());
  return -1;
 }


 if (FUNC_7(VAR_3) < 0) {
  FUNC_8(VAR_1, "TNC: Failed to resolve IMC functions");
  return -1;
 }

 if (FUNC_5(VAR_3) < 0 ||
     FUNC_6(VAR_3) < 0) {
  FUNC_8(VAR_1, "TNC: Failed to initialize IMC");
  return -1;
 }

 return 0;
}
