
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nm_ipv6hdr {int nexthdr; } ;


 int FUNC_0 (void*,size_t,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,size_t,int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct nm_ipv6hdr *VAR_0, void *VAR_1,
     size_t VAR_2, uint16_t *VAR_3)
{




 static int VAR_4 = 0;
 if (!VAR_4) {
  VAR_4 = 1;
  FUNC_3("inet6 segmentation not supported");
 }

}
