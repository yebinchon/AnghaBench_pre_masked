
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_atc {int card; int mixer; int (* select_mic_in ) (struct ct_atc*) ;int (* select_line_in ) (struct ct_atc*) ;} ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct ct_atc*) ;
 int FUNC_3 (struct ct_atc*) ;

__attribute__((used)) static void
FUNC_4(struct ct_atc *VAR_4, enum CTALSA_MIXER_CTL VAR_5)
{

 if (VAR_0 == VAR_5) {
  VAR_4->select_line_in(VAR_4);
  FUNC_0(VAR_4->mixer, VAR_1, 0);
  FUNC_1(VAR_4->card, VAR_2,
       &VAR_3[1]->id);
 } else if (VAR_1 == VAR_5) {
  VAR_4->select_mic_in(VAR_4);
  FUNC_0(VAR_4->mixer, VAR_0, 0);
  FUNC_1(VAR_4->card, VAR_2,
       &VAR_3[0]->id);
 }
}
