
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {int len; int* subs; } ;
struct in_addr {int s_addr; } ;
struct mibifa {TYPE_3__ inmask; TYPE_2__ inbcast; scalar_t__ flags; TYPE_1__ index; struct in_addr inaddr; int ifindex; } ;


 int FUNC_0 (struct mibifa*,int *) ;
 int VAR_0 ;
 struct mibifa* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct mibifa *
FUNC_4(u_int VAR_2, struct in_addr VAR_3)
{
 struct mibifa *VAR_4;
 uint32_t VAR_5;

 if ((VAR_4 = FUNC_1(sizeof(struct mibifa))) == ((void*)0)) {
  FUNC_3(VAR_0, "ifa: %m");
  return (((void*)0));
 }
 VAR_4->inaddr = VAR_3;
 VAR_4->ifindex = VAR_2;

 VAR_5 = FUNC_2(VAR_4->inaddr.s_addr);
 VAR_4->index.len = 4;
 VAR_4->index.subs[0] = (VAR_5 >> 24) & 0xff;
 VAR_4->index.subs[1] = (VAR_5 >> 16) & 0xff;
 VAR_4->index.subs[2] = (VAR_5 >> 8) & 0xff;
 VAR_4->index.subs[3] = (VAR_5 >> 0) & 0xff;

 VAR_4->flags = 0;
 VAR_4->inbcast.s_addr = 0;
 VAR_4->inmask.s_addr = 0xffffffff;

 FUNC_0(VAR_4, &VAR_1);

 return (VAR_4);
}
