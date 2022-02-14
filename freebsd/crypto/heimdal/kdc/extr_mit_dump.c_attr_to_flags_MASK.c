
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int postdate; int forwardable; int initial; int renewable; int proxiable; int invalid; int require_preauth; int require_hwauth; int server; int change_pw; int client; } ;
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

__attribute__((used)) static void
FUNC_0(unsigned VAR_10, HDBFlags *VAR_11)
{
    VAR_11->postdate = !(VAR_10 & VAR_2);
    VAR_11->forwardable = !(VAR_10 & VAR_1);
    VAR_11->initial = !!(VAR_10 & VAR_6);
    VAR_11->renewable = !(VAR_10 & VAR_4);
    VAR_11->proxiable = !(VAR_10 & VAR_3);

    VAR_11->invalid = !!(VAR_10 & VAR_0);
    VAR_11->require_preauth = !!(VAR_10 & VAR_9);
    VAR_11->require_hwauth = !!(VAR_10 & VAR_8);
    VAR_11->server = !(VAR_10 & VAR_5);
    VAR_11->change_pw = !!(VAR_10 & VAR_7);
    VAR_11->client = 1;
}
