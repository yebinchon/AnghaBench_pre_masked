
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_1, const char *VAR_2)
{
    FUNC_0 (VAR_0,
      "e = der_put_%s(p, len, %s, &l);\n"
      "if (e) return e;\np -= l; len -= l; ret += l;\n\n",
      VAR_1,
      VAR_2);
}
