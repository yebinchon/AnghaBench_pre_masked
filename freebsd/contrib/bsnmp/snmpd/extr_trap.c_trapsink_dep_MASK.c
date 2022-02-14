
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapsink_dep {int set; int rb; int status; } ;
struct trapsink {int dummy; } ;
struct snmp_dependency {int idx; } ;
struct snmp_context {int code; } ;
typedef enum snmp_depop { ____Placeholder_snmp_depop } snmp_depop ;


 struct trapsink* FUNC_0 (int *,int *,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct trapsink_dep*) ;
 int FUNC_3 (struct snmp_context*,struct trapsink*,struct trapsink_dep*) ;
 int FUNC_4 (struct trapsink*) ;
 int VAR_7 ;
 int FUNC_5 (struct trapsink*,struct trapsink_dep*) ;
 int FUNC_6 (struct trapsink*,struct trapsink_dep*) ;
 int FUNC_7 (struct trapsink*,struct trapsink_dep*) ;

__attribute__((used)) static int
FUNC_8(struct snmp_context *VAR_8, struct snmp_dependency *VAR_9,
    enum snmp_depop VAR_10)
{
 struct trapsink_dep *VAR_11 = (struct trapsink_dep *)VAR_9;
 struct trapsink *VAR_12;

 VAR_12 = FUNC_0(&VAR_7, &VAR_9->idx, 0);

 switch (VAR_10) {

   case 130:
  if (VAR_11->set & VAR_6) {
   switch (VAR_11->status) {

     case 1:
     case 2:
    if (VAR_12 == ((void*)0))
     return (VAR_0);
    return (FUNC_5(VAR_12, VAR_11));

     case 4:
     case 5:
    if (VAR_12 != ((void*)0))
     return (VAR_0);
    return (FUNC_2(VAR_11));

     case 6:
    if (VAR_12 == ((void*)0))
     return (VAR_1);
    return (FUNC_3(VAR_8, VAR_12, VAR_11));
   }
  } else if (VAR_11->set != 0)
   return (FUNC_5(VAR_12, VAR_11));

  return (VAR_1);

   case 128:
  if (VAR_11->rb & VAR_3) {
   FUNC_4(VAR_12);
   return (VAR_1);
  }
  if (VAR_11->rb & VAR_5)
   return (FUNC_7(VAR_12, VAR_11));
  if(VAR_11->rb & VAR_4)
   return (FUNC_6(VAR_12, VAR_11));
  return (VAR_1);

   case 129:
  if ((VAR_11->rb & VAR_4) && VAR_12 != ((void*)0) &&
      VAR_8->code == VAR_2)
   FUNC_4(VAR_12);
  return (VAR_1);
 }
 FUNC_1();
}
