
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct mlx4_query_device_ex_resp {int comp_mask; int hca_core_clock_offset; int ibv_resp; } ;
struct mlx4_query_device_ex {int ibv_cmd; } ;
struct TYPE_3__ {int offset_valid; int offset; } ;
struct mlx4_context {TYPE_1__ core_clock; } ;
struct ibv_query_device_ex_input {int dummy; } ;
struct TYPE_4__ {int fw_ver; } ;
struct ibv_device_attr_ex {TYPE_2__ orig_attr; } ;
struct ibv_context {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_context*,struct ibv_query_device_ex_input const*,struct ibv_device_attr_ex*,size_t,int*,int *,int,int,int *,int,int) ;
 int FUNC_1 (int ,int,char*,unsigned int,unsigned int,unsigned int) ;
 struct mlx4_context* FUNC_2 (struct ibv_context*) ;

int FUNC_3(struct ibv_context *VAR_1,
    const struct ibv_query_device_ex_input *VAR_2,
    struct ibv_device_attr_ex *VAR_3,
    size_t VAR_4)
{
 struct mlx4_context *VAR_5 = FUNC_2(VAR_1);
 struct mlx4_query_device_ex_resp VAR_6 = {};
 struct mlx4_query_device_ex VAR_7 = {};
 uint64_t VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
          &VAR_8,
          &VAR_7.ibv_cmd, sizeof(VAR_7.ibv_cmd), sizeof(VAR_7),
          &VAR_6.ibv_resp, sizeof(VAR_6.ibv_resp),
          sizeof(VAR_6));
 if (VAR_12)
  return VAR_12;

 if (VAR_6.comp_mask & VAR_0) {
  VAR_5->core_clock.offset = VAR_6.hca_core_clock_offset;
  VAR_5->core_clock.offset_valid = 1;
 }

 VAR_10 = (VAR_8 >> 32) & 0xffff;
 VAR_11 = (VAR_8 >> 16) & 0xffff;
 VAR_9 = VAR_8 & 0xffff;

 FUNC_1(VAR_3->orig_attr.fw_ver, sizeof VAR_3->orig_attr.fw_ver,
   "%d.%d.%03d", VAR_10, VAR_11, VAR_9);

 return 0;
}
