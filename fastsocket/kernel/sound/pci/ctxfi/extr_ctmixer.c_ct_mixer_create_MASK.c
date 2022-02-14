
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_mixer {int resume; int set_input_right; int set_input_left; int get_output_ports; struct ct_atc* atc; scalar_t__ switch_state; } ;
struct ct_atc {int dummy; } ;


 int FUNC_0 (struct ct_mixer*) ;
 int FUNC_1 (struct ct_mixer**) ;
 int FUNC_2 (struct ct_mixer*) ;
 int FUNC_3 (struct ct_mixer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct ct_atc *VAR_4, struct ct_mixer **VAR_5)
{
 struct ct_mixer *VAR_6;
 int VAR_7;

 *VAR_5 = ((void*)0);


 VAR_7 = FUNC_1(&VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6->switch_state = 0;
 VAR_6->atc = VAR_4;

 VAR_6->get_output_ports = VAR_0;
 VAR_6->set_input_left = VAR_2;
 VAR_6->set_input_right = VAR_3;





 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7)
  goto error;


 FUNC_3(VAR_6);

 *VAR_5 = VAR_6;

 return 0;

error:
 FUNC_0(VAR_6);
 return VAR_7;
}
