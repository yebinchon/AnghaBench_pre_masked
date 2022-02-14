
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhndb_pci_probe {int dummy; } ;
struct TYPE_2__ {int * fini; int read; int tell; int map; } ;
struct bhndb_pci_eio {int mapped; struct bhndb_pci_probe* probe; scalar_t__ size; scalar_t__ addr; TYPE_1__ eio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bhndb_pci_eio*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bhndb_pci_eio *VAR_3, struct bhndb_pci_probe *VAR_4)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->eio.map = VAR_0;
 VAR_3->eio.tell = VAR_2;
 VAR_3->eio.read = VAR_1;
 VAR_3->eio.fini = ((void*)0);

 VAR_3->mapped = 0;
 VAR_3->addr = 0;
 VAR_3->size = 0;
 VAR_3->probe = VAR_4;
}
