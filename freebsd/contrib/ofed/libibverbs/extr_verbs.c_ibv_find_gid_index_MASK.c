
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint8_t ;
struct ibv_context {int dummy; } ;
typedef enum ibv_gid_type { ____Placeholder_ibv_gid_type } ibv_gid_type ;


 int FUNC_0 (struct ibv_context*,int ,int,union ibv_gid*) ;
 int FUNC_1 (struct ibv_context*,int ,int,int*) ;
 scalar_t__ FUNC_2 (union ibv_gid*,union ibv_gid*,int) ;

__attribute__((used)) static int FUNC_3(struct ibv_context *VAR_0, uint8_t VAR_1,
         union ibv_gid *VAR_2, enum ibv_gid_type VAR_3)
{
 enum ibv_gid_type VAR_4 = 0;
 union ibv_gid VAR_5;
 int VAR_6 = 0, VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_6, &VAR_5);
  if (!VAR_7) {
   VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_6,
       &VAR_4);
  }
  VAR_6++;
 } while (!VAR_7 && (FUNC_2(&VAR_5, VAR_2, sizeof(*VAR_2)) ||
   (VAR_3 != VAR_4)));

 return VAR_7 ? VAR_7 : VAR_6 - 1;
}
