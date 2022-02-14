
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct src {int rsc; } ;
struct hw {int (* select_adc_source ) (struct hw*,int ) ;scalar_t__ (* is_adc_source_selected ) (struct hw*,int ) ;} ;
struct ct_mixer {int (* set_input_right ) (struct ct_mixer*,int ,int *) ;int (* set_input_left ) (struct ct_mixer*,int ,int *) ;} ;
struct ct_atc {struct src** srcs; struct ct_mixer* mixer; struct hw* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct ct_mixer*,int ,int *) ;
 int FUNC_2 (struct ct_mixer*,int ,int *) ;
 int FUNC_3 (struct hw*,int ) ;
 int FUNC_4 (struct ct_mixer*,int ,int *) ;
 int FUNC_5 (struct ct_mixer*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ct_atc *VAR_3)
{
 struct hw *VAR_4 = VAR_3->hw;
 struct ct_mixer *VAR_5 = VAR_3->mixer;
 struct src *VAR_6;

 if (VAR_4->is_adc_source_selected(VAR_4, VAR_0))
  return 0;

 VAR_5->set_input_left(VAR_5, VAR_1, ((void*)0));
 VAR_5->set_input_right(VAR_5, VAR_1, ((void*)0));

 VAR_4->select_adc_source(VAR_4, VAR_0);

 VAR_6 = VAR_3->srcs[2];
 VAR_5->set_input_left(VAR_5, VAR_2, &VAR_6->rsc);
 VAR_6 = VAR_3->srcs[3];
 VAR_5->set_input_right(VAR_5, VAR_2, &VAR_6->rsc);

 return 0;
}
