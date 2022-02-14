
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_caps {int sprom_offset; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct chipc_caps* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct chipc_caps *VAR_1;
 device_t VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0);
 VAR_1 = FUNC_2(VAR_2);



 if ((VAR_3 = FUNC_1(VAR_2)))
  return (VAR_3);

 VAR_3 = FUNC_3(VAR_0, VAR_1->sprom_offset);
 FUNC_0(VAR_2);
 return (VAR_3);
}
