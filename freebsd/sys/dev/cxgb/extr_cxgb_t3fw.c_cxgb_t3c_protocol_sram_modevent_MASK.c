
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 struct firmware* FUNC_0 (char*,int ,size_t,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(module_t VAR_4, int VAR_5, void *VAR_6)
{
 const struct firmware *VAR_7, *VAR_8;
 int VAR_9;
 switch (VAR_5) {
 case 129:

  VAR_7 = FUNC_0("cxgb_t3c_protocol_sram", VAR_2,
           (size_t)VAR_3,
           0, ((void*)0));
  if (VAR_7 == ((void*)0))
   goto fail_0;
  VAR_8 = VAR_7;
  return (0);
 fail_0:
  return (VAR_1);
 case 128:
  VAR_9 = FUNC_1("cxgb_t3c_protocol_sram");
  return (VAR_9);
 }
 return (VAR_0);
}
