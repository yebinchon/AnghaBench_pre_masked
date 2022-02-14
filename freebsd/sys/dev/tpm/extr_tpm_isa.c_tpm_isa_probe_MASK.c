
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 bus_space_tag_t VAR_4;
 bus_space_handle_t VAR_5;
 struct resource *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = 0;
 VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_8,
     VAR_1);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_4 = FUNC_4(VAR_6);
 VAR_5 = FUNC_3(VAR_6);

 if ((VAR_7 = FUNC_5(VAR_4, VAR_5)))
  FUNC_2(VAR_3, "Trusted Platform Module");

 FUNC_1(VAR_3, VAR_2, VAR_8, VAR_6);
 return VAR_7 ? 0 : VAR_0;
}
