
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ macId; scalar_t__ addr; TYPE_1__* p_TgecDriverParam; int f_Event; int f_Exception; int enetMode; } ;
typedef TYPE_2__ t_Tgec ;
typedef int t_Error ;
struct TYPE_4__ {int no_length_check_enable; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static t_Error FUNC_2(t_Tgec *VAR_7)
{
    if (FUNC_0(VAR_7->enetMode) < VAR_6)
        FUNC_1(VAR_4, VAR_0, ("Ethernet 10G MAC driver only support 10G speed"));





    if (VAR_7->addr == 0)
        FUNC_1(VAR_4, VAR_0, ("Ethernet 10G MAC Must have a valid MAC Address"));
    if (!VAR_7->f_Exception)
        FUNC_1(VAR_4, VAR_0, ("uninitialized f_Exception"));
    if (!VAR_7->f_Event)
        FUNC_1(VAR_4, VAR_0, ("uninitialized f_Event"));




    return VAR_2;
}
