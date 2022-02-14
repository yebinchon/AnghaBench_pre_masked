
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int postdate; int forwardable; int initial; int renewable; int proxiable; int invalid; int require_preauth; int server; int change_pw; int client; int ok_as_delegate; int trusted_for_delegation; int allow_kerberos4; int allow_digest; } ;
typedef TYPE_1__ HDBFlags ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;

__attribute__((used)) static void
FUNC_0(unsigned VAR_13, HDBFlags *VAR_14)
{
    VAR_14->postdate = !(VAR_13 & VAR_4);
    VAR_14->forwardable = !(VAR_13 & VAR_3);
    VAR_14->initial = !!(VAR_13 & VAR_8);
    VAR_14->renewable = !(VAR_13 & VAR_6);
    VAR_14->proxiable = !(VAR_13 & VAR_5);

    VAR_14->invalid = !!(VAR_13 & VAR_2);
    VAR_14->require_preauth = !!(VAR_13 & VAR_11);

    VAR_14->server = !(VAR_13 & VAR_7);
    VAR_14->change_pw = !!(VAR_13 & VAR_10);
    VAR_14->client = 1;
    VAR_14->ok_as_delegate = !!(VAR_13 & VAR_9);
    VAR_14->trusted_for_delegation = !!(VAR_13 & VAR_12);
    VAR_14->allow_kerberos4 = !!(VAR_13 & VAR_1);
    VAR_14->allow_digest = !!(VAR_13 & VAR_0);
}
