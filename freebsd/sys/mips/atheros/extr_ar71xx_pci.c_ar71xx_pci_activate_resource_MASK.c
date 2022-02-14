
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,struct resource*) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 int VAR_6 = (FUNC_0(FUNC_1(VAR_1),
     VAR_2, VAR_3, VAR_4, VAR_5));

 if (!VAR_6) {
  switch(VAR_3) {
  case 128:
  case 129:
   FUNC_2(VAR_5, VAR_0);
   break;
  }
 }
 return (VAR_6);
}
