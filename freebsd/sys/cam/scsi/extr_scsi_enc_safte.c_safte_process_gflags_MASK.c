
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef void* uint8_t ;
struct scfg {int flag1; int adm_status; void* flag2; } ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_3__ {struct scfg* enc_private; } ;
typedef TYPE_1__ enc_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(enc_softc_t *VAR_5, struct enc_fsm_state *VAR_6,
    union ccb *VAR_7, uint8_t **VAR_8, int VAR_9, int VAR_10)
{
 struct scfg *VAR_11;
 uint8_t *VAR_12 = *VAR_8;

 VAR_11 = VAR_5->enc_private;
 if (VAR_11 == ((void*)0))
  return (VAR_0);
 if (VAR_9 != 0)
  return (VAR_9);
 FUNC_0(3, VAR_10);
 VAR_11->flag1 = VAR_12[1];
 VAR_11->flag2 = VAR_12[2];

 VAR_11->adm_status = 0;
 if (VAR_11->flag1 & VAR_1)
  VAR_11->adm_status |= VAR_3;
 else if (VAR_11->flag1 & VAR_2)
  VAR_11->adm_status |= VAR_4;

 return (0);
}
