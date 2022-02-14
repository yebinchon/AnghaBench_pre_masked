
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update {int set; int rb; int addr; int rb_bcast; int rb_mask; int ifindex; } ;
struct snmp_dependency {int dummy; } ;
struct snmp_context {int dummy; } ;
struct mibifa {int flags; int inbcast; int inmask; } ;
typedef enum snmp_depop { ____Placeholder_snmp_depop } snmp_depop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct mibifa*,int ) ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct update*) ;
 int FUNC_3 (struct snmp_context*,struct update*,struct mibifa*) ;
 int FUNC_4 (struct mibifa*) ;
 int VAR_7 ;
 struct mibifa* FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (struct mibifa*) ;
 int FUNC_7 (struct mibifa*) ;
 int FUNC_8 (struct mibifa*) ;
 int VAR_9 ;
 int FUNC_9 (struct update*,struct mibifa*) ;

__attribute__((used)) static int
FUNC_10(struct snmp_context *VAR_10, struct snmp_dependency *VAR_11,
    enum snmp_depop VAR_12)
{
 struct update *VAR_13 = (struct update *)VAR_11;
 struct mibifa *VAR_14;

 switch (VAR_12) {

   case 130:
  if ((VAR_14 = FUNC_5(VAR_13->addr)) == ((void*)0)) {

   if (!(VAR_13->set & VAR_6))
    return (VAR_4);
   return (FUNC_2(VAR_13));
  }

  if ((VAR_13->set & VAR_6) && VAR_13->ifindex == 0) {

   return (FUNC_3(VAR_10, VAR_13, VAR_14));
  }

  return (FUNC_9(VAR_13, VAR_14));

   case 128:
  if ((VAR_14 = FUNC_5(VAR_13->addr)) == ((void*)0)) {

   VAR_8 = 1;
   return (VAR_5);
  }
  if (VAR_13->rb & VAR_1) {
   FUNC_6(VAR_14);
   return (VAR_5);
  }
  if (VAR_13->rb & VAR_2) {
   FUNC_7(VAR_14);
   return (VAR_5);
  }
  if (VAR_13->rb & VAR_3) {
   VAR_14->inmask = VAR_13->rb_mask;
   VAR_14->inbcast = VAR_13->rb_bcast;
   FUNC_8(VAR_14);
   return (VAR_5);
  }
  return (VAR_5);

   case 129:
  if ((VAR_13->rb & VAR_2) &&
      (VAR_14 = FUNC_5(VAR_13->addr)) != ((void*)0) &&
      (VAR_14->flags & VAR_0)) {
   FUNC_0(&VAR_9, VAR_14, VAR_7);
   FUNC_4(VAR_14);
  }
  return (VAR_5);
 }
 FUNC_1();
}
