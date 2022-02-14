
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int sa_family; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;


 int FUNC_0 (struct ifreq*,struct ifreq*,size_t) ;
 int FUNC_1 (struct ifreq*,struct ifreq*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct ifreq *VAR_0)
{
 struct ifreq VAR_1;
 size_t VAR_2 = sizeof(struct ifreq);
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, &VAR_1, VAR_2)))
  return (VAR_3);

 *(u_short *)&VAR_1.ifr_addr = VAR_1.ifr_addr.sa_family;

 VAR_3 = FUNC_1(&VAR_1, VAR_0, VAR_2);

 return (VAR_3);
}
