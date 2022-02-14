
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fini; int read; int tell; int map; } ;
struct bhnd_erom_iobus {int mapped; int bsh; int bst; int size; int addr; TYPE_1__ eio; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bhnd_size_t ;
typedef int bhnd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct bhnd_erom_iobus *VAR_3, bhnd_addr_t VAR_4,
    bhnd_size_t VAR_5, bus_space_tag_t VAR_6, bus_space_handle_t VAR_7)
{
 VAR_3->eio.map = VAR_0;
 VAR_3->eio.tell = VAR_2;
 VAR_3->eio.read = VAR_1;
 VAR_3->eio.fini = ((void*)0);

 VAR_3->addr = VAR_4;
 VAR_3->size = VAR_5;
 VAR_3->bst = VAR_6;
 VAR_3->bsh = VAR_7;
 VAR_3->mapped = 0;

 return (0);
}
