
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {TYPE_3__** ports; int info; } ;
typedef TYPE_4__ ibnd_node_t ;
struct TYPE_8__ {TYPE_2__* remoteport; } ;
struct TYPE_7__ {TYPE_1__* node; } ;
struct TYPE_6__ {int info; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static uint64_t FUNC_4(ibnd_node_t * VAR_1)
{
 uint64_t VAR_2 =
     FUNC_3(VAR_1->info, 0, VAR_0);
 uint64_t VAR_3;

 if (!FUNC_0(VAR_2)) {


  if (FUNC_2(VAR_2))
   return VAR_2 & 0xffffffff00ffffffULL;
  else
   return VAR_2;
 } else {
  if (!VAR_1->ports || !VAR_1->ports[1])
   return 0;


  if (!VAR_1->ports[1]->remoteport)
   return VAR_2;


  VAR_3 =
      FUNC_3(VAR_1->ports[1]->remoteport->node->info, 0,
        VAR_0);
  if (FUNC_1(VAR_3))
   return VAR_3 & 0xffffffff00ffffffULL;
  else
   return VAR_2;
 }
}
