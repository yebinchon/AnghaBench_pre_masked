
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct lmac {int link_up; int last_speed; int last_duplex; int last_link; int check_link; TYPE_1__* bgx; int lmacid; } ;
struct TYPE_4__ {scalar_t__ lmac_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct lmac*) ;
 int FUNC_4 (int *,int,void (*) (void*),struct lmac*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct lmac *VAR_5;
 uint64_t VAR_6;

 VAR_5 = (struct lmac *)VAR_4;


 FUNC_1(VAR_5->bgx, VAR_5->lmacid,
         VAR_1, VAR_2);
 FUNC_0(VAR_5->bgx, VAR_5->lmacid, VAR_1,
       VAR_2, 0);

 VAR_6 = FUNC_2(VAR_5->bgx, VAR_5->lmacid, VAR_1);
 if (VAR_6 & VAR_2) {
  VAR_5->link_up = 1;
  if (VAR_5->bgx->lmac_type == VAR_0)
   VAR_5->last_speed = 40000;
  else
   VAR_5->last_speed = 10000;
  VAR_5->last_duplex = 1;
 } else {
  VAR_5->link_up = 0;
 }

 if (VAR_5->last_link != VAR_5->link_up) {
  VAR_5->last_link = VAR_5->link_up;
  if (VAR_5->link_up)
   FUNC_3(VAR_5);
 }

 FUNC_4(&VAR_5->check_link, VAR_3 * 2, FUNC_5, VAR_5);
}
