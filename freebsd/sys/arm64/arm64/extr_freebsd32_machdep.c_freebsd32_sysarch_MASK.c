
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct thread {int dummy; } ;
struct freebsd32_sysarch_args {int op; int parms; } ;
typedef int mcontext_vfp ;
typedef int mcontext32_vfp_t ;
typedef int args ;





 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct thread*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_6(struct thread *VAR_3, struct freebsd32_sysarch_args *VAR_4)
{
 int VAR_5;







 switch(VAR_4->op) {
 case 2:
  FUNC_0(VAR_1, VAR_4->parms);
  FUNC_0(VAR_2, VAR_4->parms);
  return 0;
 case 0:
  {
   struct {
    uint32_t addr;
    uint32_t size;
   } VAR_6;

   if ((VAR_5 = FUNC_2(VAR_4->parms, &VAR_6, sizeof(VAR_6))) != 0)
    return (VAR_5);
   if ((uint64_t)VAR_6.addr + (uint64_t)VAR_6.size > 0xffffffff)
    return (VAR_0);
   FUNC_4(VAR_6.addr, VAR_6.size);
   return 0;
  }
 case 4:
  {
   mcontext32_vfp_t VAR_7;

   struct {
    uint32_t mc_vfp_size;
    uint32_t mc_vfp;
   } VAR_8;
   if ((VAR_5 = FUNC_2(VAR_4->parms, &VAR_8, sizeof(VAR_8))) != 0)
    return (VAR_5);
   if (VAR_8.mc_vfp_size != sizeof(VAR_7))
    return (VAR_0);



   FUNC_1(&VAR_7, sizeof(VAR_7));

   VAR_5 = FUNC_3(&VAR_7,
    (void *)(uintptr_t)VAR_8.mc_vfp,
    sizeof(VAR_7));
   return VAR_5;
  }
 }

 return (VAR_0);
}
