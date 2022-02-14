
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 char *VAR_1;
 int VAR_2 = 64;

 VAR_1 = FUNC_1("MLX5_CQE_SIZE");
 if (VAR_1)
  VAR_2 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 64:
 case 128:
  return VAR_2;

 default:
  return -VAR_0;
 }
}
