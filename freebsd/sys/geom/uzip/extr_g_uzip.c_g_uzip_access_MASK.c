
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {struct g_geom* geom; } ;
struct g_geom {int consumer; } ;
struct g_consumer {scalar_t__ acw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct g_consumer* FUNC_1 (int *) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct g_provider *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct g_geom *VAR_5;
 struct g_consumer *VAR_6;

 VAR_5 = VAR_1->geom;
 VAR_6 = FUNC_1(&VAR_5->consumer);
 FUNC_0 (VAR_6 != ((void*)0), ("g_uzip_access but no consumer"));

 if (VAR_6->acw + VAR_3 > 0)
  return (VAR_0);

 return (FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4));
}
