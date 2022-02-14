
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;
typedef int cy_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,struct resource*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct resource *VAR_6;
 cy_addr VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_7(VAR_5) != 0)
  return (VAR_2);

 VAR_9 = 0;
 VAR_6 = FUNC_1(VAR_5, VAR_4, &VAR_9,
     VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_6(VAR_5, "ioport resource allocation failed\n");
  return (VAR_2);
 }
 VAR_7 = FUNC_8(VAR_6);


 FUNC_3(VAR_7, VAR_0, 0);
 FUNC_0(500);


 FUNC_4(VAR_7, VAR_1, 0, 0);
 FUNC_0(500);

 VAR_8 = (FUNC_5(VAR_7, 0) == 0 ? VAR_2 : 0);
 FUNC_2(VAR_5, VAR_4, VAR_9, VAR_6);
 return (VAR_8);
}
