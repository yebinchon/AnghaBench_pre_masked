
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int dummy; } ;
struct g_geom {int provider; } ;
struct disk {struct g_geom* d_geom; } ;


 int FUNC_0 (int ,char*) ;
 struct g_provider* FUNC_1 (int *) ;
 int * FUNC_2 (struct g_provider*,int ) ;
 int FUNC_3 (struct g_provider*,int) ;
 int VAR_0 ;

void
FUNC_4(struct disk *VAR_1, int VAR_2)
{
 struct g_geom *VAR_3;
 struct g_provider *VAR_4;

 VAR_3 = VAR_1->d_geom;
 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(&VAR_3->provider);
  if (VAR_4 != ((void*)0)) {
   FUNC_0(FUNC_2(VAR_4, VAR_0) == ((void*)0),
       ("geom %p has more than one provider", VAR_3));
   FUNC_3(VAR_4, VAR_2);
  }
 }
}
