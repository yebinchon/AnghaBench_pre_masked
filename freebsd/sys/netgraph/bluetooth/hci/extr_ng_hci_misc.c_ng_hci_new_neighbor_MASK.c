
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ng_hci_unit_p ;
typedef TYPE_2__* ng_hci_neighbor_p ;
struct TYPE_8__ {int updated; } ;
struct TYPE_7__ {int neighbors; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int,int ,int) ;
 int VAR_3 ;

ng_hci_neighbor_p
FUNC_3(ng_hci_unit_p VAR_4)
{
 ng_hci_neighbor_p VAR_5 = ((void*)0);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0,
  VAR_1 | VAR_2);
 if (VAR_5 != ((void*)0)) {
  FUNC_1(&VAR_5->updated);
  FUNC_0(&VAR_4->neighbors, VAR_5, VAR_3);
 }

 return (VAR_5);
}
