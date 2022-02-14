
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_common {int state; int res_id; } ;
struct res_fs_rule {int qpn; struct res_common com; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct res_fs_rule* FUNC_0 (int,int ) ;

__attribute__((used)) static struct res_common *FUNC_1(u64 VAR_2, int VAR_3)
{
 struct res_fs_rule *VAR_4;

 VAR_4 = FUNC_0(sizeof *VAR_4, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->com.res_id = VAR_2;
 VAR_4->com.state = VAR_1;
 VAR_4->qpn = VAR_3;
 return &VAR_4->com;
}
