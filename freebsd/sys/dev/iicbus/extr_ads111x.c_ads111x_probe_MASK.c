
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ads111x_chipinfo {int name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ads111x_chipinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 const struct ads111x_chipinfo *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_2, VAR_3->name);
  return (VAR_0);
 }

 return (VAR_1);
}
