
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oce_mbx {int payload; } ;
struct oce_eq {int eq_id; int * ring; int parent; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct mbx_destroy_common_eq {TYPE_2__ params; } ;
typedef int mbx ;
typedef int POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oce_mbx*,int) ;
 int FUNC_1 (struct oce_eq*,int ) ;
 int FUNC_2 (int ,struct oce_mbx*,int,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct oce_eq *VAR_2)
{
 struct oce_mbx VAR_3;
 struct mbx_destroy_common_eq *VAR_4;
 POCE_SOFTC VAR_5 = (POCE_SOFTC) VAR_2->parent;

 if (VAR_2->eq_id != 0xffff) {
  FUNC_0(&VAR_3, sizeof(VAR_3));
  VAR_4 = (struct mbx_destroy_common_eq *)&VAR_3.payload;
  VAR_4->params.req.id = VAR_2->eq_id;
  (void)FUNC_2(VAR_5, &VAR_3,
   sizeof(struct mbx_destroy_common_eq), VAR_1, 0);
 }

 if (VAR_2->ring != ((void*)0)) {
  FUNC_3(VAR_5, VAR_2->ring);
  VAR_2->ring = ((void*)0);
 }

 FUNC_1(VAR_2, VAR_0);

}
