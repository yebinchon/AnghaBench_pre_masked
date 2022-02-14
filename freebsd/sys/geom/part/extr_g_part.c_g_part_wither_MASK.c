
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int * private; } ;
struct g_part_table {int gpt_entry; } ;
struct g_part_entry {struct g_provider* gpe_pp; } ;
struct g_geom {struct g_part_table* softc; } ;
typedef int kobj_t ;


 int FUNC_0 (struct g_part_table*,int *) ;
 struct g_part_entry* FUNC_1 (int *) ;
 int FUNC_2 (struct g_part_entry*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct g_part_entry*) ;
 int FUNC_4 (struct g_geom*,int) ;
 int FUNC_5 (struct g_provider*,int) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct g_geom *VAR_2, int VAR_3)
{
 struct g_part_entry *VAR_4;
 struct g_part_table *VAR_5;
 struct g_provider *VAR_6;

 VAR_5 = VAR_2->softc;
 if (VAR_5 != ((void*)0)) {
  VAR_2->softc = ((void*)0);
  while ((VAR_4 = FUNC_1(&VAR_5->gpt_entry)) != ((void*)0)) {
   FUNC_2(VAR_4, VAR_1);
   VAR_6 = VAR_4->gpe_pp;
   VAR_4->gpe_pp = ((void*)0);
   if (VAR_6 != ((void*)0)) {
    VAR_6->private = ((void*)0);
    FUNC_5(VAR_6, VAR_3);
   }
   FUNC_3(VAR_4);
  }
  FUNC_0(VAR_5, ((void*)0));
  FUNC_6((kobj_t)VAR_5, VAR_0);
 }
 FUNC_4(VAR_2, VAR_3);
}
