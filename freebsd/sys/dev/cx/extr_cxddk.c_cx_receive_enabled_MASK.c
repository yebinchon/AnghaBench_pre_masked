
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

int FUNC_4 (cx_chan_t *VAR_1)
{
 FUNC_3 (FUNC_0(VAR_1->port), VAR_1->num & 3);
 return (FUNC_2 (FUNC_1(VAR_1->port)) & VAR_0) != 0;
}
