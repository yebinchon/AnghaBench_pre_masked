
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2 (FILE *VAR_4, const char *VAR_5, int VAR_6)
{
  FUNC_1 (VAR_4, "\t.def\t");
  FUNC_0 (VAR_4, VAR_5);
  FUNC_1 (VAR_4, ";\t.scl\t%d;\t.type\t%d;\t.endef\n",
    VAR_6 ? (int) VAR_0 : (int) VAR_1,
    (int) VAR_2 << VAR_3);
}
