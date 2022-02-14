
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ibv_context {TYPE_1__* device; } ;
typedef int __be16 ;
struct TYPE_2__ {int ibdev_path; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int,int) ;
 int FUNC_3 (char*,char*,int *) ;

int FUNC_4(struct ibv_context *VAR_0, uint8_t VAR_1,
       int VAR_2, __be16 *VAR_3)
{
 char VAR_4[24];
 char VAR_5[8];
 uint16_t VAR_6;

 FUNC_2(VAR_4, sizeof VAR_4, "ports/%d/pkeys/%d", VAR_1, VAR_2);

 if (FUNC_1(VAR_0->device->ibdev_path, VAR_4,
    VAR_5, sizeof VAR_5) < 0)
  return -1;

 if (FUNC_3(VAR_5, "%hx", &VAR_6) != 1)
  return -1;

 *VAR_3 = FUNC_0(VAR_6);
 return 0;
}
