
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int digital_in_automute; int input_clock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_0, int VAR_1)
{
 FUNC_0(("set_input_auto_mute %d\n", VAR_1));

 VAR_0->digital_in_automute = VAR_1;



 return FUNC_1(VAR_0, VAR_0->input_clock);
}
