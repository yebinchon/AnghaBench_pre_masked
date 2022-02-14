
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_context {void* dbg_fp; } ;


 void* FUNC_0 (char*,char*) ;
 int FUNC_1 (void*,char*,char*) ;
 char* FUNC_2 (char*) ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct mlx5_context *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2("MLX5_DEBUG_FILE");
 if (!VAR_2) {
  VAR_1->dbg_fp = VAR_0;
  return;
 }

 VAR_1->dbg_fp = FUNC_0(VAR_2, "aw+");
 if (!VAR_1->dbg_fp) {
  FUNC_1(VAR_0, "Failed opening debug file %s, using stderr\n", VAR_2);
  VAR_1->dbg_fp = VAR_0;
  return;
 }
}
