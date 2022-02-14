
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mrsas_softc {int bus_handle; int bus_tag; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int ,int,int ) ;

void
FUNC_1(struct mrsas_softc *VAR_0, int VAR_1,
    u_int32_t VAR_2)
{
 bus_space_tag_t VAR_3 = VAR_0->bus_tag;
 bus_space_handle_t VAR_4 = VAR_0->bus_handle;

 FUNC_0(VAR_3, VAR_4, VAR_1, VAR_2);
}
