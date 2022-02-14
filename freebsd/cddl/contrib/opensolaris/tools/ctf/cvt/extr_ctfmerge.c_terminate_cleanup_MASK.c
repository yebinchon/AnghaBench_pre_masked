
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_3 = FUNC_1("CTFMERGE_TERMINATE_NO_UNLINK") ? 0 : 1;

 if (VAR_2 != ((void*)0) && VAR_3)
  FUNC_2(VAR_2);

 if (VAR_0 == ((void*)0))
  return;


 if (VAR_3) {
  FUNC_0(VAR_1, "Removing %s\n", VAR_0);
  FUNC_2(VAR_0);
 }

}
