
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ct_mixer {struct ct_atc* atc; } ;
struct ct_atc {int (* spdif_in_unmute ) (struct ct_atc*,int ) ;int (* line_in_unmute ) (struct ct_atc*,int ) ;int (* spdif_out_unmute ) (struct ct_atc*,int ) ;int (* line_rear_unmute ) (struct ct_atc*,int ) ;int (* line_clfe_unmute ) (struct ct_atc*,int ) ;int (* line_surround_unmute ) (struct ct_atc*,int ) ;int (* line_front_unmute ) (struct ct_atc*,int) ;scalar_t__ (* have_digit_io_switch ) (struct ct_atc*) ;} ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;
struct TYPE_9__ {int name; scalar_t__ ctl; } ;
struct TYPE_8__ {unsigned long private_value; int name; } ;


 size_t VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_7__* VAR_15 ;
 int FUNC_0 (struct ct_mixer*,TYPE_1__*) ;
 TYPE_1__ VAR_16 ;
 TYPE_1__ VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_1 (struct ct_mixer*,int ,int) ;
 scalar_t__ FUNC_2 (struct ct_atc*) ;
 int FUNC_3 (struct ct_atc*,int) ;
 int FUNC_4 (struct ct_atc*,int ) ;
 int FUNC_5 (struct ct_atc*,int ) ;
 int FUNC_6 (struct ct_atc*,int ) ;
 int FUNC_7 (struct ct_atc*,int ) ;
 int FUNC_8 (struct ct_atc*,int ) ;
 int FUNC_9 (struct ct_atc*,int ) ;
 TYPE_1__ VAR_19 ;
 TYPE_1__ VAR_20 ;

__attribute__((used)) static int FUNC_10(struct ct_mixer *VAR_21)
{
 enum CTALSA_MIXER_CTL VAR_22;
 struct ct_atc *VAR_23 = VAR_21->atc;
 int VAR_24;


 for (VAR_22 = VAR_14; VAR_22 <= VAR_13; VAR_22++) {
  if (VAR_15[VAR_22].ctl) {
   VAR_20.name = VAR_15[VAR_22].name;
   VAR_20.private_value = (unsigned long)VAR_22;
   VAR_24 = FUNC_0(VAR_21, &VAR_20);
   if (VAR_24)
    return VAR_24;
  }
 }

 VAR_15[VAR_0].ctl =
     VAR_23->have_digit_io_switch(VAR_23);
 for (VAR_22 = VAR_12; VAR_22 <= VAR_11; VAR_22++) {
  if (VAR_15[VAR_22].ctl) {
   VAR_19.name = VAR_15[VAR_22].name;
   VAR_19.private_value = (unsigned long)VAR_22;
   VAR_24 = FUNC_0(VAR_21, &VAR_19);
   if (VAR_24)
    return VAR_24;
  }
 }

 VAR_24 = FUNC_0(VAR_21, &VAR_18);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_0(VAR_21, &VAR_17);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_0(VAR_21, &VAR_16);
 if (VAR_24)
  return VAR_24;

 VAR_23->line_front_unmute(VAR_23, 1);
 FUNC_1(VAR_21, VAR_8, 1);
 VAR_23->line_surround_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_10, 0);
 VAR_23->line_clfe_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_7, 0);
 VAR_23->line_rear_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_9, 0);
 VAR_23->spdif_out_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_6, 0);
 VAR_23->line_in_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_2, 0);
 VAR_23->spdif_in_unmute(VAR_23, 0);
 FUNC_1(VAR_21, VAR_5, 0);

 FUNC_1(VAR_21, VAR_3, 1);
 FUNC_1(VAR_21, VAR_1, 1);
 FUNC_1(VAR_21, VAR_4, 1);

 return 0;
}
