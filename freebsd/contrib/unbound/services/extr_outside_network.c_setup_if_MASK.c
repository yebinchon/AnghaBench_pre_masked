
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_if {int avail_total; int* avail_ports; int maxout; struct port_comm** out; scalar_t__ inuse; int pfxlen; int addrlen; int addr; } ;
struct port_comm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (char const*,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int*,size_t) ;
 int FUNC_3 (char const*,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct port_if* VAR_1, const char* VAR_2,
 int* VAR_3, int VAR_4, size_t VAR_5)
{
 VAR_1->avail_total = VAR_4;
 VAR_1->avail_ports = (int*)FUNC_2(VAR_3, (size_t)VAR_4*sizeof(int));
 if(!VAR_1->avail_ports)
  return 0;
 if(!FUNC_1(VAR_2, VAR_0, &VAR_1->addr, &VAR_1->addrlen) &&
    !FUNC_3(VAR_2, VAR_0,
         &VAR_1->addr, &VAR_1->addrlen, &VAR_1->pfxlen))
  return 0;
 VAR_1->maxout = (int)VAR_5;
 VAR_1->inuse = 0;
 VAR_1->out = (struct port_comm**)FUNC_0(VAR_5,
  sizeof(struct port_comm*));
 if(!VAR_1->out)
  return 0;
 return 1;
}
