
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,char*,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_3, "static inline void\n%s (struct %s *%s)\n",
    VAR_2, VAR_0, VAR_1);
  FUNC_0 (VAR_3, "{\n  memset (%s, 0, sizeof (struct %s));\n}\n\n",
    VAR_1, VAR_0);
}
