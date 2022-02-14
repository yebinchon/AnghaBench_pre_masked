
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct echoaudio {int sample_rate; scalar_t__ input_clock; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_3, u16 VAR_4)
{
 FUNC_0(("set_input_clock(%d)\n", VAR_4));
 if (FUNC_2(VAR_4 != VAR_0 &&
         VAR_4 != VAR_1))
  return -VAR_2;

 VAR_3->input_clock = VAR_4;
 return FUNC_1(VAR_3, VAR_3->sample_rate);
}
