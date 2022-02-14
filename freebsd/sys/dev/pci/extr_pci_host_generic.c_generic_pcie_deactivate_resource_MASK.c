
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2,
    int VAR_3, struct resource *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_2(VAR_4)) != 0)
  return (VAR_5);

 switch (VAR_2) {
 case 130:
 case 128:
 case 129:
  VAR_5 = FUNC_0(FUNC_1(VAR_0), VAR_1,
      VAR_2, VAR_3, VAR_4);
  break;
 default:
  break;
 }

 return (VAR_5);
}
