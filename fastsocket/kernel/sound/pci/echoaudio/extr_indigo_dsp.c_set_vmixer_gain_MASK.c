
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct echoaudio {int** vmixer_gain; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int* vmixer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct echoaudio*) ;
 size_t FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_2, u16 VAR_3, u16 VAR_4,
      int VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_4 >= FUNC_2(VAR_2) ||
         VAR_3 >= FUNC_1(VAR_2)))
  return -VAR_0;

 if (FUNC_4(VAR_2))
  return -VAR_1;

 VAR_2->vmixer_gain[VAR_3][VAR_4] = VAR_5;
 VAR_6 = VAR_3 * FUNC_2(VAR_2) + VAR_4;
 VAR_2->comm_page->vmixer[VAR_6] = VAR_5;

 FUNC_0(("set_vmixer_gain: pipe %d, out %d = %d\n", VAR_4, VAR_3, VAR_5));
 return 0;
}
