
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef uintptr_t bhnd_size_t ;


 int FUNC_0 (int ,int ,uintptr_t,uintptr_t,int *) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*,int ) ;
 int FUNC_5 (struct resource*,int ) ;
 int FUNC_6 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_7(struct resource *VAR_0,
    struct resource *VAR_1, bhnd_size_t VAR_2, bhnd_size_t VAR_3)
{
 bus_space_handle_t VAR_4, VAR_5;
 bus_space_tag_t VAR_6;
 uintptr_t VAR_7;
 int VAR_8;


 VAR_7 = (uintptr_t) FUNC_3(VAR_1);
 VAR_6 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_1);


 VAR_7 += VAR_2;
 VAR_8 = FUNC_0(VAR_6, VAR_4, VAR_2, VAR_3, &VAR_5);
 if (VAR_8)
  return (VAR_8);

 FUNC_6(VAR_0, (void *) VAR_7);
 FUNC_5(VAR_0, VAR_6);
 FUNC_4(VAR_0, VAR_5);

 return (0);
}
