
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;


 char const* FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static void FUNC_2(svn_stringbuf_t *VAR_0, const char *VAR_1, int *VAR_2)
{
  if (*VAR_2 < 1)
    FUNC_1(VAR_0, FUNC_0(": "));
  else
    FUNC_1(VAR_0, FUNC_0(", "));
  FUNC_1(VAR_0, VAR_1);
  (*VAR_2)++;
}
