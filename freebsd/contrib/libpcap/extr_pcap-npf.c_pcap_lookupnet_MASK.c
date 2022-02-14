
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int S_addr; } ;
struct TYPE_8__ {TYPE_2__ S_un; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct TYPE_6__ {scalar_t__ ss_family; } ;
struct TYPE_9__ {int SubnetMask; TYPE_1__ IPAddress; } ;
typedef TYPE_4__ npf_if_addr ;
typedef int bpf_u_int32 ;
typedef size_t LONG ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,TYPE_4__*,size_t*) ;

int
FUNC_1(const char *VAR_2, bpf_u_int32 *VAR_3, bpf_u_int32 *VAR_4,
    char *VAR_5)
{




 npf_if_addr VAR_6[VAR_1];
 LONG VAR_7 = VAR_1;
 struct sockaddr_in *VAR_8;
 LONG VAR_9;

 if (!FUNC_0((void *)VAR_2, VAR_6, &VAR_7)) {
  *VAR_3 = *VAR_4 = 0;
  return (0);
 }

 for(VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  if(VAR_6[VAR_9].IPAddress.ss_family == VAR_0)
  {
   VAR_8 = (struct sockaddr_in *) &(VAR_6[VAR_9].IPAddress);
   *VAR_3 = VAR_8->sin_addr.S_un.S_addr;
   VAR_8 = (struct sockaddr_in *) &(VAR_6[VAR_9].SubnetMask);
   *VAR_4 = VAR_8->sin_addr.S_un.S_addr;

   *VAR_3 &= *VAR_4;
   return (0);
  }

 }

 *VAR_3 = *VAR_4 = 0;
 return (0);
}
