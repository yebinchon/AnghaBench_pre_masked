
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_4__ {size_t cur_sample; int cur_seq; TYPE_2__* samples; } ;
struct TYPE_6__ {TYPE_1__ ah_chansurvey; } ;
struct TYPE_5__ {int seq_num; } ;
typedef int HAL_SURVEY_SAMPLE ;
typedef TYPE_1__ HAL_CHANNEL_SURVEY ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;

void
FUNC_2(struct ath_hal *VAR_1, HAL_SURVEY_SAMPLE *VAR_2)
{
 HAL_CHANNEL_SURVEY *VAR_3;

 VAR_3 = &FUNC_0(VAR_1)->ah_chansurvey;

 FUNC_1(&VAR_3->samples[VAR_3->cur_sample], VAR_2, sizeof(*VAR_2));
 VAR_3->samples[VAR_3->cur_sample].seq_num = VAR_3->cur_seq;
 VAR_3->cur_sample = (VAR_3->cur_sample + 1) % VAR_0;
 VAR_3->cur_seq++;
}
