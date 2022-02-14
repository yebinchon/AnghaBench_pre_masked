
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tok {int const v; int * s; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_0,
                  const struct tok *VAR_1, const uint32_t VAR_2, const uint32_t VAR_3)
{
 const char *VAR_4 = " (";

 if (VAR_2 == 0)
  return;

 for (; VAR_1->s != ((void*)0); VAR_1++)
  if (VAR_2 & VAR_1->v) {
   FUNC_0((VAR_0, "%s%s", VAR_4, VAR_1->s));
   VAR_4 = ", ";
  }

 FUNC_0((VAR_0, VAR_2 & VAR_3 ? ") (bogus)" : ")"));
}
