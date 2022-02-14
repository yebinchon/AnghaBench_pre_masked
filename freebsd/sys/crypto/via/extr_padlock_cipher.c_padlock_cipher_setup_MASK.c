
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union padlock_cw {int cw_key_size; int cw_round_count; int cw_key_generation; scalar_t__ cw_intermediate; int cw_algorithm_type; } ;
struct padlock_session {int ses_iv; union padlock_cw ses_cw; } ;
struct cryptoini {int cri_klen; int * cri_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (union padlock_cw*,int) ;
 int FUNC_2 (struct padlock_session*,int *,int) ;

int
FUNC_3(struct padlock_session *VAR_10, struct cryptoini *VAR_11)
{
 union padlock_cw *VAR_12;

 if (VAR_11->cri_klen != 128 && VAR_11->cri_klen != 192 &&
     VAR_11->cri_klen != 256) {
  return (VAR_0);
 }

 VAR_12 = &VAR_10->ses_cw;
 FUNC_1(VAR_12, sizeof(*VAR_12));
 VAR_12->cw_algorithm_type = VAR_1;
 VAR_12->cw_key_generation = VAR_3;
 VAR_12->cw_intermediate = 0;
 switch (VAR_11->cri_klen) {
 case 128:
  VAR_12->cw_round_count = VAR_7;
  VAR_12->cw_key_size = VAR_4;




  break;
 case 192:
  VAR_12->cw_round_count = VAR_8;
  VAR_12->cw_key_size = VAR_5;
  break;
 case 256:
  VAR_12->cw_round_count = VAR_9;
  VAR_12->cw_key_size = VAR_6;
  break;
 }
 if (VAR_11->cri_key != ((void*)0)) {
  FUNC_2(VAR_10, VAR_11->cri_key,
      VAR_11->cri_klen);
 }

 FUNC_0(VAR_10->ses_iv, sizeof(VAR_10->ses_iv), 0);
 return (0);
}
