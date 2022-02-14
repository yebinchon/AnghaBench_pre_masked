
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {char professional_spdif; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int control_register; } ;


 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int ,int ) ;
 int FUNC_3 (struct echoaudio*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_0, char VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0->comm_page->control_register);
 VAR_0->professional_spdif = VAR_1;
 VAR_2 = FUNC_2(VAR_0, VAR_2, VAR_0->sample_rate);
 return FUNC_3(VAR_0, VAR_2, FUNC_0(VAR_0), 0);
}
