
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_mixer {int dummy; } ;
struct ct_atc {int (* spdif_in_unmute ) (struct ct_atc*,int) ;int (* spdif_out_unmute ) (struct ct_atc*,int) ;int (* line_in_unmute ) (struct ct_atc*,int) ;int (* line_rear_unmute ) (struct ct_atc*,int) ;int (* line_clfe_unmute ) (struct ct_atc*,int) ;int (* line_surround_unmute ) (struct ct_atc*,int) ;int (* line_front_unmute ) (struct ct_atc*,int) ;struct ct_mixer* mixer; } ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ct_mixer*,int ) ;
 int FUNC_1 (struct ct_mixer*,int ) ;
 int FUNC_2 (struct ct_atc*,int) ;
 int FUNC_3 (struct ct_atc*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ct_atc*,int) ;
 int FUNC_6 (struct ct_atc*,int) ;
 int FUNC_7 (struct ct_atc*,int) ;
 int FUNC_8 (struct ct_atc*,int) ;
 int FUNC_9 (struct ct_atc*,int) ;
 int FUNC_10 (struct ct_atc*,int) ;
 int FUNC_11 (struct ct_atc*,int) ;

__attribute__((used)) static void FUNC_12(struct ct_atc *VAR_12, enum CTALSA_MIXER_CTL VAR_13, int VAR_14)
{
 struct ct_mixer *VAR_15 = VAR_12->mixer;


 if ((VAR_11 <= VAR_13) && (VAR_10 >= VAR_13)) {
  if (VAR_14) {
   FUNC_0(VAR_15,
        FUNC_4(VAR_13));
  } else {
   FUNC_1(VAR_15,
          FUNC_4(VAR_13));
  }
 }

 if (VAR_14 && (VAR_1 == VAR_13 || VAR_3 == VAR_13))
  FUNC_3(VAR_12, VAR_13);
 else if (VAR_7 == VAR_13)
  VAR_12->line_front_unmute(VAR_12, VAR_14);
 else if (VAR_9 == VAR_13)
  VAR_12->line_surround_unmute(VAR_12, VAR_14);
 else if (VAR_6 == VAR_13)
  VAR_12->line_clfe_unmute(VAR_12, VAR_14);
 else if (VAR_8 == VAR_13)
  VAR_12->line_rear_unmute(VAR_12, VAR_14);
 else if (VAR_2 == VAR_13)
  VAR_12->line_in_unmute(VAR_12, VAR_14);
 else if (VAR_5 == VAR_13)
  VAR_12->spdif_out_unmute(VAR_12, VAR_14);
 else if (VAR_4 == VAR_13)
  VAR_12->spdif_in_unmute(VAR_12, VAR_14);
 else if (VAR_0 == VAR_13)
  FUNC_2(VAR_12, VAR_14);

 return;
}
