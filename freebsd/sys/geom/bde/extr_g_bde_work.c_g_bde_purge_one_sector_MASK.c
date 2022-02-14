
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_softc {int ncache; int freelist; } ;
struct g_bde_sector {scalar_t__ ref; int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct g_bde_sector*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct g_bde_softc*,struct g_bde_sector*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,struct g_bde_softc*,struct g_bde_sector*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct g_bde_softc *VAR_3, struct g_bde_sector *VAR_4)
{

 FUNC_3(VAR_0, "g_bde_purge_one_sector(%p, %p)", VAR_3, VAR_4);
 if (VAR_4->ref != 0)
  return;
 FUNC_0(&VAR_3->freelist, VAR_4, VAR_2);
 VAR_1--;
 VAR_3->ncache--;
 FUNC_1(VAR_4->data, VAR_4->size);
 FUNC_2(VAR_3, VAR_4);
}
