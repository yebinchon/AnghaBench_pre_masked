
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct padlock_session {int * ses_octx; int * ses_ictx; TYPE_1__* ses_axf; int ses_mlen; } ;
struct cryptoini {int cri_alg; int cri_klen; int * cri_key; int cri_mlen; } ;
struct TYPE_10__ {int ctxsize; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 void* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct padlock_session*,int *,int ) ;
 TYPE_1__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;

int
FUNC_2(struct padlock_session *VAR_15, struct cryptoini *VAR_16)
{

 VAR_15->ses_mlen = VAR_16->cri_mlen;


 switch (VAR_16->cri_alg) {
 case 133:
  VAR_15->ses_axf = &VAR_11;
  break;
 case 134:
  VAR_15->ses_axf = &VAR_5;
  break;
 case 131:
  if ((VAR_14 & VAR_4) != 0)
   VAR_15->ses_axf = &VAR_12;
  else
   VAR_15->ses_axf = &VAR_7;
  break;
 case 132:
  VAR_15->ses_axf = &VAR_6;
  break;
 case 130:
  if ((VAR_14 & VAR_4) != 0)
   VAR_15->ses_axf = &VAR_13;
  else
   VAR_15->ses_axf = &VAR_8;
  break;
 case 129:
  VAR_15->ses_axf = &VAR_9;
  break;
 case 128:
  VAR_15->ses_axf = &VAR_10;
  break;
 }


 VAR_15->ses_ictx = FUNC_0(VAR_15->ses_axf->ctxsize, VAR_2,
     VAR_3 | VAR_1);
 VAR_15->ses_octx = FUNC_0(VAR_15->ses_axf->ctxsize, VAR_2,
     VAR_3 | VAR_1);
 if (VAR_15->ses_ictx == ((void*)0) || VAR_15->ses_octx == ((void*)0))
  return (VAR_0);


 if (VAR_16->cri_key != ((void*)0)) {
  FUNC_1(VAR_15, VAR_16->cri_key,
      VAR_16->cri_klen);
 }
 return (0);
}
