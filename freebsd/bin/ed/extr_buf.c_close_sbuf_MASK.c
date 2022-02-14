
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 if (VAR_5) {
  if (FUNC_0(VAR_5) < 0) {
   FUNC_1(VAR_7, "%s: %s\n", VAR_4, FUNC_2(VAR_2));
   VAR_1 = "cannot close temp file";
   return VAR_0;
  }
  VAR_5 = ((void*)0);
  FUNC_3(VAR_4);
 }
 VAR_6 = VAR_3 = 0;
 return 0;
}
