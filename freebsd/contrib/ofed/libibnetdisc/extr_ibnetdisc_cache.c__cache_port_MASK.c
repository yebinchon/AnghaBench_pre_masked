
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int lmc; TYPE_2__* remoteport; TYPE_1__* node; int info; int base_lid; scalar_t__ ext_portnum; scalar_t__ portnum; int guid; } ;
typedef TYPE_3__ ibnd_port_t ;
struct TYPE_6__ {scalar_t__ portnum; int guid; } ;
struct TYPE_5__ {int guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int ) ;
 scalar_t__ FUNC_1 (int*,int ) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int*,int ,int ) ;
 scalar_t__ FUNC_4 (int,int*,size_t) ;

__attribute__((used)) static int FUNC_5(int VAR_2, ibnd_port_t * VAR_3)
{
 uint8_t VAR_4[VAR_0];
 size_t VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_3->guid);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, (uint8_t) VAR_3->portnum);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, (uint8_t) VAR_3->ext_portnum);
 VAR_5 += FUNC_0(VAR_4 + VAR_5, VAR_3->base_lid);
 VAR_5 += FUNC_2(VAR_4 + VAR_5, VAR_3->lmc);
 VAR_5 += FUNC_3(VAR_4 + VAR_5, VAR_3->info, VAR_1);
 VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_3->node->guid);
 if (VAR_3->remoteport) {
  VAR_5 += FUNC_2(VAR_4 + VAR_5, 1);
  VAR_5 += FUNC_1(VAR_4 + VAR_5, VAR_3->remoteport->guid);
  VAR_5 += FUNC_2(VAR_4 + VAR_5, (uint8_t) VAR_3->remoteport->portnum);
 } else {
  VAR_5 += FUNC_2(VAR_4 + VAR_5, 0);
  VAR_5 += FUNC_1(VAR_4 + VAR_5, 0);
  VAR_5 += FUNC_2(VAR_4 + VAR_5, 0);
 }

 if (FUNC_4(VAR_2, VAR_4, VAR_5) < 0)
  return -1;

 return 0;
}
