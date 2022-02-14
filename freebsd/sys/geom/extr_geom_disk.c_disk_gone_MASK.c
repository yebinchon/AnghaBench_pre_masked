
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int dummy; } ;
struct g_geom {int provider; } ;
struct disk {int d_goneflag; scalar_t__ d_init_level; struct g_geom* d_geom; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct g_provider* FUNC_1 (int *) ;
 int * FUNC_2 (struct g_provider*,int ) ;
 int FUNC_3 (struct g_provider*,int ) ;
 int FUNC_4 (int ,struct disk*) ;
 int FUNC_5 (int ,struct disk*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(struct disk *VAR_4)
{
 struct g_geom *VAR_5;
 struct g_provider *VAR_6;

 FUNC_4(VAR_2, VAR_4);
 VAR_4->d_goneflag = 1;
 if (VAR_4->d_init_level < VAR_0) {
  FUNC_5(VAR_2, VAR_4);
  return;
 }
 FUNC_5(VAR_2, VAR_4);

 VAR_5 = VAR_4->d_geom;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_1(&VAR_5->provider);
  if (VAR_6 != ((void*)0)) {
   FUNC_0(FUNC_2(VAR_6, VAR_3) == ((void*)0),
       ("geom %p has more than one provider", VAR_5));
   FUNC_3(VAR_6, VAR_1);
  }
 }
}
