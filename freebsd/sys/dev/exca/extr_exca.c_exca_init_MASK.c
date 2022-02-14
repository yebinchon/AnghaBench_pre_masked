
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct exca_softc {int putb; int getb; scalar_t__ flags; int offset; int bsh; int bst; scalar_t__ ioalloc; scalar_t__ memalloc; int dev; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct exca_softc *VAR_2, device_t VAR_3,
    bus_space_tag_t VAR_4, bus_space_handle_t VAR_5, uint32_t VAR_6)
{
 VAR_2->dev = VAR_3;
 VAR_2->memalloc = 0;
 VAR_2->ioalloc = 0;
 VAR_2->bst = VAR_4;
 VAR_2->bsh = VAR_5;
 VAR_2->offset = VAR_6;
 VAR_2->flags = 0;
 VAR_2->getb = VAR_0;
 VAR_2->putb = VAR_1;
}
