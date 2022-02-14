
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncr53c9x_softc {int free_list; } ;
struct ncr53c9x_ecb {scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int FUNC_1 (int *,struct ncr53c9x_ecb*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ncr53c9x_softc *VAR_2, struct ncr53c9x_ecb *VAR_3)
{

 FUNC_0(VAR_2, VAR_0);

 VAR_3->flags = 0;
 FUNC_1(&VAR_2->free_list, VAR_3, VAR_1);
}
