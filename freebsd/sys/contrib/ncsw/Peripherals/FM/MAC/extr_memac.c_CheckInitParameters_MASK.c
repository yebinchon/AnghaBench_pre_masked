
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ macId; scalar_t__ addr; TYPE_1__* p_MemacDriverParam; int f_Event; int f_Exception; int enetMode; } ;
typedef TYPE_2__ t_Memac ;
typedef int t_Error ;
typedef scalar_t__ e_FmMacType ;
struct TYPE_4__ {int no_length_check_enable; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static t_Error FUNC_2(t_Memac *VAR_10)
{
    e_FmMacType VAR_11;

    VAR_11 = ((FUNC_0(VAR_10->enetMode) < VAR_7) ? VAR_9 : VAR_8);






    if ((VAR_11 == VAR_9) && (VAR_10->macId >= VAR_4))
        FUNC_1(VAR_5, VAR_0, ("1G MAC ID must be less than %d", VAR_4));
    if (VAR_10->addr == 0)
        FUNC_1(VAR_5, VAR_0, ("Ethernet MAC must have a valid MAC address"));
    if (!VAR_10->f_Exception)
        FUNC_1(VAR_5, VAR_0, ("Uninitialized f_Exception"));
    if (!VAR_10->f_Event)
        FUNC_1(VAR_5, VAR_0, ("Uninitialized f_Event"));





    return VAR_2;
}
