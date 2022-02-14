
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_resource {int res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bhnd_resource*,int ) ;

int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct bhnd_resource *VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5->res)))
  return (VAR_6);

 FUNC_1(VAR_5, VAR_0);
 return (0);
}
