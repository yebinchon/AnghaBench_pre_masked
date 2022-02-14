
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_i {int dummy; } ;
struct resource {struct resource* __r_i; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*,int ,int,int*,unsigned int) ;
 int FUNC_1 (struct resource*,int ) ;
 void* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct resource*,int ,int,int*,unsigned int) ;

struct resource *
FUNC_4(device_t VAR_2, int VAR_3, int *VAR_4, unsigned int VAR_5)
{
 struct resource *VAR_6;
 int VAR_7 = VAR_0;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1, VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_6->__r_i = FUNC_2(sizeof(struct resource_i), VAR_1, VAR_1);
 if (VAR_6->__r_i == ((void*)0)) {
  FUNC_1(VAR_6, VAR_1);
  return (((void*)0));
 }

 if (&FUNC_0 != ((void*)0))
  VAR_7 = FUNC_0)(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 == 0)
  return (VAR_6);

 FUNC_1(VAR_6->__r_i, VAR_1);
 FUNC_1(VAR_6, VAR_1);
 return (((void*)0));
}
