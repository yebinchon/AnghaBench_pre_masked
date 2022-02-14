
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct echoaudio {int* input_gain; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int* line_in_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (struct echoaudio*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_3, u16 VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_4 >= FUNC_0(VAR_3)))
  return -VAR_0;

 if (FUNC_2(VAR_3))
  return -VAR_1;

 VAR_3->input_gain[VAR_4] = VAR_5;
 VAR_5 += VAR_2;
 VAR_3->comm_page->line_in_level[VAR_4] = VAR_5;
 return 0;
}
