
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ibv_query_device {int dummy; } ;
struct ibv_device_attr {int fw_ver; } ;
struct ibv_context {int dummy; } ;


 int FUNC_0 (struct ibv_context*,struct ibv_device_attr*,int*,struct ibv_query_device*,int) ;
 int FUNC_1 (int ,int,char*,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(struct ibv_context *VAR_0, struct ibv_device_attr *VAR_1)
{
 struct ibv_query_device VAR_2;
 uint64_t VAR_3;
 unsigned VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, &VAR_3, &VAR_2, sizeof VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_4 = (VAR_3 >> 32) & 0xffff;
 VAR_5 = (VAR_3 >> 16) & 0xffff;
 VAR_6 = VAR_3 & 0xffff;

 FUNC_1(VAR_1->fw_ver, sizeof VAR_1->fw_ver,
   "%d.%d.%03d", VAR_4, VAR_5, VAR_6);

 return 0;
}
