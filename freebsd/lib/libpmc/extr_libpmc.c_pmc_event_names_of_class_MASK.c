
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmc_event_descr {char* pm_ev_name; } ;
typedef enum pmc_class { ____Placeholder_pmc_class } pmc_class ;
struct TYPE_4__ {int pm_cputype; } ;
struct TYPE_3__ {int pm_nevent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct pmc_event_descr* VAR_2 ;
 int VAR_3 ;
 struct pmc_event_descr* VAR_4 ;
 int VAR_5 ;
 struct pmc_event_descr* VAR_6 ;
 int VAR_7 ;
 struct pmc_event_descr* VAR_8 ;
 int VAR_9 ;
 struct pmc_event_descr* VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 struct pmc_event_descr* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct pmc_event_descr* VAR_16 ;
 int VAR_17 ;
 struct pmc_event_descr* VAR_18 ;
 char** FUNC_1 (int) ;
 int VAR_19 ;
 struct pmc_event_descr* VAR_20 ;
 int VAR_21 ;
 struct pmc_event_descr* VAR_22 ;
 int VAR_23 ;
 struct pmc_event_descr* VAR_24 ;
 int VAR_25 ;
 struct pmc_event_descr* VAR_26 ;
 int VAR_27 ;
 struct pmc_event_descr* VAR_28 ;
 TYPE_1__ VAR_29 ;
 struct pmc_event_descr* VAR_30 ;
 int VAR_31 ;
 struct pmc_event_descr* VAR_32 ;
 int VAR_33 ;
 struct pmc_event_descr* VAR_34 ;

int
FUNC_2(enum pmc_class VAR_35, const char ***VAR_36,
    int *VAR_37)
{
 int VAR_38;
 const char **VAR_39;
 const struct pmc_event_descr *VAR_40;

 switch (VAR_35)
 {
 case 141:
  VAR_40 = VAR_16;
  VAR_38 = FUNC_0(VAR_15);
  break;
 case 133:
  VAR_40 = VAR_32;
  VAR_38 = FUNC_0(VAR_31);
  break;
 case 140:
  VAR_40 = VAR_18;
  VAR_38 = FUNC_0(VAR_17);
  break;
 case 132:
  VAR_40 = VAR_34;
  VAR_38 = FUNC_0(VAR_33);
  break;
 case 145:
  switch (VAR_11.pm_cputype) {
  default:
  case 131:
   VAR_40 = VAR_8;
   VAR_38 = FUNC_0(VAR_7);
   break;
  case 130:
   VAR_40 = VAR_10;
   VAR_38 = FUNC_0(VAR_9);
   break;
  }
  break;
 case 144:
  switch (VAR_11.pm_cputype) {
  default:
  case 129:
   VAR_40 = VAR_4;
   VAR_38 = FUNC_0(VAR_3);
   break;
  case 128:
   VAR_40 = VAR_6;
   VAR_38 = FUNC_0(VAR_5);
   break;
  }
  break;
 case 143:
  VAR_40 = VAR_2;
  VAR_38 = FUNC_0(VAR_1);
  break;
 case 139:
  VAR_40 = VAR_20;
  VAR_38 = FUNC_0(VAR_19);
  break;
 case 138:
  VAR_40 = VAR_22;
  VAR_38 = FUNC_0(VAR_21);
  break;
 case 137:
  VAR_40 = VAR_24;
  VAR_38 = FUNC_0(VAR_23);
  break;
 case 136:
  VAR_40 = VAR_26;
  VAR_38 = FUNC_0(VAR_25);
  break;
 case 135:
  VAR_40 = VAR_28;
  VAR_38 = FUNC_0(VAR_27);
  break;
 case 142:
  VAR_40 = VAR_13;
  VAR_38 = FUNC_0(VAR_12);
  break;
 case 134:
  VAR_40 = VAR_30;
  VAR_38 = VAR_29.pm_nevent;
  break;
 default:
  VAR_14 = VAR_0;
  return (-1);
 }

 if ((VAR_39 = FUNC_1(VAR_38 * sizeof(const char *))) == ((void*)0))
  return (-1);

 *VAR_36 = VAR_39;
 *VAR_37 = VAR_38;

 for (;VAR_38--; VAR_40++, VAR_39++)
  *VAR_39 = VAR_40->pm_ev_name;

 return (0);
}
