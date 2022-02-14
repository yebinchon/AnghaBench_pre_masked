
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct tok {int dummy; } ;
struct TYPE_4__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tok* VAR_6 ;
 struct tok* VAR_7 ;
 struct tok* VAR_8 ;
 struct tok* VAR_9 ;
 struct tok* VAR_10 ;
 int FUNC_1 (struct tok const*,char*,int const) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_11,
                       const uint8_t *VAR_12, int VAR_13)
{
 FUNC_0((VAR_11, " RESULT_CODE(%u", *VAR_12));
 if (VAR_11->ndo_vflag) {
  const struct tok *VAR_14 =
   VAR_13 == VAR_4 ? VAR_10 :
   VAR_13 == VAR_5 ? VAR_7 :
   VAR_13 == VAR_1 ? VAR_7 :
   VAR_13 == VAR_3 ? VAR_9 :
   VAR_13 == VAR_2 ? VAR_8 :
   VAR_13 == VAR_0 ? VAR_6 :
   ((void*)0);
  if (VAR_14 != ((void*)0))
   FUNC_0((VAR_11, ":%s", FUNC_1(VAR_14, "?", *VAR_12)));
 }
 FUNC_0((VAR_11, ")"));
}
