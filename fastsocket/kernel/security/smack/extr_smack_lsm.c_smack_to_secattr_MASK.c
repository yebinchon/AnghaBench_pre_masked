
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smack_cipso {char* smk_catset; int smk_level; } ;
struct TYPE_4__ {int lvl; } ;
struct TYPE_3__ {TYPE_2__ mls; } ;
struct netlbl_lsm_secattr {char* domain; int flags; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (char*,struct smack_cipso*) ;

__attribute__((used)) static void FUNC_2(char *VAR_3, struct netlbl_lsm_secattr *VAR_4)
{
 struct smack_cipso VAR_5;
 int VAR_6;

 VAR_4->domain = VAR_3;
 VAR_4->flags = VAR_0 | VAR_1;

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6 == 0) {
  VAR_4->attr.mls.lvl = VAR_5.smk_level;
  FUNC_0(VAR_5.smk_catset, VAR_4);
 } else {
  VAR_4->attr.mls.lvl = VAR_2;
  FUNC_0(VAR_3, VAR_4);
 }
}
