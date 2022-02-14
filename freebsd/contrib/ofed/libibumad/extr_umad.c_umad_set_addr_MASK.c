
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sl; void* qkey; int lid; void* qpn; } ;
struct ib_user_mad {TYPE_1__ addr; } ;


 int FUNC_0 (char*,void*,int,int,int,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;

int FUNC_3(void *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct ib_user_mad *VAR_5 = VAR_0;

 FUNC_0("umad %p dlid %u dqp %d sl %d, qkey %x",
       VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5->addr.qpn = FUNC_2(VAR_2);
 VAR_5->addr.lid = FUNC_1(VAR_1);
 VAR_5->addr.qkey = FUNC_2(VAR_4);
 VAR_5->addr.sl = VAR_3;

 return 0;
}
