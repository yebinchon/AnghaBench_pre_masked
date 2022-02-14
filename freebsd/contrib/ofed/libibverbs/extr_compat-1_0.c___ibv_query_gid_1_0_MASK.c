
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint8_t ;
struct ibv_context_1_0 {int real_context; } ;


 int FUNC_0 (int ,int ,int,union ibv_gid*) ;

int FUNC_1(struct ibv_context_1_0 *VAR_0, uint8_t VAR_1,
   int VAR_2, union ibv_gid *VAR_3)
{
 return FUNC_0(VAR_0->real_context, VAR_1, VAR_2, VAR_3);
}
