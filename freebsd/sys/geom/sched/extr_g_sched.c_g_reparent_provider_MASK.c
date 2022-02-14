
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {struct g_geom* geom; int index; int private; } ;
struct g_geom {int provider; } ;


 int FUNC_0 (int *,struct g_provider*,int ) ;
 int FUNC_1 (struct g_provider*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(struct g_provider *VAR_1, struct g_geom *VAR_2,
    struct g_provider *VAR_3)
{

 FUNC_1(VAR_1, VAR_0);
 if (VAR_3) {
  VAR_1->private = VAR_3->private;
  VAR_1->index = VAR_3->index;
 }
 VAR_1->geom = VAR_2;
 FUNC_0(&VAR_2->provider, VAR_1, VAR_0);
}
