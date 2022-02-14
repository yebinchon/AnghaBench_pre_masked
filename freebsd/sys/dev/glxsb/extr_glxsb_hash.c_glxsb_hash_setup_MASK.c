
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct glxsb_session {int * ses_octx; int * ses_ictx; TYPE_1__* ses_axf; int ses_mlen; } ;
struct cryptoini {int cri_alg; int cri_klen; int * cri_key; int cri_mlen; } ;
struct TYPE_8__ {int ctxsize; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_0 (struct glxsb_session*,int *,int ) ;
 void* FUNC_1 (int ,int ,int) ;

int
FUNC_2(struct glxsb_session *VAR_11, struct cryptoini *VAR_12)
{

 VAR_11->ses_mlen = VAR_12->cri_mlen;


 switch (VAR_12->cri_alg) {
 case 133:
  VAR_11->ses_axf = &VAR_10;
  break;
 case 134:
  VAR_11->ses_axf = &VAR_4;
  break;
 case 131:
  VAR_11->ses_axf = &VAR_6;
  break;
 case 132:
  VAR_11->ses_axf = &VAR_5;
  break;
 case 130:
  VAR_11->ses_axf = &VAR_7;
  break;
 case 129:
  VAR_11->ses_axf = &VAR_8;
  break;
 case 128:
  VAR_11->ses_axf = &VAR_9;
  break;
 }


 VAR_11->ses_ictx = FUNC_1(VAR_11->ses_axf->ctxsize, VAR_1,
     VAR_3 | VAR_2);
 VAR_11->ses_octx = FUNC_1(VAR_11->ses_axf->ctxsize, VAR_1,
     VAR_3 | VAR_2);
 if (VAR_11->ses_ictx == ((void*)0) || VAR_11->ses_octx == ((void*)0))
  return (VAR_0);


 if (VAR_12->cri_key != ((void*)0)) {
  FUNC_0(VAR_11, VAR_12->cri_key,
      VAR_12->cri_klen);
 }
 return (0);
}
