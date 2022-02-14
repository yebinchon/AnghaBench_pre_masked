
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* iflib_dma_info_t ;
struct TYPE_3__ {scalar_t__ idi_paddr; int * idi_tag; int * idi_vaddr; int idi_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

void
FUNC_4(iflib_dma_info_t VAR_3)
{
 if (VAR_3->idi_tag == ((void*)0))
  return;
 if (VAR_3->idi_paddr != VAR_2) {
  FUNC_1(VAR_3->idi_tag, VAR_3->idi_map,
      VAR_0 | VAR_1);
  FUNC_2(VAR_3->idi_tag, VAR_3->idi_map);
  VAR_3->idi_paddr = VAR_2;
 }
 if (VAR_3->idi_vaddr != ((void*)0)) {
  FUNC_3(VAR_3->idi_tag, VAR_3->idi_vaddr, VAR_3->idi_map);
  VAR_3->idi_vaddr = ((void*)0);
 }
 FUNC_0(VAR_3->idi_tag);
 VAR_3->idi_tag = ((void*)0);
}
