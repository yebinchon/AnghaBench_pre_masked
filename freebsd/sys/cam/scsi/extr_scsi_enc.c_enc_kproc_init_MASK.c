
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int (* poll_status ) (TYPE_2__*) ;} ;
struct TYPE_12__ {TYPE_6__* periph; TYPE_1__ enc_vec; int enc_daemon; int status_updater; } ;
typedef TYPE_2__ enc_softc_t ;
struct TYPE_13__ {int unit_number; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,TYPE_2__*,int *,int ,int ,char*,int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(enc_softc_t *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->status_updater, FUNC_3(VAR_2->periph), 0);

 if (FUNC_1(VAR_2->periph) != 0)
  return (VAR_0);

 VAR_3 = FUNC_6(VAR_1, VAR_2, &VAR_2->enc_daemon, 0,
                     0, "enc_daemon%d",
         VAR_2->periph->unit_number);
 if (VAR_3 == 0) {

  FUNC_2(VAR_2->periph);
  VAR_2->enc_vec.poll_status(VAR_2);
  FUNC_5(VAR_2->periph);
 } else
  FUNC_4(VAR_2->periph);
 return (VAR_3);
}
