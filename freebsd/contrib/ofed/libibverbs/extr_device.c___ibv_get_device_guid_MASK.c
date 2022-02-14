
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct ibv_device {int ibdev_path; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (char*,char*,int*,int*,int*,int*) ;

__be64 FUNC_3(struct ibv_device *VAR_0)
{
 char VAR_1[24];
 uint64_t VAR_2 = 0;
 uint16_t VAR_3[4];
 int VAR_4;

 if (FUNC_1(VAR_0->ibdev_path, "node_guid",
    VAR_1, sizeof VAR_1) < 0)
  return 0;

 if (FUNC_2(VAR_1, "%hx:%hx:%hx:%hx",
     VAR_3, VAR_3 + 1, VAR_3 + 2, VAR_3 + 3) != 4)
  return 0;

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
  VAR_2 = (VAR_2 << 16) | VAR_3[VAR_4];

 return FUNC_0(VAR_2);
}
