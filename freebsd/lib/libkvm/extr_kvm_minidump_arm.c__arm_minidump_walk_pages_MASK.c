
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int ptesize; int kernbase; scalar_t__ mmuformat; } ;
struct vmstate {TYPE_1__ hdr; } ;
typedef int kvm_walk_pages_cb_t ;
struct TYPE_8__ {struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int arm_pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,void*,int,int,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_10, kvm_walk_pages_cb_t *VAR_11, void *VAR_12)
{
 struct vmstate *VAR_13 = VAR_10->vmst;
 u_long VAR_14 = VAR_13->hdr.ptesize / sizeof(arm_pt_entry_t);
 u_long VAR_15, VAR_16, VAR_17, VAR_18;

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  arm_pt_entry_t VAR_19 = FUNC_1(VAR_10, VAR_17);

  if ((VAR_19 & VAR_5) == VAR_3)
   continue;

  VAR_18 = VAR_13->hdr.kernbase + (VAR_17 << VAR_7);
  if ((VAR_19 & VAR_5) == VAR_4) {

   VAR_16 = (VAR_19 & VAR_0) +
       (VAR_18 & VAR_1 & VAR_2);
  } else {
   if (VAR_13->hdr.mmuformat == VAR_9 &&
       (VAR_19 & VAR_5) == VAR_6) {
    continue;
   }

   VAR_16 = VAR_19 & VAR_2;
  }

  VAR_15 = 0;
  if (!FUNC_2(VAR_10, VAR_11, VAR_12, VAR_16, VAR_18, VAR_15,
      FUNC_0(VAR_10, VAR_19), VAR_8, 0))
   return (0);
 }
 return (1);
}
