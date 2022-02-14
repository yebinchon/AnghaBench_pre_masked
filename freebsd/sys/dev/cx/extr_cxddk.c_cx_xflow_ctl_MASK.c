
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int port; } ;
typedef TYPE_1__ cx_chan_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;

void FUNC_3 (cx_chan_t *VAR_3, int VAR_4)
{
 FUNC_2 (FUNC_0(VAR_3->port), VAR_3->num & 3);
 FUNC_2 (FUNC_1(VAR_3->port), VAR_0 | (VAR_4 ? VAR_1 : VAR_2));
}
