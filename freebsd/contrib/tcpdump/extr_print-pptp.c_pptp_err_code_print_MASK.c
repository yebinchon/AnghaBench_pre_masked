
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int const) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_1,
                    const uint8_t *VAR_2)
{
 FUNC_0((VAR_1, " ERR_CODE(%u", *VAR_2));
 if (VAR_1->ndo_vflag) {
  FUNC_0((VAR_1, ":%s", FUNC_1(VAR_0, "?", *VAR_2)));
 }
 FUNC_0((VAR_1, ")"));
}
