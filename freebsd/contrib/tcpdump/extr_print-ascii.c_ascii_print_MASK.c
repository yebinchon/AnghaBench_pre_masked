
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef char u_char ;
struct TYPE_4__ {char const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (char) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(netdissect_options *VAR_0,
            const u_char *VAR_1, u_int VAR_2)
{
 u_int VAR_3;
 register u_char VAR_4;

 VAR_3 = (VAR_0->ndo_snapend >= VAR_1) ? VAR_0->ndo_snapend - VAR_1 : 0;
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;
 FUNC_1((VAR_0, "\n"));
 while (VAR_2 > 0) {
  VAR_4 = *VAR_1++;
  VAR_2--;
  if (VAR_4 == '\r') {
   if (VAR_2 > 1 && *VAR_1 != '\n')
    FUNC_1((VAR_0, "."));
  } else {
   if (!FUNC_0(VAR_4) &&
       (VAR_4 != '\t' && VAR_4 != ' ' && VAR_4 != '\n'))
    FUNC_1((VAR_0, "."));
   else
    FUNC_1((VAR_0, "%c", VAR_4));
  }
 }
}
