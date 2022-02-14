
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pub; scalar_t__* prv; } ;
struct sockaddr_atmsvc {TYPE_1__ sas_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(const struct sockaddr_atmsvc *VAR_1, const struct sockaddr_atmsvc *VAR_2)
{
 if (*VAR_1->sas_addr.prv)
  if (FUNC_0(VAR_1->sas_addr.prv, VAR_2->sas_addr.prv, VAR_0))
   return 0;
 if (!*VAR_1->sas_addr.pub)
  return !*VAR_2->sas_addr.pub;
 if (!*VAR_2->sas_addr.pub)
  return 0;
 return !FUNC_1(VAR_1->sas_addr.pub, VAR_2->sas_addr.pub);
}
