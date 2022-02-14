
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint32_t ;
typedef int tmp_gid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,union ibv_gid const*,int) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(const union ibv_gid *VAR_0, char VAR_1[])
{
 uint32_t VAR_2[4];
 int VAR_3;

 FUNC_1(VAR_2, VAR_0, sizeof(VAR_2));
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
  FUNC_2(&VAR_1[VAR_3 * 8], "%08x", FUNC_0(VAR_2[VAR_3]));
}
