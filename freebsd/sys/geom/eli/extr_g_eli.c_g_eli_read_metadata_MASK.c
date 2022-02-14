
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ sectorsize; scalar_t__ mediasize; } ;
struct g_eli_metadata {int dummy; } ;
struct g_class {int dummy; } ;


 int FUNC_0 (struct g_class*,struct g_provider*,scalar_t__,struct g_eli_metadata*) ;

int
FUNC_1(struct g_class *VAR_0, struct g_provider *VAR_1,
    struct g_eli_metadata *VAR_2)
{

 return (FUNC_0(VAR_0, VAR_1,
     VAR_1->mediasize - VAR_1->sectorsize, VAR_2));
}
