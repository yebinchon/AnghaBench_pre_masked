
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ibv_query_device_resp {int dummy; } ;
struct ibv_query_device {int dummy; } ;
struct ibv_device_attr {int fw_ver; } ;
struct ibv_context {int cmd_fd; } ;


 int FUNC_0 (struct ibv_query_device*,size_t,int ,struct ibv_query_device_resp*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_query_device_resp*,int) ;
 int FUNC_2 (struct ibv_device_attr*,struct ibv_query_device_resp*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int) ;
 size_t FUNC_4 (int ,struct ibv_query_device*,size_t) ;

int FUNC_5(struct ibv_context *VAR_2,
    struct ibv_device_attr *VAR_3,
    uint64_t *VAR_4,
    struct ibv_query_device *VAR_5, size_t VAR_6)
{
 struct ibv_query_device_resp VAR_7;

 FUNC_0(VAR_5, VAR_6, VAR_0, &VAR_7, sizeof VAR_7);

 if (FUNC_4(VAR_2->cmd_fd, VAR_5, VAR_6) != VAR_6)
  return VAR_1;

 (void) FUNC_1(&VAR_7, sizeof VAR_7);

 FUNC_3(VAR_3->fw_ver, 0, sizeof VAR_3->fw_ver);
 FUNC_2(VAR_3, &VAR_7, VAR_4);

 return 0;
}
