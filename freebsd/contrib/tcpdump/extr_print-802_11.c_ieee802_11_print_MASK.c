
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct lladdr_info {int addr; void* addr_string; } ;
struct TYPE_10__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; scalar_t__ ndo_Hflag; int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int const*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;



 int FUNC_8 (TYPE_1__*,int ,int const*) ;
 void* VAR_1 ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int const*) ;
 int FUNC_11 (int ,int const*,int *,int *) ;
 int FUNC_12 (int const*,int *,int *) ;
 int FUNC_13 (TYPE_1__*,int ,int const*,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,int const*,scalar_t__,scalar_t__,struct lladdr_info*,struct lladdr_info*) ;
 int FUNC_15 (TYPE_1__*,int ,int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_17 (TYPE_1__*,int const*) ;

__attribute__((used)) static u_int
FUNC_18(netdissect_options *VAR_3,
                 const u_char *VAR_4, u_int VAR_5, u_int VAR_6, int VAR_7,
                 u_int VAR_8)
{
 uint16_t VAR_9;
 u_int VAR_10, VAR_11, VAR_12;
 struct lladdr_info VAR_13, VAR_14;
 int VAR_15;

 VAR_10 = VAR_6;

 if (VAR_5 < VAR_8) {
  FUNC_7((VAR_3, "%s", VAR_2));
  return VAR_10;
 }
 VAR_5 -= VAR_8;
 if (VAR_10 > VAR_5) {

  VAR_8 = VAR_10 - VAR_5;
  VAR_10 -= VAR_8;
  VAR_3->ndo_snapend -= VAR_8;
 }

 if (VAR_10 < VAR_0) {
  FUNC_7((VAR_3, "%s", VAR_2));
  return VAR_6;
 }

 VAR_9 = FUNC_2(VAR_4);
 VAR_11 = FUNC_9(VAR_3, VAR_9);
 if (VAR_11 == 0) {

  return (0);
 }
 if (VAR_7)
  VAR_11 = FUNC_16(VAR_11, 4);
 if (VAR_3->ndo_Hflag && FUNC_5(VAR_9) == 129 &&
     FUNC_1(FUNC_4(VAR_9))) {
  VAR_12 = FUNC_10(VAR_4+VAR_11);
  VAR_11 += VAR_12;
 } else
  VAR_12 = 0;

 if (VAR_10 < VAR_11) {
  FUNC_7((VAR_3, "%s", VAR_2));
  return VAR_11;
 }

 if (VAR_3->ndo_eflag)
  FUNC_13(VAR_3, VAR_9, VAR_4, VAR_11, VAR_12);




 VAR_5 -= VAR_11;
 VAR_10 -= VAR_11;
 VAR_4 += VAR_11;

 VAR_13.addr_string = VAR_1;
 VAR_14.addr_string = VAR_1;
 switch (FUNC_5(VAR_9)) {
 case 128:
  FUNC_12(VAR_4 - VAR_11, &VAR_13.addr, &VAR_14.addr);
  if (!FUNC_15(VAR_3, VAR_9, VAR_13.addr, VAR_4, VAR_5)) {
   FUNC_7((VAR_3, "%s", VAR_2));
   return VAR_11;
  }
  break;
 case 130:
  if (!FUNC_8(VAR_3, VAR_9, VAR_4 - VAR_11)) {
   FUNC_7((VAR_3, "%s", VAR_2));
   return VAR_11;
  }
  break;
 case 129:
  if (FUNC_0(FUNC_4(VAR_9)))
   return VAR_11;

  if (FUNC_3(VAR_9)) {
   FUNC_7((VAR_3, "Data"));
   if (!FUNC_17(VAR_3, VAR_4)) {
    FUNC_7((VAR_3, "%s", VAR_2));
    return VAR_11;
   }
  } else {
   FUNC_11(VAR_9, VAR_4 - VAR_11, &VAR_13.addr, &VAR_14.addr);
   VAR_15 = FUNC_14(VAR_3, VAR_4, VAR_5, VAR_10, &VAR_13, &VAR_14);
   if (VAR_15 < 0) {




    if (!VAR_3->ndo_suppress_default_print)
     FUNC_6(VAR_4, VAR_10);
    VAR_15 = -VAR_15;
   }
   VAR_11 += VAR_15;
  }
  break;
 default:

  break;
 }

 return VAR_11;
}
