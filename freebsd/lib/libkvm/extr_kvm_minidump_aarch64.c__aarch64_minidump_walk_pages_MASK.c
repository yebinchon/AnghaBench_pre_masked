
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ u_long ;
struct TYPE_6__ {int pmapsize; scalar_t__ kernbase; scalar_t__ dmapbase; scalar_t__ dmapend; int bitmapsize; } ;
struct vmstate {TYPE_1__ hdr; } ;
struct kvm_bitmap {int dummy; } ;
typedef int kvm_walk_pages_cb_t ;
struct TYPE_7__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef scalar_t__ aarch64_pte_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (struct kvm_bitmap*) ;
 int FUNC_3 (struct kvm_bitmap*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct kvm_bitmap*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int *,void*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(kvm_t *VAR_7, kvm_walk_pages_cb_t *VAR_8, void *VAR_9)
{
 struct vmstate *VAR_10 = VAR_7->vmst;
 u_long VAR_11 = VAR_10->hdr.pmapsize / sizeof(aarch64_pte_t);
 u_long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct kvm_bitmap VAR_17;
 vm_prot_t VAR_18;
 int VAR_19 = 0;

 if (!FUNC_3(&VAR_17, VAR_10->hdr.bitmapsize, &VAR_12))
  return (0);

 for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
  aarch64_pte_t VAR_20 = FUNC_1(VAR_7, VAR_15);

  if ((VAR_20 & VAR_0) != VAR_2)
   continue;

  VAR_16 = VAR_10->hdr.kernbase + (VAR_15 << VAR_3);
  VAR_14 = VAR_20 & ~VAR_1;
  VAR_13 = VAR_10->hdr.dmapbase + VAR_14;
  if (!FUNC_5(VAR_7, VAR_8, VAR_9, VAR_14, VAR_16, VAR_13,
      FUNC_0(VAR_20), VAR_4, 0)) {
   goto out;
  }
 }

 while (FUNC_4(&VAR_17, &VAR_12)) {
  VAR_14 = VAR_12 * VAR_4;
  VAR_13 = VAR_10->hdr.dmapbase + VAR_14;
  if (VAR_10->hdr.dmapend < (VAR_13 + VAR_4))
   break;
  VAR_16 = 0;
  VAR_18 = VAR_5 | VAR_6;
  if (!FUNC_5(VAR_7, VAR_8, VAR_9, VAR_14, VAR_16, VAR_13,
      VAR_18, VAR_4, 0)) {
   goto out;
  }
 }
 VAR_19 = 1;

out:
 FUNC_2(&VAR_17);
 return (VAR_19);
}
