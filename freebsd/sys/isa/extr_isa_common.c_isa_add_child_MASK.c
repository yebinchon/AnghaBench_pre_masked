
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct isa_device {int id_order; int id_configs; int id_resources; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,char const*,int) ;
 int FUNC_2 (int *,struct isa_device*) ;
 struct isa_device* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 device_t VAR_7;
 struct isa_device *VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_7);

 VAR_8 = FUNC_3(sizeof(struct isa_device), VAR_0, VAR_1 | VAR_2);
 if (!VAR_8)
  return (0);

 FUNC_4(&VAR_8->id_resources);
 FUNC_0(&VAR_8->id_configs);
 VAR_8->id_order = VAR_4;

 FUNC_2(VAR_7, VAR_8);

 return (VAR_7);
}
