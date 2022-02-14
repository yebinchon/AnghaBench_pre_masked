
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4 (char *VAR_6, size_t VAR_7)
{
  if (VAR_7 == 8 && FUNC_3 (VAR_6, "progbits", 8) == 0)
    return VAR_5;
  if (VAR_7 == 6 && FUNC_3 (VAR_6, "nobits", 6) == 0)
    return VAR_2;
  if (VAR_7 == 4 && FUNC_3 (VAR_6, "note", 4) == 0)
    return VAR_3;
  if (VAR_7 == 10 && FUNC_3 (VAR_6, "init_array", 10) == 0)
    return VAR_1;
  if (VAR_7 == 10 && FUNC_3 (VAR_6, "fini_array", 10) == 0)
    return VAR_0;
  if (VAR_7 == 13 && FUNC_3 (VAR_6, "preinit_array", 13) == 0)
    return VAR_4;
  FUNC_1 (FUNC_0("unrecognized section type"));
  return 0;
}
