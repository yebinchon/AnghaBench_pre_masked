
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct resource*,int ,int ,char*,int ) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;

int FUNC_3(struct resource *VAR_1, resource_size_t VAR_2,
   resource_size_t VAR_3)
{
 struct resource * VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, "check-region", 0);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 return 0;
}
