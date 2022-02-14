
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int VAR_0 ;



 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5,
    struct resource *VAR_6)
{
 vm_offset_t VAR_7;
 int VAR_8;

 switch(VAR_4) {
 case 128:
 case 130:
  VAR_7 = (vm_offset_t)FUNC_2(FUNC_5(VAR_6),
    FUNC_4(VAR_6));
  FUNC_6(VAR_6, VAR_7);
  FUNC_7(VAR_6, VAR_1);
  VAR_8 = FUNC_3(VAR_6);
  break;
 case 129:
  VAR_8 = (FUNC_0(FUNC_1(VAR_2),
      VAR_3, VAR_4, VAR_5, VAR_6));
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 return (VAR_8);
}
