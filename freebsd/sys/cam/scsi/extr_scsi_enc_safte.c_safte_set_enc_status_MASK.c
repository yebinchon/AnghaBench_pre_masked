
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct scfg {int requests; } ;
struct TYPE_7__ {int* elm_stat; int result; int elm_idx; } ;
typedef TYPE_1__ safte_control_request_t ;
struct TYPE_8__ {int periph; struct scfg* enc_private; } ;
typedef TYPE_2__ enc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(enc_softc_t *VAR_5, uint8_t VAR_6, int VAR_7)
{
 struct scfg *VAR_8;
 safte_control_request_t VAR_9;

 VAR_8 = VAR_5->enc_private;
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_9.elm_idx = VAR_3;
 VAR_9.elm_stat[0] = VAR_6 & 0xf;
 VAR_9.result = 0;

 FUNC_0(&VAR_8->requests, &VAR_9, VAR_4);
 FUNC_2(VAR_5, VAR_2);
 FUNC_1(VAR_5->periph, &VAR_9, VAR_1, "encstat", 0);

 return (VAR_9.result);
}
