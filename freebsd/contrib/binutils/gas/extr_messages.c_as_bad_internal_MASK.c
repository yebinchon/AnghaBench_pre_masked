
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char**,unsigned int*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2, unsigned int VAR_3, char *VAR_4)
{
  ++VAR_0;

  if (VAR_2 == ((void*)0))
    FUNC_1 (&VAR_2, &VAR_3);

  FUNC_4 (VAR_2);
  if (VAR_2)
    FUNC_2 (VAR_1, "%s:%u: ", VAR_2, VAR_3);
  FUNC_2 (VAR_1, "%s", FUNC_0("Error: "));
  FUNC_3 (VAR_4, VAR_1);
  (void) FUNC_6 ('\n', VAR_1);

  FUNC_5 (VAR_4);

}
