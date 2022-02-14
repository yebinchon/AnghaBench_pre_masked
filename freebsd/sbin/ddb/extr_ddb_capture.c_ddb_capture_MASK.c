
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kvm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int * FUNC_7 (char*,char*,int *,int ,char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 () ;

void
FUNC_10(int VAR_5, char *VAR_6[])
{
 char *VAR_7, *VAR_8, VAR_9[VAR_1];
 kvm_t *VAR_10;
 int VAR_11;

 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_10 = ((void*)0);
 while ((VAR_11 = FUNC_5(VAR_5, VAR_6, "M:N:")) != -1) {
  switch (VAR_11) {
  case 'M':
   VAR_7 = VAR_3;
   break;

  case 'N':
   VAR_8 = VAR_3;
   break;

  default:
   FUNC_9();
  }
 }
 VAR_5 -= VAR_4;
 VAR_6 += VAR_4;

 if (VAR_5 != 1)
  FUNC_9();

 if (VAR_7 != ((void*)0)) {
  VAR_10 = FUNC_7(VAR_8, VAR_7, ((void*)0), VAR_0, VAR_9);
  if (VAR_10 == ((void*)0))
   FUNC_4(-1, "ddb_capture: kvm_openfiles: %s", VAR_9);
  if (FUNC_6(VAR_10, VAR_2) != 0)
   FUNC_4(-1, "ddb_capture: kvm_nlist");
 } else if (VAR_8 != ((void*)0))
  FUNC_9();
 if (FUNC_8(VAR_6[0], "print") == 0) {
  if (VAR_10 != ((void*)0))
   FUNC_0(VAR_10);
  else
   FUNC_1();
 } else if (FUNC_8(VAR_6[0], "status") == 0) {
  if (VAR_10 != ((void*)0))
   FUNC_2(VAR_10);
  else
   FUNC_3();
 } else
  FUNC_9();
}
