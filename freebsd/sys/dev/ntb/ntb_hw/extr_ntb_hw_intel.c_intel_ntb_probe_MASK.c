
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_hw_info {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct ntb_hw_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct ntb_hw_info *VAR_2;

 VAR_2 = FUNC_1(FUNC_2(VAR_1));
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1, VAR_2->desc);
 return (0);
}
