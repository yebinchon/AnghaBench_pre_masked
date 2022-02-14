
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ibv_gid {int* raw; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct ibv_context {TYPE_1__* device; } ;
struct TYPE_2__ {int ibdev_path; } ;


 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (char*,int,char*,int,int) ;
 int FUNC_2 (char*,char*,int*) ;

int FUNC_3(struct ibv_context *VAR_0, uint8_t VAR_1,
      int VAR_2, union ibv_gid *VAR_3)
{
 char VAR_4[24];
 char VAR_5[41];
 uint16_t VAR_6;
 int VAR_7;

 FUNC_1(VAR_4, sizeof VAR_4, "ports/%d/gids/%d", VAR_1, VAR_2);

 if (FUNC_0(VAR_0->device->ibdev_path, VAR_4,
    VAR_5, sizeof VAR_5) < 0)
  return -1;

 for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
  if (FUNC_2(VAR_5 + VAR_7 * 5, "%hx", &VAR_6) != 1)
   return -1;
  VAR_3->raw[VAR_7 * 2 ] = VAR_6 >> 8;
  VAR_3->raw[VAR_7 * 2 + 1] = VAR_6 & 0xff;
 }

 return 0;
}
