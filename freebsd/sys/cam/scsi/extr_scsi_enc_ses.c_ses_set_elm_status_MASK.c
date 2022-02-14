
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ses_requests; } ;
typedef TYPE_1__ ses_softc_t ;
struct TYPE_11__ {int result; int elm_stat; int elm_idx; } ;
typedef TYPE_2__ ses_control_request_t ;
struct TYPE_12__ {int* cstat; int elm_idx; } ;
typedef TYPE_3__ encioc_elm_status_t ;
struct TYPE_13__ {int periph; TYPE_1__* enc_private; } ;
typedef TYPE_4__ enc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int*,int) ;

__attribute__((used)) static int
FUNC_4(enc_softc_t *VAR_4, encioc_elm_status_t *VAR_5, int VAR_6)
{
 ses_control_request_t VAR_7;
 ses_softc_t *VAR_8;


 if ((VAR_5->cstat[0] & VAR_1) == 0)
  return (0);

 VAR_8 = VAR_4->enc_private;
 VAR_7.elm_idx = VAR_5->elm_idx;
 FUNC_3(&VAR_7.elm_stat, VAR_5->cstat, sizeof(VAR_7.elm_stat));

 FUNC_0(&VAR_8->ses_requests, &VAR_7, VAR_3);
 FUNC_2(VAR_4, VAR_2);
 FUNC_1(VAR_4->periph, &VAR_7, VAR_0, "encstat", 0);

 return (VAR_7.result);
}
