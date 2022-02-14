
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
struct ibv_query_device {int dummy; } ;
struct ibv_device_attr {int fw_ver; } ;
struct ibv_context {int dummy; } ;


 int FUNC_0 (struct ibv_context*,struct ibv_device_attr*,int*,struct ibv_query_device*,int) ;
 int FUNC_1 (int ,int,char*,int,int,int,int) ;

int FUNC_2(struct ibv_context *VAR_0, struct ibv_device_attr *VAR_1)
{
 struct ibv_query_device VAR_2;
 uint64_t VAR_3;
 u8 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_2,
       sizeof VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_4 = (VAR_3 >> 24) & 0xff;
 VAR_5 = (VAR_3 >> 16) & 0xff;
 VAR_6 = (VAR_3 >> 8) & 0xff;
 VAR_7 = VAR_3 & 0xff;

 FUNC_1(VAR_1->fw_ver, sizeof VAR_1->fw_ver,
   "%d.%d.%d.%d", VAR_4, VAR_5, VAR_6, VAR_7);

 return 0;
}
