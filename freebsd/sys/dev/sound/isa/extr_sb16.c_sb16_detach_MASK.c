
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_info {int dummy; } ;
typedef int device_t ;


 struct sb_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sb_info*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 int VAR_1;
 struct sb_info *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_2 = FUNC_0(VAR_0);
     FUNC_2(VAR_2, VAR_0);
 return 0;
}
