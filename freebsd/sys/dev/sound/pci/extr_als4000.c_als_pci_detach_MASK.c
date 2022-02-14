
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sc_info*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*,int ) ;
 struct sc_info* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct sc_info *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_2, VAR_0);
 return 0;
}
