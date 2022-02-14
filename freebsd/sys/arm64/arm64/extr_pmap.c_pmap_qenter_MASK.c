
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {scalar_t__ pv_memattr; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;
 int* FUNC_5 (int *,int ) ;
 int FUNC_6 (int*,int) ;
 int * FUNC_7 (int ,int ,int*) ;

void
FUNC_8(vm_offset_t VAR_8, vm_page_t *VAR_9, int VAR_10)
{
 pd_entry_t *VAR_11;
 pt_entry_t *VAR_12, VAR_13;
 vm_offset_t VAR_14;
 vm_page_t VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = VAR_8;
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_11 = FUNC_7(VAR_7, VAR_14, &VAR_17);
  FUNC_2(VAR_11 != ((void*)0),
      ("pmap_qenter: Invalid page entry, va: 0x%lx", VAR_14));
  FUNC_2(VAR_17 == 2,
      ("pmap_qenter: Invalid level %d", VAR_17));

  VAR_15 = VAR_9[VAR_16];
  VAR_13 = FUNC_3(VAR_15) | VAR_1 | FUNC_0(VAR_0) |
      VAR_2 | FUNC_1(VAR_15->md.pv_memattr) | VAR_5;
  if (VAR_15->md.pv_memattr == VAR_4)
   VAR_13 |= VAR_3;
  VAR_12 = FUNC_5(VAR_11, VAR_14);
  FUNC_6(VAR_12, VAR_13);

  VAR_14 += VAR_6;
 }
 FUNC_4(VAR_7, VAR_8, VAR_14);
}
