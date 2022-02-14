
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_4 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct resource *VAR_6;
 u_long VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_5(VAR_5, "AT Keyboard");


 VAR_8 = FUNC_3(VAR_5);


 VAR_9 = VAR_1;
 VAR_6 = FUNC_1(VAR_5, VAR_3, &VAR_9, VAR_2);
 if (VAR_6 == ((void*)0)) {
  if (VAR_4)
   FUNC_4(VAR_5, "unable to allocate IRQ\n");
  return VAR_0;
 }
 VAR_7 = FUNC_6(VAR_6);
 FUNC_2(VAR_5, VAR_3, VAR_9, VAR_6);


 return FUNC_0(VAR_5, VAR_7, VAR_8);
}
