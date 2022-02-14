
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int * vm_map_t ;
typedef int u_int ;
struct uio {scalar_t__ uio_rw; scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct proc {TYPE_1__* p_vmspace; } ;
struct TYPE_2__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int ,struct uio*) ;
 int FUNC_5 (int *,int,int,int,int *) ;
 scalar_t__ FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int,int ) ;

int
FUNC_11(struct proc *VAR_13, struct uio *VAR_14)
{
 vm_map_t VAR_15;
 vm_offset_t VAR_16;
 vm_prot_t VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;






 FUNC_0(VAR_13);
 FUNC_1(VAR_13, VAR_4);




 VAR_15 = &VAR_13->p_vmspace->vm_map;






 VAR_21 = VAR_14->uio_rw == VAR_7;
 VAR_17 = VAR_21 ? VAR_10 | VAR_12 : VAR_12;
 VAR_19 = VAR_21 ? VAR_8 : VAR_9;





 do {
  vm_offset_t VAR_22;
  u_int VAR_23;
  vm_page_t VAR_24;

  VAR_22 = (vm_offset_t)VAR_14->uio_offset;




  VAR_16 = FUNC_3(VAR_22);
  VAR_20 = VAR_22 - VAR_16;




  VAR_23 = FUNC_2(VAR_5 - VAR_20, VAR_14->uio_resid);




  VAR_18 = FUNC_5(VAR_15, VAR_16, VAR_17, VAR_19, &VAR_24);
  if (VAR_18 != VAR_3) {
   if (VAR_18 == VAR_2)
    VAR_18 = VAR_1;
   else
    VAR_18 = VAR_0;
   break;
  }




  VAR_18 = FUNC_4(&VAR_24, VAR_20, VAR_23, VAR_14);


  if (VAR_21 && VAR_18 == 0) {
   FUNC_7(VAR_15);
   if (FUNC_6(VAR_15, VAR_16, VAR_16 +
       VAR_5, VAR_11))
    FUNC_10(VAR_15, VAR_22, VAR_23);
   FUNC_8(VAR_15);
  }




  FUNC_9(VAR_24, VAR_6);

 } while (VAR_18 == 0 && VAR_14->uio_resid > 0);

 return (VAR_18);
}
