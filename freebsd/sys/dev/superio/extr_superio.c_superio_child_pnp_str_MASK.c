
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int superio_dev_type_t ;
typedef int device_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 superio_dev_type_t VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 FUNC_1(VAR_2, VAR_3, "type=%s", FUNC_0(VAR_4));
 return (0);
}
