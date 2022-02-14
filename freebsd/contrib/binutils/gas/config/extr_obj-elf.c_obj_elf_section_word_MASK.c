
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4 (char *VAR_4, size_t VAR_5)
{
  if (VAR_5 == 5 && FUNC_3 (VAR_4, "write", 5) == 0)
    return VAR_3;
  if (VAR_5 == 5 && FUNC_3 (VAR_4, "alloc", 5) == 0)
    return VAR_0;
  if (VAR_5 == 9 && FUNC_3 (VAR_4, "execinstr", 9) == 0)
    return VAR_1;
  if (VAR_5 == 3 && FUNC_3 (VAR_4, "tls", 3) == 0)
    return VAR_2;
  FUNC_1 (FUNC_0("unrecognized section attribute"));
  return 0;
}
