
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bde_softc {int nsect; } ;
struct g_bde_sector {struct g_bde_sector* data; scalar_t__ malloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_bde_sector*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct g_bde_softc *VAR_2, struct g_bde_sector *VAR_3)
{

 VAR_1--;
 VAR_2->nsect--;
 if (VAR_3->malloc)
  FUNC_0(VAR_3->data, VAR_0);
 FUNC_0(VAR_3, VAR_0);
}
