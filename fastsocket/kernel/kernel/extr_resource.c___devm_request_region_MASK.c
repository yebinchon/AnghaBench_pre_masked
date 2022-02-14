
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct region_devres {void* n; void* start; struct resource* parent; } ;
struct device {int dummy; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct resource*,void*,void*,char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct region_devres*) ;
 struct region_devres* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct region_devres*) ;

struct resource * FUNC_4(struct device *VAR_2,
    struct resource *VAR_3, resource_size_t VAR_4,
    resource_size_t VAR_5, const char *VAR_6)
{
 struct region_devres *VAR_7 = ((void*)0);
 struct resource *VAR_8;

 VAR_7 = FUNC_2(VAR_1, sizeof(struct region_devres),
     VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->parent = VAR_3;
 VAR_7->start = VAR_4;
 VAR_7->n = VAR_5;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 0);
 if (VAR_8)
  FUNC_1(VAR_2, VAR_7);
 else
  FUNC_3(VAR_7);

 return VAR_8;
}
