
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; scalar_t__* c_cc; } ;
struct pollfd {int events; int fd; } ;
struct perf_top {int delay_secs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_top*,int) ;
 int FUNC_2 (struct perf_top*) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 () ;
 int VAR_9 ;
 int FUNC_5 (int ,struct termios*) ;
 int FUNC_6 (int ,int ,struct termios*) ;

__attribute__((used)) static void *FUNC_7(void *VAR_10)
{
 struct pollfd VAR_11 = { .fd = 0, .events = VAR_3 };
 struct termios VAR_12, VAR_13;
 struct perf_top *VAR_14 = VAR_10;
 int VAR_15, VAR_16;

 FUNC_5(0, &VAR_13);
 VAR_12 = VAR_13;
 VAR_12.c_lflag &= ~(VAR_2 | VAR_0);
 VAR_12.c_cc[VAR_6] = 0;
 VAR_12.c_cc[VAR_7] = 0;

 FUNC_4();
repeat:
 VAR_15 = VAR_14->delay_secs * 1000;
 FUNC_6(0, VAR_5, &VAR_12);

 FUNC_0(VAR_9);

 while (1) {
  FUNC_2(VAR_14);




  switch (FUNC_3(&VAR_11, 1, VAR_15)) {
  case 0:
   continue;
  case -1:
   if (VAR_8 == VAR_1)
    continue;

  default:
   goto process_hotkey;
  }
 }
process_hotkey:
 VAR_16 = FUNC_0(VAR_9);
 FUNC_6(0, VAR_4, &VAR_13);

 FUNC_1(VAR_14, VAR_16);
 goto repeat;

 return ((void*)0);
}
