
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_device {scalar_t__ id_vendorid; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,size_t,char*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 struct isa_device *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->id_vendorid)
  FUNC_2(VAR_2, VAR_3, "pnpid=%s",
      FUNC_1(VAR_4->id_vendorid));
 return (0);
}
