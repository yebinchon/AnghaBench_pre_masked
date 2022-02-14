
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct echoaudio {scalar_t__* midi_buffer; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int * midi_input; } ;


 short VAR_0 ;
 scalar_t__ VAR_1 ;
 short FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct echoaudio*,short) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_2)
{
 short int VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_3 = FUNC_0(VAR_2->comm_page->midi_input[0]);

 if (FUNC_2(VAR_3 >= VAR_0))
  return 0;


 VAR_5 = 1;
 VAR_6 = 0;
 for (VAR_5 = 1; VAR_5 <= VAR_3; VAR_5++) {

  VAR_4 = FUNC_0(VAR_2->comm_page->midi_input[VAR_5]);







  if (FUNC_1(VAR_2, VAR_4) == VAR_1)
   continue;

  VAR_2->midi_buffer[VAR_6++] = (u8)VAR_4;
 }

 return VAR_6;
}
