
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct nm_iphdr {int daddr; int saddr; scalar_t__ protocol; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*,size_t,int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(struct nm_iphdr *VAR_0, void *VAR_1,
     size_t VAR_2, uint16_t *VAR_3)
{
 static int VAR_4 = 0;
 if (!VAR_4) {
  VAR_4 = 1;
  FUNC_4("inet4 segmentation not supported");
 }

}
