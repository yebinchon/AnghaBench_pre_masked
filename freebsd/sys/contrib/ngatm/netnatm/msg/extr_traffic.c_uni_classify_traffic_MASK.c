
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {scalar_t__ btag; scalar_t__ ftag; } ;
struct TYPE_5__ {int present; } ;
struct uni_ie_traffic {TYPE_3__ t; TYPE_2__ h; } ;
struct TYPE_4__ {int present; } ;
struct uni_ie_bearer {int bclass; int atc; TYPE_1__ h; } ;
typedef enum uni_traffic_class { ____Placeholder_uni_traffic_class } uni_traffic_class ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_5 (char*,size_t,char*,...) ;

int
FUNC_6(const struct uni_ie_bearer *VAR_31,
    const struct uni_ie_traffic *VAR_32,
    enum uni_traffic_class *VAR_33, enum uni_traffic_class *VAR_34,
    char *VAR_35, size_t VAR_36)
{
 u_int VAR_37;
 u_int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;


 switch (VAR_31->bclass) {

   case 148:
  if (!(VAR_31->h.present & VAR_0)) {
   VAR_37 = 152;
   break;
  }
  switch (VAR_31->atc) {

    case 139:
   VAR_37 = 130;
   break;

    default:
   FUNC_5(VAR_35, VAR_36, "bad ATC=%#02x for BCOB-A",
       VAR_31->atc);
   return (-1);
  }
  break;

   case 134:
  if (!(VAR_31->h.present & VAR_0)) {
   VAR_37 = 151;
   break;
  }
  switch (VAR_31->atc) {

    case 135:
   VAR_37 = 128;
   break;

    case 136:
   VAR_37 = 150;
   break;

    case 137:
   VAR_37 = 129;
   break;

    case 141:
   VAR_37 = 131;
   break;

    default:
   FUNC_5(VAR_35, VAR_36, "bad ATC=%#02x for BCOB-C",
       VAR_31->atc);
   return (-1);
  }
  break;

   case 132:
  if (!(VAR_31->h.present & VAR_0)) {
   VAR_37 = 151;
   break;
  }
  switch (VAR_31->atc) {

    case 139:
   VAR_37 = 130;
   break;

    case 140:
    case 144:
    case 143:
   VAR_37 = 152;
   break;

    case 135:
   VAR_37 = 128;
   break;

    case 146:
    case 136:
   VAR_37 = 149;
   break;

    case 137:
   VAR_37 = 129;
   break;

    case 147:
    case 145:
    case 142:
    case 138:
   VAR_37 = 151;
   break;

    case 141:
   VAR_37 = 131;
   break;

    default:
   FUNC_5(VAR_35, VAR_36, "bad ATC=%#02x for BCOB-X",
       VAR_31->atc);
   return (-1);
  }
  break;

   case 133:
  FUNC_5(VAR_35, VAR_36, "unsupported bearer class tVP");
  return (-1);

   default:
  FUNC_5(VAR_35, VAR_36, "bad bearer class %#02x",
      VAR_31->bclass);
  return (-1);
 }




 VAR_38 = VAR_32->h.present & VAR_27;
 VAR_39 = VAR_32->h.present & VAR_22;
 VAR_40 = VAR_32->h.present & VAR_1;
 VAR_41 = (VAR_32->h.present & VAR_8) && VAR_32->t.ftag;
 VAR_42 = (VAR_32->h.present & VAR_8) && VAR_32->t.btag;
 switch (VAR_37) {

   case 130:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "CBR.1"); return (-1); };
  if (VAR_38 != VAR_7)
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "CBR.1"); return (-1); } while (0);
  if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "CBR.1"); return (-1); };
  if (VAR_39 != VAR_3)
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "CBR.1"); return (-1); } while (0);
  if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "CBR.1"); return (-1); };
  *VAR_33 = *VAR_34 = 130;
  break;

   case 152:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "CBR.2/3"); return (-1); };
  if (VAR_38 == VAR_6) {
   *VAR_33 = VAR_4;
   if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "CBR.2"); return (-1); };
  } else if (VAR_38 == VAR_26) {
   *VAR_33 = VAR_5;
   if (!VAR_41) {
    FUNC_5(VAR_35, VAR_36, "need forward tagging for CBR.3");
    return (-1);
   }
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "CBR.2/3"); return (-1); } while (0);
  if (VAR_39 == VAR_2) {
   *VAR_34 = VAR_4;
   if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "CBR.2"); return (-1); };
  } else if (VAR_39 == VAR_21) {
   *VAR_34 = VAR_5;
   if (!VAR_42) {
    FUNC_5(VAR_35, VAR_36, "need backward tagging for CBR.3");
    return (-1);
   }
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "CBR.2/3"); return (-1); } while (0);
  break;

   case 128:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "rtVBR.1"); return (-1); };
  if (VAR_38 != VAR_28)
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "rtVBR.1"); return (-1); } while (0);
  if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "rtVBR.1"); return (-1); };
  if (VAR_39 != VAR_23)
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "rtVBR.1"); return (-1); } while (0);
  if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "rtVBR.1"); return (-1); };
  *VAR_33 = *VAR_34 = 128;
  break;

   case 150:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "rtVBR.2/3/6"); return (-1); };
  if (VAR_38 == VAR_29) {
   if (VAR_41)
    *VAR_33 = VAR_17;
   else
    *VAR_33 = VAR_16;
  } else if (VAR_38 == VAR_28) {
   *VAR_33 = VAR_20;
   if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "rtVBR.6"); return (-1); };
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "rtVBR.2/3/6"); return (-1); } while (0);
  if (VAR_39 == VAR_24) {
   if (VAR_42)
    *VAR_34 = VAR_17;
   else
    *VAR_34 = VAR_16;
  } else if (VAR_39 == VAR_23) {
   *VAR_34 = VAR_20;
   if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "rtVBR.6"); return (-1); };
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "rtVBR.2/3/6"); return (-1); } while (0);
  break;

   case 149:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "rtVBR.2-6"); return (-1); };
  if (VAR_38 == VAR_29) {
   if (VAR_41)
    *VAR_33 = VAR_17;
   else
    *VAR_33 = VAR_16;
  } else if (VAR_38 == VAR_30) {
   *VAR_33 = VAR_18;
  } else if (VAR_38 == VAR_7) {
   *VAR_33 = VAR_19;
   if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "rtVBR.5"); return (-1); };
  } else if (VAR_38 == VAR_28) {
   *VAR_33 = VAR_20;
   if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "rtVBR.6"); return (-1); };
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "rtVBR.2-6"); return (-1); } while (0);
  if (VAR_39 == VAR_24) {
   if (VAR_42)
    *VAR_34 = VAR_17;
   else
    *VAR_34 = VAR_16;
  } else if (VAR_39 == VAR_25) {
   *VAR_34 = VAR_18;
  } else if (VAR_39 == VAR_3) {
   *VAR_34 = VAR_19;
   if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "rtVBR.5"); return (-1); };
  } else if (VAR_39 == VAR_23) {
   *VAR_34 = VAR_20;
   if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "rtVBR.6"); return (-1); };
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "rtVBR.2-6"); return (-1); } while (0);
  break;

   case 129:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "nrtVBR.1"); return (-1); };
  if (VAR_38 != VAR_28)
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "nrtVBR.1"); return (-1); } while (0);
  if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "nrtVBR.1"); return (-1); };
  if (VAR_39 != VAR_23)
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "nrtVBR.1"); return (-1); } while (0);
  if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "nrtVBR.1"); return (-1); };
  *VAR_33 = *VAR_34 = 129;
  break;

   case 151:
  if (VAR_40) {
   if (VAR_38 != VAR_7)
    do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "UBR.1/2"); return (-1); } while (0);
   if (VAR_39 != VAR_3)
    do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "UBR.1/2"); return (-1); } while (0);
   if (VAR_41)
    *VAR_33 = VAR_10;
   else
    *VAR_33 = VAR_9;
   if (VAR_42)
    *VAR_34 = VAR_10;
   else
    *VAR_34 = VAR_9;
   break;
  }
  if (VAR_38 == VAR_29) {
   if (VAR_41)
    *VAR_33 = VAR_12;
   else
    *VAR_33 = VAR_11;
  } else if (VAR_38 == VAR_30) {
   *VAR_33 = VAR_13;
  } else if (VAR_38 == VAR_7) {
   *VAR_33 = VAR_14;
   if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "nrtVBR.5"); return (-1); };
  } else if (VAR_38 == VAR_28) {
   *VAR_33 = VAR_15;
   if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "nrtVBR.6"); return (-1); };
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "nrtVBR.2-6"); return (-1); } while (0);
  if (VAR_39 == VAR_24) {
   if (VAR_42)
    *VAR_34 = VAR_12;
   else
    *VAR_34 = VAR_11;
  } else if (VAR_39 == VAR_25) {
   *VAR_34 = VAR_13;
  } else if (VAR_39 == VAR_3) {
   *VAR_34 = VAR_14;
   if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "nrtVBR.5"); return (-1); };
  } else if (VAR_39 == VAR_23) {
   *VAR_34 = VAR_15;
   if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "nrtVBR.6"); return (-1); };
  } else
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "nrtVBR.2-6"); return (-1); } while (0);
  break;

   case 131:
  if (VAR_40) { FUNC_5(VAR_35, VAR_36, "illegal BE for " "ABR"); return (-1); };
  if (VAR_38 != VAR_7)
   do { FUNC_5(VAR_35, VAR_36, "bad forward CRs for " "ABR"); return (-1); } while (0);
  if (VAR_39 != VAR_3)
   do { FUNC_5(VAR_35, VAR_36, "bad backward CRs for " "ABR"); return (-1); } while (0);
  if (VAR_41) { FUNC_5(VAR_35, VAR_36, "illegal forward tag in " "ABR"); return (-1); };
  if (VAR_42) { FUNC_5(VAR_35, VAR_36, "illegal backward tag in " "ABR"); return (-1); };
  *VAR_33 = *VAR_34 = 131;
  break;
 }

 return (0);
}
