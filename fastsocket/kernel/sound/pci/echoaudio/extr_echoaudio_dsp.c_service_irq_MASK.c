
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {TYPE_1__* comm_page; } ;
struct TYPE_2__ {scalar_t__* midi_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct echoaudio*,int ) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_3)
{
 int VAR_4;


 if (FUNC_0(VAR_3, VAR_1) & VAR_0) {
  VAR_4 = 0;






  VAR_3->comm_page->midi_input[0] = 0;
  FUNC_2(VAR_3, VAR_2);
  return VAR_4;
 }
 return -1;
}
