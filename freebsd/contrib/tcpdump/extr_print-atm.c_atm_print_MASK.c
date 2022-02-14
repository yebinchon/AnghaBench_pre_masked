
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_9__ {scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;






 int FUNC_1 (TYPE_1__*,int const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int const*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*,scalar_t__) ;

void
FUNC_6(netdissect_options *VAR_1,
          u_int VAR_2, u_int VAR_3, u_int VAR_4, const u_char *VAR_5, u_int VAR_6,
          u_int VAR_7)
{
 if (VAR_1->ndo_eflag)
  FUNC_0((VAR_1, "VPI:%u VCI:%u ", VAR_2, VAR_3));

 if (VAR_2 == 0) {
  switch (VAR_3) {

  case 128:
   FUNC_4(VAR_1, VAR_5);
   return;

  case 133:
   FUNC_0((VAR_1, "broadcast sig: "));
   return;

  case 129:
  case 130:
   FUNC_3(VAR_1, VAR_5, VAR_6, VAR_0);
   return;

  case 131:
   FUNC_0((VAR_1, "meta: "));
   return;

  case 132:
   FUNC_0((VAR_1, "ilmi: "));
   FUNC_5(VAR_1, VAR_5, VAR_6);
   return;
  }
 }

 switch (VAR_4) {

 case 134:
 default:



  FUNC_1(VAR_1, VAR_5, VAR_6, VAR_7);
  break;

 case 135:
  FUNC_2(VAR_1, VAR_5, VAR_6, VAR_7);
  break;
 }
}
