
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pub; scalar_t__* prv; } ;
struct sockaddr_atmsvc {scalar_t__ sas_family; TYPE_1__ sas_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct sockaddr_atmsvc *VAR_4)
{
 int VAR_5;

 if (VAR_4->sas_family != VAR_0)
  return -VAR_2;
 if (!*VAR_4->sas_addr.pub)
  return *VAR_4->sas_addr.prv ? 0 : -VAR_3;
 for (VAR_5 = 1; VAR_5 < VAR_1 + 1; VAR_5++)
  if (!VAR_4->sas_addr.pub[VAR_5])
   return 0;
 return -VAR_3;
}
