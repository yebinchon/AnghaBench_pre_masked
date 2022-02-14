
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct oce_bmbx {int dummy; } ;
struct TYPE_16__ {int size_of_struct; } ;
struct TYPE_15__ {int flags; int dev; int bsmbx; scalar_t__ be3_native; TYPE_4__ macaddr; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int,int ,TYPE_4__*) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(POCE_SOFTC VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_4(VAR_2, sizeof(struct oce_bmbx), &VAR_2->bsmbx, 0);
 if (VAR_3) {
  FUNC_2(VAR_2->dev, "Mailbox alloc failed\n");
  return VAR_3;
 }

 VAR_3 = FUNC_11(VAR_2);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  goto error;


 VAR_2->macaddr.size_of_struct = 6;
 VAR_3 = FUNC_10(VAR_2, 0, 1, VAR_0,
     &VAR_2->macaddr);
 if (VAR_3)
  goto error;

 if ((FUNC_0(VAR_2) && (VAR_2->flags & VAR_1)) || FUNC_1(VAR_2)) {
  VAR_3 = FUNC_8(VAR_2);
  if (VAR_3)
   goto error;
 } else
  VAR_2->be3_native = 0;

 return VAR_3;

error:
 FUNC_5(VAR_2, &VAR_2->bsmbx);
 FUNC_2(VAR_2->dev, "Hardware initialisation failed\n");
 return VAR_3;
}
