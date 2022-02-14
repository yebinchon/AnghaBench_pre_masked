
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* dist_cache; } ;
struct rar5 {TYPE_1__ cstate; } ;



__attribute__((used)) static void FUNC_0(struct rar5* VAR_0, int VAR_1) {
 int* VAR_2 = VAR_0->cstate.dist_cache;

 VAR_2[3] = VAR_2[2];
 VAR_2[2] = VAR_2[1];
 VAR_2[1] = VAR_2[0];
 VAR_2[0] = VAR_1;
}
