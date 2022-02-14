
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int peerportid ;
struct TYPE_8__ {int cnt; int* p; int drdlid; scalar_t__ drslid; } ;
struct TYPE_9__ {TYPE_1__ drpath; scalar_t__ lid; int member_0; } ;
typedef TYPE_2__ ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int*,int ,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_5(ib_portid_t* VAR_5, int VAR_6, int* VAR_7, int* VAR_8)
{
 ib_portid_t VAR_9 = { 0 };
 ib_portid_t VAR_10 = { 0 };
 int VAR_11 = 0;


 FUNC_3(&VAR_10, VAR_5, sizeof(VAR_10));
 VAR_10.drpath.cnt = 1;
 VAR_10.drpath.p[1] = VAR_6;
 if (FUNC_1(&VAR_9, &VAR_11, 0, VAR_4) < 0)
  FUNC_0("failed to resolve self portid");
 VAR_10.drpath.drslid = (uint16_t) VAR_9.lid;
 VAR_10.drpath.drdlid = 0xffff;
 if (!FUNC_4(VAR_3, &VAR_10, VAR_0, 0, 0, VAR_4))
  FUNC_0("get peer portinfo failed - unable to configure lossy\n");

 FUNC_2(VAR_3, VAR_1, VAR_7);
 FUNC_2(VAR_3, VAR_2, VAR_8);

 return 0;
}
