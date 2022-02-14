
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int,int*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,int,struct resource*) ;

__attribute__((used)) static int FUNC_2 (device_t VAR_0, int VAR_1, int VAR_2, rman_res_t VAR_3,
 rman_res_t VAR_4, rman_res_t VAR_5)
{
 struct resource *VAR_6;

 if (!(VAR_6 = FUNC_0 (VAR_0, VAR_2, &VAR_1, VAR_3, VAR_4, VAR_5, 0)))
  return 0;

 FUNC_1 (VAR_0, VAR_2, VAR_1, VAR_6);

 return 1;
}
