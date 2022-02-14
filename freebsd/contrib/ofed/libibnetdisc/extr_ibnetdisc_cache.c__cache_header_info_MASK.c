
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int maxhops_discovered; TYPE_1__* from_node; } ;
typedef TYPE_2__ ibnd_fabric_t ;
struct TYPE_4__ {int guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int,int *,size_t) ;

__attribute__((used)) static int FUNC_3(int VAR_3, ibnd_fabric_t * VAR_4)
{
 uint8_t VAR_5[VAR_0];
 size_t VAR_6 = 0;




 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_1);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_2);

 VAR_6 += FUNC_0(VAR_5 + VAR_6, 0);

 VAR_6 += FUNC_0(VAR_5 + VAR_6, 0);
 VAR_6 += FUNC_1(VAR_5 + VAR_6, VAR_4->from_node->guid);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_4->maxhops_discovered);

 if (FUNC_2(VAR_3, VAR_5, VAR_6) < 0)
  return -1;

 return 0;
}
