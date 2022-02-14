
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef enum mlx5_alloc_type { ____Placeholder_mlx5_alloc_type } mlx5_alloc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(const char *VAR_6,
    enum mlx5_alloc_type *VAR_7,
    enum mlx5_alloc_type VAR_8)

{
 char *VAR_9;
 char VAR_10[128];

 FUNC_1(VAR_10, sizeof(VAR_10), "%s_ALLOC_TYPE", VAR_6);

 *VAR_7 = VAR_8;

 VAR_9 = FUNC_0(VAR_10);
 if (VAR_9) {
  if (!FUNC_2(VAR_9, "ANON"))
   *VAR_7 = VAR_1;
  else if (!FUNC_2(VAR_9, "HUGE"))
   *VAR_7 = VAR_3;
  else if (!FUNC_2(VAR_9, "CONTIG"))
   *VAR_7 = VAR_2;
  else if (!FUNC_2(VAR_9, "PREFER_CONTIG"))
   *VAR_7 = VAR_4;
  else if (!FUNC_2(VAR_9, "PREFER_HUGE"))
   *VAR_7 = VAR_5;
  else if (!FUNC_2(VAR_9, "ALL"))
   *VAR_7 = VAR_0;
 }
}
