
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(char *VAR_6)
{
 if (!VAR_4 && FUNC_3(((void*)0)) > VAR_1) {
  int VAR_7 = FUNC_2(VAR_6);

  (void) FUNC_1("%s: %s%*.*s", VAR_2, VAR_6, VAR_7, VAR_7,
      VAR_3);
  (void) FUNC_0(VAR_5);
  VAR_4 = VAR_0;
 } else if (VAR_4) {
  int VAR_8 = FUNC_2(VAR_6);

  (void) FUNC_1("%s%*.*s", VAR_6, VAR_8, VAR_8, VAR_3);
  (void) FUNC_0(VAR_5);
 }
}
