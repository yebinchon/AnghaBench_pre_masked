
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_common {int owner; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;
 struct res_common* FUNC_0 (int ,int) ;
 struct res_common* FUNC_1 (int ) ;
 struct res_common* FUNC_2 (int ) ;
 struct res_common* FUNC_3 (int ,int) ;
 struct res_common* FUNC_4 (int ,int) ;
 struct res_common* FUNC_5 (int ,int) ;
 struct res_common* FUNC_6 (int ) ;
 struct res_common* FUNC_7 (int ) ;
 struct res_common* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static struct res_common *FUNC_10(u64 VAR_0, enum mlx4_resource VAR_1, int VAR_2,
       int VAR_3)
{
 struct res_common *VAR_4;

 switch (VAR_1) {
 case 130:
  VAR_4 = FUNC_6(VAR_0);
  break;
 case 132:
  VAR_4 = FUNC_4(VAR_0, VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_5(VAR_0, VAR_3);
  break;
 case 135:
  VAR_4 = FUNC_2(VAR_0);
  break;
 case 136:
  VAR_4 = FUNC_1(VAR_0);
  break;
 case 129:
  VAR_4 = FUNC_7(VAR_0);
  break;
 case 133:
  FUNC_9("implementation missing\n");
  return ((void*)0);
 case 137:
  VAR_4 = FUNC_0(VAR_0, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_8(VAR_0);
  break;
 case 134:
  VAR_4 = FUNC_3(VAR_0, VAR_3);
  break;
 default:
  return ((void*)0);
 }
 if (VAR_4)
  VAR_4->owner = VAR_2;

 return VAR_4;
}
