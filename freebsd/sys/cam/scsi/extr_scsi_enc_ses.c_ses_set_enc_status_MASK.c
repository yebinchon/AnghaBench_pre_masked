
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int ses_requests; } ;
typedef TYPE_2__ ses_softc_t ;
struct TYPE_9__ {int comstatus; } ;
struct TYPE_11__ {int result; TYPE_1__ elm_stat; int elm_idx; } ;
typedef TYPE_3__ ses_control_request_t ;
struct TYPE_12__ {int periph; TYPE_2__* enc_private; } ;
typedef TYPE_4__ enc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(enc_softc_t *VAR_4, uint8_t VAR_5, int VAR_6)
{
 ses_control_request_t VAR_7;
 ses_softc_t *VAR_8;

 VAR_8 = VAR_4->enc_private;
 VAR_7.elm_idx = VAR_2;
 VAR_7.elm_stat.comstatus = VAR_5 & 0xf;

 FUNC_0(&VAR_8->ses_requests, &VAR_7, VAR_3);
 FUNC_2(VAR_4, VAR_1);
 FUNC_1(VAR_4->periph, &VAR_7, VAR_0, "encstat", 0);

 return (VAR_7.result);
}
