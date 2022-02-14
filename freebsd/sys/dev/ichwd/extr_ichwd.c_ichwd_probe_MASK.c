
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ichwd_device {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,struct ichwd_device**) ;
 int * FUNC_3 (int ,struct ichwd_device**) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct ichwd_device *VAR_2;


 if (FUNC_4(VAR_1) != 0)
  return (VAR_0);

 if (FUNC_2(FUNC_0(VAR_1), &VAR_2) == ((void*)0) &&
     FUNC_3(FUNC_0(VAR_1), &VAR_2) == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_1, VAR_2->desc);
 return (0);
}
