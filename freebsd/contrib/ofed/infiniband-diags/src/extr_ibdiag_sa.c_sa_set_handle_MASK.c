
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int grh_present; int gid; } ;
struct sa_handle {TYPE_1__ dport; } ;
typedef int ibmad_gid_t ;


 int FUNC_0 (int ,int *,int) ;

int FUNC_1(struct sa_handle * VAR_0, int VAR_1, ibmad_gid_t *VAR_2)
{
 if (VAR_1) {
  if (VAR_2 == ((void*)0)) {
   return -1;
  } else {
   VAR_0->dport.grh_present = 1;
   FUNC_0(VAR_0->dport.gid, VAR_2, 16);
  }
 }
 return 0;
}
