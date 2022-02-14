
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct TYPE_6__ {int * str; } ;
struct be {TYPE_1__ data; scalar_t__ asnlen; } ;
struct TYPE_7__ {int ndo_snapend; } ;
typedef TYPE_2__ netdissect_options ;


 int FUNC_0 (int const) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int const,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int const*,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_1, struct be *VAR_2)
{
 register int VAR_3 = 1, VAR_4 = 1;
 const u_char *VAR_5;
 uint32_t VAR_6 = VAR_2->asnlen;
 uint32_t VAR_7;

 VAR_5 = VAR_2->data.str;
 FUNC_2(*VAR_5, VAR_6);
 for (VAR_7 = VAR_6; VAR_3 && VAR_7-- > 0; VAR_5++)
  VAR_3 = FUNC_0(*VAR_5);
 VAR_5 = VAR_2->data.str;
 if (VAR_3) {
  FUNC_1((VAR_1, "\""));
  if (FUNC_3(VAR_1, VAR_5, VAR_6, VAR_1->ndo_snapend)) {
   FUNC_1((VAR_1, "\""));
   goto trunc;
  }
  FUNC_1((VAR_1, "\""));
 } else {
  for (VAR_7 = VAR_6; VAR_7-- > 0; VAR_5++) {
   FUNC_1((VAR_1, VAR_4 ? "%.2x" : "_%.2x", *VAR_5));
   VAR_4 = 0;
  }
 }
 return 0;

trunc:
 FUNC_1((VAR_1, "%s", VAR_0));
 return -1;
}
