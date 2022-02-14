
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_hdr {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int,int *,int) ;

int FUNC_1(struct adapter *VAR_1, struct fw_hdr *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0,
     sizeof (*VAR_2) / sizeof (uint32_t), (uint32_t *)VAR_2, 1);
}
