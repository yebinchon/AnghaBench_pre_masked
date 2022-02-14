
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int tte ;
struct sparc64_tte {void* tte_data; void* tte_vpn; } ;
typedef int off_t ;
struct TYPE_6__ {TYPE_4__* vmst; } ;
typedef TYPE_1__ kvm_t ;
typedef int kvaddr_t ;
struct TYPE_7__ {int vm_tsb_off; int vm_tsb_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sparc64_tte*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,struct sparc64_tte*,int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct sparc64_tte*,int) ;

__attribute__((used)) static int
FUNC_7(kvm_t *VAR_6, kvaddr_t VAR_7, off_t *VAR_8)
{
 struct sparc64_tte VAR_9;
 off_t VAR_10;
 kvaddr_t VAR_11;
 off_t VAR_12;
 kvaddr_t VAR_13;
 int VAR_14;

 VAR_13 = VAR_7 & VAR_2;
 if (VAR_7 >= VAR_1)
  VAR_12 = FUNC_0(VAR_7) & ~VAR_2;
 else {
  VAR_11 = VAR_7 >> VAR_3;
  VAR_10 = VAR_6->vmst->vm_tsb_off +
      ((VAR_11 & VAR_6->vmst->vm_tsb_mask) << VAR_5);
  if (!FUNC_4(VAR_6, VAR_10, &VAR_9, sizeof(VAR_9)))
   goto invalid;
  VAR_9.tte_vpn = FUNC_5(VAR_9.tte_vpn);
  VAR_9.tte_data = FUNC_5(VAR_9.tte_data);
  if (!FUNC_6(&VAR_9, VAR_7))
   goto invalid;
  VAR_12 = FUNC_1(&VAR_9);
 }
 VAR_14 = VAR_4 - VAR_13;
 VAR_12 = FUNC_3(VAR_6->vmst, VAR_12, VAR_14);
 if (VAR_12 == VAR_0)
  goto invalid;
 *VAR_8 = VAR_12 + VAR_13;
 return (VAR_14);

invalid:
 FUNC_2(VAR_6, 0, "invalid address (%jx)", (uintmax_t)VAR_7);
 return (0);
}
