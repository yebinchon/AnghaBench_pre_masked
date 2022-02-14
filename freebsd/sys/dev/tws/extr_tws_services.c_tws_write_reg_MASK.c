
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
struct tws_softc {int bus_handle; int bus_tag; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,scalar_t__) ;

void
FUNC_3(struct tws_softc *VAR_0, int VAR_1,
                  u_int32_t VAR_2, int VAR_3)
{
    bus_space_tag_t VAR_4 = VAR_0->bus_tag;
    bus_space_handle_t VAR_5 = VAR_0->bus_handle;

    if (VAR_3 == 4)
        FUNC_2(VAR_4, VAR_5, VAR_1, VAR_2);
    else
        if (VAR_3 == 2)
            FUNC_1(VAR_4, VAR_5, VAR_1,
                                     (u_int16_t)VAR_2);
        else
            FUNC_0(VAR_4, VAR_5, VAR_1, (u_int8_t)VAR_2);
}
