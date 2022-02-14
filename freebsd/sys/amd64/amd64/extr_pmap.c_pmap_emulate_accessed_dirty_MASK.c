
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {scalar_t__ ref_count; int flags; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int* FUNC_8 (int ,int ) ;
 int* FUNC_9 (int*,int ) ;
 int FUNC_10 (int ,int*,int ,struct rwlock**) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct rwlock*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;

int
FUNC_16(pmap_t VAR_11, vm_offset_t VAR_12, int VAR_13)
{
 int VAR_14;
 struct rwlock *VAR_15;



 pd_entry_t *VAR_16;
 pt_entry_t *VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 FUNC_0(VAR_13 == VAR_5 || VAR_13 == VAR_6,
     ("pmap_emulate_accessed_dirty: invalid fault type %d", VAR_13));

 if (!FUNC_6(VAR_11))
  return (-1);

 VAR_18 = FUNC_5(VAR_11);
 VAR_19 = FUNC_7(VAR_11);
 VAR_21 = FUNC_13(VAR_11);
 VAR_20 = FUNC_12(VAR_11);

 VAR_14 = -1;
 VAR_15 = ((void*)0);
 FUNC_2(VAR_11);

 VAR_16 = FUNC_8(VAR_11, VAR_12);
 if (VAR_16 == ((void*)0) || (*VAR_16 & VAR_21) == 0)
  goto done;

 if ((*VAR_16 & VAR_3) != 0) {
  if (VAR_13 == VAR_5) {



   *VAR_16 |= VAR_18;
   VAR_14 = 0;
  }
  goto done;
 }

 VAR_17 = FUNC_9(VAR_16, VAR_12);
 if ((*VAR_17 & VAR_21) == 0)
  goto done;

 if (VAR_13 == VAR_6) {
  if ((*VAR_17 & VAR_20) == 0)
   goto done;
  *VAR_17 |= VAR_19 | VAR_18;
 } else {
  *VAR_17 |= VAR_18;
 }
 VAR_14 = 0;
done:
 if (VAR_15 != ((void*)0))
  FUNC_14(VAR_15);
 FUNC_3(VAR_11);
 return (VAR_14);
}
