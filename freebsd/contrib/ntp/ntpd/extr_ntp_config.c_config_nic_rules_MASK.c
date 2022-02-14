
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sockaddr_u ;
struct TYPE_5__ {char* if_name; int match_class; int action; struct TYPE_5__* link; } ;
typedef TYPE_1__ nic_rule_node ;
typedef int nic_rule_match ;
typedef int nic_rule_action ;
struct TYPE_6__ {int nic_rules; } ;
typedef TYPE_2__ config_tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;







 int FUNC_5 (int ,char*,int,int ) ;
 scalar_t__ VAR_13 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ,int *) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int ,char*,char*) ;
 int FUNC_14 (char*,char*,int*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static void
FUNC_17(
 config_tree *VAR_14,
 int VAR_15
 )
{
 nic_rule_node * VAR_16;
 sockaddr_u VAR_17;
 nic_rule_match VAR_18;
 nic_rule_action VAR_19;
 char * VAR_20;
 char * VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_16 = FUNC_2(VAR_14->nic_rules);

 if (VAR_16 != ((void*)0)
     && (FUNC_1( VAR_12 ) || FUNC_1( VAR_4 ))) {
  FUNC_13(VAR_5,
   "interface/nic rules are not allowed with --interface (-I) or --novirtualips (-L)%s",
   (VAR_15) ? ", exiting" : "");
  if (VAR_15)
   FUNC_7(1);
  else
   return;
 }

 for (; VAR_16 != ((void*)0); VAR_16 = VAR_16->link) {
  VAR_22 = -1;
  VAR_20 = VAR_16->if_name;
  if (VAR_20 != ((void*)0))
   VAR_20 = FUNC_6(VAR_20);

  switch (VAR_16->match_class) {

  default:
   FUNC_8("config_nic_rules: match-class-token=%d", VAR_16->match_class);

  case 0:






   FUNC_3(VAR_20 != ((void*)0));
   VAR_21 = FUNC_15(VAR_20, '/');
   if (VAR_21 != ((void*)0))
    *VAR_21 = '\0';
   if (FUNC_10(VAR_20, VAR_3, &VAR_17)) {
    VAR_18 = VAR_7;
    if (VAR_21 != ((void*)0)
        && 1 == FUNC_14(VAR_21 + 1, "%d",
         &VAR_22)) {
     VAR_23 = 8 *
         FUNC_4(FUNC_0(&VAR_17));
     VAR_22 = FUNC_11(-1, VAR_22);
     VAR_22 = FUNC_12(VAR_22,
       VAR_23);
    }
   } else {
    VAR_18 = VAR_8;
    if (VAR_21 != ((void*)0))
     *VAR_21 = '/';
   }
   break;

  case 134:
   VAR_18 = VAR_6;
   break;

  case 131:
   VAR_18 = VAR_9;
   break;

  case 130:
   VAR_18 = VAR_10;
   break;

  case 128:
   VAR_18 = VAR_11;
   break;
  }

  switch (VAR_16->action) {

  default:
   FUNC_8("config_nic_rules: action-token=%d", VAR_16->action);

  case 129:
   VAR_19 = VAR_2;
   break;

  case 132:
   VAR_19 = VAR_1;
   break;

  case 133:
   VAR_19 = VAR_0;
   break;
  }

  FUNC_5(VAR_18, VAR_20, VAR_22,
        VAR_19);
  FUNC_16(VAR_13 + 2);
  if (VAR_20 != ((void*)0))
   FUNC_9(VAR_20);
 }
}
