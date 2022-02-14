
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static const uint32_t *
FUNC_4(netdissect_options *VAR_2,
            const uint32_t *VAR_3, int *VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3[0]);

 VAR_5 = FUNC_0(&VAR_3[0]);
 if (VAR_4)
  *VAR_4 = VAR_5;
 if (VAR_5 != 0) {
  if (!VAR_2->ndo_qflag)
   FUNC_1((VAR_2, " ERROR: %s",
       FUNC_3(VAR_1, "unk %d", VAR_5)));
  VAR_0 = 1;
 }
 return (VAR_3 + 1);
trunc:
 return ((void*)0);
}
