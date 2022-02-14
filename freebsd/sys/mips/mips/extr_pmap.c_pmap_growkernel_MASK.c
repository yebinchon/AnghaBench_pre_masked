
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_3__ {int system_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int ) ;
 int VAR_12 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int) ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;
 scalar_t__* FUNC_6 (int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int,int,int ,int ,int ,int ) ;

void
FUNC_10(vm_offset_t VAR_13)
{
 vm_page_t VAR_14;
 pd_entry_t *VAR_15, *VAR_16;
 pt_entry_t *VAR_17;
 int VAR_18, VAR_19;

 FUNC_2(&VAR_9->system_mtx, VAR_0);
 VAR_19 = VAR_8;
 VAR_13 = FUNC_7(VAR_13, VAR_3);
 if (VAR_13 - 1 >= FUNC_8(VAR_9))
  VAR_13 = FUNC_8(VAR_9);
 while (VAR_11 < VAR_13) {
  VAR_16 = FUNC_6(VAR_10, VAR_11);
  VAR_15 = FUNC_5(VAR_16, VAR_11);
  if (*VAR_15 != 0) {
   VAR_11 = (VAR_11 + VAR_2) & ~VAR_6;
   if (VAR_11 - 1 >= FUNC_8(VAR_9)) {
    VAR_11 = FUNC_8(VAR_9);
    break;
   }
   continue;
  }




  VAR_14 = FUNC_4(VAR_12, VAR_19);

  if (VAR_14 == ((void*)0) && FUNC_9(VAR_19, 1,
      0, VAR_1, VAR_5, 0))
   VAR_14 = FUNC_4(VAR_12, VAR_19);

  if (VAR_14 == ((void*)0))
   FUNC_3("pmap_growkernel: no memory to grow kernel");
  VAR_12++;
  *VAR_15 = (pd_entry_t)FUNC_0(FUNC_1(VAR_14));
  VAR_17 = (pt_entry_t *)*VAR_15;
  for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++)
   VAR_17[VAR_18] = VAR_7;

  VAR_11 = (VAR_11 + VAR_2) & ~VAR_6;
  if (VAR_11 - 1 >= FUNC_8(VAR_9)) {
   VAR_11 = FUNC_8(VAR_9);
   break;
  }
 }
}
