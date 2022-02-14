
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct echoaudio {TYPE_1__* comm_page; void*** monitor_gain; } ;
typedef void* s8 ;
struct TYPE_2__ {void** monitors; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct echoaudio*,size_t,size_t) ;
 size_t FUNC_1 (struct echoaudio*) ;
 size_t FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_2, u16 VAR_3, u16 VAR_4,
       s8 VAR_5)
{
 if (FUNC_3(VAR_3 >= FUNC_2(VAR_2) ||
      VAR_4 >= FUNC_1(VAR_2)))
  return -VAR_0;

 if (FUNC_4(VAR_2))
  return -VAR_1;

 VAR_2->monitor_gain[VAR_3][VAR_4] = VAR_5;
 VAR_2->comm_page->monitors[FUNC_0(VAR_2, VAR_3, VAR_4)] = VAR_5;
 return 0;
}
