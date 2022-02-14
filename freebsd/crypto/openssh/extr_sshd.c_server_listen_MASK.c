
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_6__ {struct TYPE_6__* rdomain; int addrs; } ;
struct TYPE_5__ {size_t num_listen_addrs; TYPE_2__* listen_addrs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(void)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1.num_listen_addrs; VAR_2++) {
  FUNC_3(&VAR_1.listen_addrs[VAR_2]);
  FUNC_2(VAR_1.listen_addrs[VAR_2].addrs);
  FUNC_1(VAR_1.listen_addrs[VAR_2].rdomain);
  FUNC_4(&VAR_1.listen_addrs[VAR_2], 0,
      sizeof(VAR_1.listen_addrs[VAR_2]));
 }
 FUNC_1(VAR_1.listen_addrs);
 VAR_1.listen_addrs = ((void*)0);
 VAR_1.num_listen_addrs = 0;

 if (!VAR_0)
  FUNC_0("Cannot bind any address.");
}
