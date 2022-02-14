
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tgate {int intnet_metric; void* intnet_addr; void* intnet_mask; int r1net_mask; void* r1net_net; void* r1net_match; char* parm_name; int parm_int_state; int parm_rdisc_pref; int parm_rdisc_int; int parm_d_metric; int parm_adj_inmetric; int parm_adj_outmetric; struct tgate* tgate_next; TYPE_1__* tgate_nets; void* tgate_addr; void* parm_mask; void* parm_net; struct tgate* r1net_next; struct tgate* intnet_next; } ;
struct r1net {int intnet_metric; void* intnet_addr; void* intnet_mask; int r1net_mask; void* r1net_net; void* r1net_match; char* parm_name; int parm_int_state; int parm_rdisc_pref; int parm_rdisc_int; int parm_d_metric; int parm_adj_inmetric; int parm_adj_outmetric; struct r1net* tgate_next; TYPE_1__* tgate_nets; void* tgate_addr; void* parm_mask; void* parm_net; struct r1net* r1net_next; struct r1net* intnet_next; } ;
struct parm {int intnet_metric; void* intnet_addr; void* intnet_mask; int r1net_mask; void* r1net_net; void* r1net_match; char* parm_name; int parm_int_state; int parm_rdisc_pref; int parm_rdisc_int; int parm_d_metric; int parm_adj_inmetric; int parm_adj_outmetric; struct parm* tgate_next; TYPE_1__* tgate_nets; void* tgate_addr; void* parm_mask; void* parm_net; struct parm* r1net_next; struct parm* intnet_next; } ;
struct intnet {int intnet_metric; void* intnet_addr; void* intnet_mask; int r1net_mask; void* r1net_net; void* r1net_match; char* parm_name; int parm_int_state; int parm_rdisc_pref; int parm_rdisc_int; int parm_d_metric; int parm_adj_inmetric; int parm_adj_outmetric; struct intnet* tgate_next; TYPE_1__* tgate_nets; void* tgate_addr; void* parm_mask; void* parm_net; struct intnet* r1net_next; struct intnet* intnet_next; } ;
typedef int parm ;
typedef void* naddr ;
typedef int buf2 ;
typedef int buf ;
struct TYPE_2__ {void* net; void* mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
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
 scalar_t__ FUNC_1 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 char const* FUNC_4 (char const*) ;
 char const* FUNC_5 (struct tgate*) ;
 int FUNC_6 (struct tgate*) ;
 char* FUNC_7 (char*,char*,struct tgate*,int ,int) ;
 int FUNC_8 (char*,void**) ;
 int FUNC_9 (char*,void**,void**) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 struct tgate* VAR_31 ;
 int FUNC_11 (struct tgate*,int ,int) ;
 scalar_t__ FUNC_12 (char**,char*,char*,char*,int) ;
 struct tgate* VAR_32 ;
 scalar_t__ FUNC_13 (int,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (char*,char**,int ) ;
 int FUNC_20 (char*,char**,int ) ;
 struct tgate* VAR_33 ;

const char *
FUNC_21(char *VAR_34,
     int VAR_35)
{




 struct parm VAR_36;
 struct intnet *VAR_37;
 struct r1net *VAR_38;
 struct tgate *VAR_39;
 naddr VAR_40, VAR_41;
 char VAR_42, *VAR_43 = ((void*)0), *VAR_44, *VAR_45, *VAR_46;
 const char *VAR_47;
 char VAR_48[VAR_0], VAR_49[VAR_0];
 int VAR_50;



 if (!FUNC_17(VAR_34, "subnet=", sizeof("subnet=")-1)
     && *(VAR_45 = &VAR_34[sizeof("subnet=")-1]) != '\0') {
  if (0 > FUNC_12(&VAR_45, ",", &VAR_42, VAR_48, sizeof(VAR_48)))
   return FUNC_4(VAR_34);
  VAR_37 = (struct intnet*)FUNC_13(sizeof(*VAR_37),
         "parse_parms subnet");
  VAR_37->intnet_metric = 1;
  if (VAR_42 == ',') {
   VAR_37->intnet_metric = (int)FUNC_19(VAR_45+1,&VAR_46,0);
   if (*VAR_46 != '\0'
       || VAR_37->intnet_metric <= 0
       || VAR_37->intnet_metric >= VAR_3) {
    FUNC_6(VAR_37);
    return FUNC_4(VAR_34);
   }
  }
  if (!FUNC_9(VAR_48, &VAR_37->intnet_addr, &VAR_37->intnet_mask)
      || VAR_37->intnet_mask == VAR_4
      || VAR_37->intnet_addr == VAR_30) {
   FUNC_6(VAR_37);
   return FUNC_4(VAR_34);
  }
  VAR_37->intnet_addr = FUNC_10(VAR_37->intnet_addr);
  VAR_37->intnet_next = VAR_31;
  VAR_31 = VAR_37;
  return 0;
 }





 if (!FUNC_17(VAR_34, "ripv1_mask=", sizeof("ripv1_mask=")-1)
     && *(VAR_45 = &VAR_34[sizeof("ripv1_mask=")-1]) != '\0') {
  if (0 > FUNC_12(&VAR_45, ",", &VAR_42, VAR_48, sizeof(VAR_48))
      || VAR_42 == '\0')
   return FUNC_4(VAR_34);
  if ((VAR_50 = (int)FUNC_19(VAR_45+1, &VAR_46, 0)) <= 0
      || VAR_50 > 32 || *VAR_46 != '\0')
   return FUNC_4(VAR_34);
  VAR_38 = (struct r1net *)FUNC_13(sizeof(*VAR_38),
        "parse_parms ripv1_mask");
  VAR_38->r1net_mask = VAR_4 << (32-VAR_50);
  if (!FUNC_9(VAR_48, &VAR_38->r1net_net, &VAR_38->r1net_match)
      || VAR_38->r1net_net == VAR_30
      || VAR_38->r1net_mask > VAR_38->r1net_match) {
   FUNC_6(VAR_38);
   return FUNC_4(VAR_34);
  }
  VAR_38->r1net_next = VAR_32;
  VAR_32 = VAR_38;
  return 0;
 }

 FUNC_11(&VAR_36, 0, sizeof(VAR_36));

 for (;;) {
  VAR_44 = VAR_34 + FUNC_18(VAR_34, " ,\n\r");
  if (*VAR_44 == '\0' || *VAR_44 == '#')
   break;
  VAR_34 = VAR_44+FUNC_15(VAR_44, "= #,\n\r");
  VAR_42 = *VAR_34;
  if (VAR_42 == '=') {
   VAR_43 = ++VAR_34;
   if (0 > FUNC_12(&VAR_34, " #,\n\r",&VAR_42,
         VAR_48,sizeof(VAR_48)))
    return FUNC_4(VAR_44);
  } else {
   VAR_43 = ((void*)0);
  }
  if (VAR_42 != '\0') {
   for (;;) {
    *VAR_34 = '\0';
    if (VAR_42 == '#')
     break;
    ++VAR_34;
    if (VAR_42 != ' '
        || (VAR_42 = *VAR_34) != ' ')
     break;
   }
  }

  if ((!FUNC_17(VAR_44, "if""=", sizeof("if")))) {
   if (VAR_36.parm_name[0] != '\0'
       || FUNC_16(VAR_48) > VAR_5)
    return FUNC_4(VAR_44);
   FUNC_14(VAR_36.parm_name, VAR_48);

  } else if ((!FUNC_17(VAR_44, "addr""=", sizeof("addr")))) {






   if (VAR_43 == ((void*)0) || !FUNC_9(VAR_43, &VAR_40, &VAR_41)
       || VAR_36.parm_name[0] != '\0')
    return FUNC_4(VAR_44);
   VAR_36.parm_net = VAR_40;
   VAR_36.parm_mask = VAR_41;
   VAR_36.parm_name[0] = '\n';

  } else if ((!FUNC_17(VAR_44, "passwd""=", sizeof("passwd")))) {



   if (VAR_43 == ((void*)0))
    return FUNC_4("no passwd");
   VAR_47 = FUNC_7(VAR_44,VAR_43,&VAR_36,VAR_29,1);
   if (VAR_47) {
    *VAR_43 = '\0';
    return FUNC_4(VAR_47);
   }

  } else if ((!FUNC_17(VAR_44, "md5_passwd""=", sizeof("md5_passwd")))) {
   VAR_47 = FUNC_7(VAR_44,VAR_43,&VAR_36,VAR_28,VAR_35);
   if (VAR_47) {
    *VAR_43 = '\0';
    return FUNC_4(VAR_47);
   }

  } else if ((!strcasecmp(VAR_44, "no_ag"))) {
   VAR_36.parm_int_state |= (VAR_10 | VAR_20);

  } else if ((!FUNC_0(VAR_44, "no_super_ag"))) {
   VAR_36.parm_int_state |= VAR_20;

  } else if ((!FUNC_0(VAR_44, "no_rip_out"))) {
   VAR_36.parm_int_state |= VAR_18;

  } else if ((!FUNC_0(VAR_44, "no_ripv1_in"))) {
   VAR_36.parm_int_state |= VAR_13;

  } else if ((!FUNC_0(VAR_44, "no_ripv2_in"))) {
   VAR_36.parm_int_state |= VAR_15;

  } else if ((!FUNC_0(VAR_44, "ripv2_out"))) {
   if (VAR_36.parm_int_state & VAR_16)
    return FUNC_4(VAR_44);
   VAR_36.parm_int_state |= VAR_14;

  } else if ((!FUNC_0(VAR_44, "ripv2"))) {
   if ((VAR_36.parm_int_state & VAR_16)
       || (VAR_36.parm_int_state & VAR_15))
    return FUNC_4(VAR_44);
   VAR_36.parm_int_state |= (VAR_13
      | VAR_14);

  } else if ((!FUNC_0(VAR_44, "no_rip"))) {
   {if (0 != (VAR_36.parm_int_state & ((VAR_22) & ~(VAR_12)))) break; VAR_36.parm_int_state |= (VAR_12);};

  } else if ((!FUNC_0(VAR_44, "no_rip_mcast"))) {
   VAR_36.parm_int_state |= VAR_17;

  } else if ((!FUNC_0(VAR_44, "no_rdisc"))) {
   {if (0 != (VAR_36.parm_int_state & (((VAR_2|VAR_1)) & ~(VAR_11)))) break; VAR_36.parm_int_state |= (VAR_11);};

  } else if ((!FUNC_0(VAR_44, "no_solicit"))) {
   {if (0 != (VAR_36.parm_int_state & ((VAR_2) & ~(VAR_19)))) break; VAR_36.parm_int_state |= (VAR_19);};

  } else if ((!FUNC_0(VAR_44, "send_solicit"))) {
   {if (0 != (VAR_36.parm_int_state & ((VAR_2) & ~(VAR_24)))) break; VAR_36.parm_int_state |= (VAR_24);};

  } else if ((!FUNC_0(VAR_44, "no_rdisc_adv"))) {
   {if (0 != (VAR_36.parm_int_state & ((VAR_1) & ~(VAR_9)))) break; VAR_36.parm_int_state |= (VAR_9);};

  } else if ((!FUNC_0(VAR_44, "rdisc_adv"))) {
   {if (0 != (VAR_36.parm_int_state & ((VAR_1) & ~(VAR_6)))) break; VAR_36.parm_int_state |= (VAR_6);};

  } else if ((!FUNC_0(VAR_44, "bcast_rdisc"))) {
   VAR_36.parm_int_state |= VAR_7;

  } else if ((!FUNC_0(VAR_44, "passive"))) {
   {if (0 != (VAR_36.parm_int_state & (((VAR_2|VAR_1)) & ~(VAR_11)))) break; VAR_36.parm_int_state |= (VAR_11);};
   VAR_36.parm_int_state |= VAR_12 | VAR_21;

  } else if ((!FUNC_17(VAR_44, "rdisc_pref""=", sizeof("rdisc_pref")))) {
   if (VAR_36.parm_rdisc_pref != 0
       || (VAR_36.parm_rdisc_pref = (int)FUNC_19(VAR_48,&VAR_46,0),
    *VAR_46 != '\0'))
    return FUNC_4(VAR_44);

  } else if ((!FUNC_0(VAR_44, "pm_rdisc"))) {
   if (FUNC_1(VAR_36.parm_int_state))
    return FUNC_4(VAR_44);
   VAR_36.parm_int_state |= VAR_22;

  } else if ((!FUNC_17(VAR_44, "rdisc_interval""=", sizeof("rdisc_interval")))) {
   if (VAR_36.parm_rdisc_int != 0
       || (VAR_36.parm_rdisc_int = (int)FUNC_20(VAR_48,&VAR_46,0),
    *VAR_46 != '\0')
       || VAR_36.parm_rdisc_int < VAR_27
       || VAR_36.parm_rdisc_int > VAR_26)
    return FUNC_4(VAR_44);

  } else if ((!FUNC_17(VAR_44, "fake_default""=", sizeof("fake_default")))) {
   if (VAR_36.parm_d_metric != 0
       || FUNC_1(VAR_36.parm_int_state)
       || (VAR_50 = FUNC_20(VAR_48,&VAR_46,0), *VAR_46 != '\0')
       || VAR_50 > VAR_3-1)
    return FUNC_4(VAR_44);
   VAR_36.parm_d_metric = VAR_50;

  } else if ((!FUNC_17(VAR_44, "adj_inmetric""=", sizeof("adj_inmetric")))) {
   if (VAR_36.parm_adj_inmetric != 0
       || (VAR_50 = FUNC_20(VAR_48,&VAR_46,0), *VAR_46 != '\0')
       || VAR_50 > VAR_3-1)
    return FUNC_4(VAR_44);
   VAR_36.parm_adj_inmetric = VAR_50;

  } else if ((!FUNC_17(VAR_44, "adj_outmetric""=", sizeof("adj_outmetric")))) {
   if (VAR_36.parm_adj_outmetric != 0
       || (VAR_50 = FUNC_20(VAR_48,&VAR_46,0), *VAR_46 != '\0')
       || VAR_50 > VAR_3-1)
    return FUNC_4(VAR_44);
   VAR_36.parm_adj_outmetric = VAR_50;

  } else if ((!FUNC_17(VAR_44, "trust_gateway""=", sizeof("trust_gateway")))) {

   VAR_46 = VAR_48;
   if (0 > FUNC_12(&VAR_46, "|", &VAR_42,
         VAR_49, sizeof(VAR_49))
       || !FUNC_8(VAR_49,&VAR_40))
    return FUNC_4(VAR_44);
   VAR_39 = (struct tgate *)FUNC_13(sizeof(*VAR_39),
            "parse_parms"
            "trust_gateway");
   FUNC_11(VAR_39, 0, sizeof(*VAR_39));
   VAR_39->tgate_addr = VAR_40;
   VAR_50 = 0;

   while (VAR_42 == '|') {
    VAR_46++;
    if (VAR_50 >= VAR_25
        || 0 > FUNC_12(&VAR_46, "|", &VAR_42,
             VAR_49, sizeof(VAR_49))
        || !FUNC_9(VAR_49, &VAR_39->tgate_nets[VAR_50].net,
            &VAR_39->tgate_nets[VAR_50].mask)
        || VAR_39->tgate_nets[VAR_50].net == VAR_30
        || VAR_39->tgate_nets[VAR_50].mask == 0) {
     FUNC_6(VAR_39);
     return FUNC_4(VAR_44);
    }
    VAR_50++;
   }
   VAR_39->tgate_next = VAR_33;
   VAR_33 = VAR_39;
   VAR_36.parm_int_state |= VAR_8;

  } else if ((!FUNC_0(VAR_44, "redirect_ok"))) {
   VAR_36.parm_int_state |= VAR_23;

  } else {
   return FUNC_4(VAR_44);
  }
 }

 return FUNC_5(&VAR_36);


}
