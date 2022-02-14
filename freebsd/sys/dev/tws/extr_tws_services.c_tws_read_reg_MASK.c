
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tws_softc {int bus_handle; int bus_tag; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

u_int32_t
FUNC_3(struct tws_softc *VAR_0, int VAR_1, int VAR_2)
{
    bus_space_tag_t VAR_3 = VAR_0->bus_tag;
    bus_space_handle_t VAR_4 = VAR_0->bus_handle;

    if (VAR_2 == 4)
        return((u_int32_t)FUNC_2(VAR_3, VAR_4, VAR_1));
    else if (VAR_2 == 2)
            return((u_int32_t)FUNC_1(VAR_3, VAR_4, VAR_1));
         else
            return((u_int32_t)FUNC_0(VAR_3, VAR_4, VAR_1));
}
