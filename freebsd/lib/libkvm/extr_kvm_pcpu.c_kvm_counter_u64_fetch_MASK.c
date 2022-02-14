
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_long ;
typedef int kvm_t ;
typedef int c ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__*,int,int) ;
 int VAR_0 ;

uint64_t
FUNC_2(kvm_t *VAR_1, u_long VAR_2)
{
 uint64_t VAR_3, VAR_4;

 if (VAR_0 == 0)
  if (FUNC_0(VAR_1) < 0)
   return (0);

 VAR_3 = 0;
 for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_1(VAR_1, VAR_2, &VAR_4, sizeof(VAR_4), VAR_5) != sizeof(VAR_4))
   return (0);
  VAR_3 += VAR_4;
 }

 return (VAR_3);
}
