
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef size_t u_long ;
struct TYPE_7__ {int pmapsize; int version; size_t kernbase; size_t dmapbase; size_t dmapend; int bitmapsize; } ;
struct vmstate {TYPE_1__ hdr; } ;
struct kvm_bitmap {int dummy; } ;
typedef int kvm_walk_pages_cb_t ;
struct TYPE_8__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef size_t amd64_pte_t ;
typedef size_t amd64_pde_t ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t FUNC_0 (struct vmstate*,size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (size_t) ;
 size_t* FUNC_2 (TYPE_2__*,size_t) ;
 size_t FUNC_3 (TYPE_2__*,size_t) ;
 int FUNC_4 (struct kvm_bitmap*) ;
 int FUNC_5 (struct kvm_bitmap*,int ,size_t*) ;
 scalar_t__ FUNC_6 (struct kvm_bitmap*,size_t*) ;
 int FUNC_7 (struct kvm_bitmap*,size_t,size_t) ;
 int FUNC_8 (TYPE_2__*,int *,void*,size_t,size_t,size_t,int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_9(kvm_t *VAR_11, kvm_walk_pages_cb_t *VAR_12, void *VAR_13)
{
 struct vmstate *VAR_14 = VAR_11->vmst;
 u_long VAR_15 = VAR_14->hdr.pmapsize / sizeof(amd64_pde_t);
 u_long VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct kvm_bitmap VAR_21;
 int VAR_22 = 0;
 vm_prot_t VAR_23;
 unsigned int VAR_24 = VAR_2;

 if (VAR_14->hdr.version < 2)
  return (0);

 if (!FUNC_5(&VAR_21, VAR_14->hdr.bitmapsize, &VAR_16))
  return (0);

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  amd64_pde_t VAR_25 = FUNC_3(VAR_11, VAR_19);
  amd64_pte_t *VAR_26;
  u_long VAR_27;

  VAR_20 = VAR_14->hdr.kernbase + (VAR_19 << VAR_4);
  if ((VAR_25 & VAR_8) == 0)
   continue;

  if ((VAR_25 & VAR_6) != 0) {






   VAR_18 = (VAR_25 & VAR_7) +
       ((VAR_20 & VAR_3) ^ FUNC_0(VAR_14, VAR_20));
   VAR_17 = VAR_14->hdr.dmapbase + VAR_18;
   FUNC_7(&VAR_21, VAR_18, VAR_2);
   if (!FUNC_8(VAR_11, VAR_12, VAR_13, VAR_18, VAR_20, VAR_17,
       FUNC_1(VAR_25), VAR_0, VAR_24)) {
    goto out;
   }
   continue;
  }


  VAR_26 = FUNC_2(VAR_11, VAR_19);

  if (VAR_26 == ((void*)0))
   continue;

  for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
   amd64_pte_t VAR_28 = (u_long)VAR_26[VAR_27];

   VAR_18 = VAR_28 & VAR_5;
   VAR_17 = VAR_14->hdr.dmapbase + VAR_18;
   if ((VAR_28 & VAR_8) != 0) {
    FUNC_7(&VAR_21, VAR_18, VAR_2);
    if (!FUNC_8(VAR_11, VAR_12, VAR_13, VAR_18, VAR_20, VAR_17,
        FUNC_1(VAR_28), VAR_24, 0)) {
     goto out;
    }
   }
   VAR_20 += VAR_2;
  }
 }

 while (FUNC_6(&VAR_21, &VAR_16)) {
  VAR_18 = VAR_16 * VAR_2;
  VAR_17 = VAR_14->hdr.dmapbase + VAR_18;
  if (VAR_14->hdr.dmapend < (VAR_17 + VAR_24))
   break;
  VAR_20 = 0;

  VAR_23 = VAR_9 | VAR_10;
  if (!FUNC_8(VAR_11, VAR_12, VAR_13, VAR_18, VAR_20, VAR_17, VAR_23, VAR_24, 0)) {
   goto out;
  }
 }

 VAR_22 = 1;

out:
 FUNC_4(&VAR_21);
 return (VAR_22);
}
