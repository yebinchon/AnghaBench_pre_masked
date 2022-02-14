
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
typedef int time_t ;
struct tm {int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {int lt_dow; scalar_t__ lt_start; scalar_t__ lt_end; } ;
typedef TYPE_1__ login_time_t ;


 int FUNC_0 (struct tm*) ;

int
FUNC_1(const login_time_t *VAR_0, struct tm *VAR_1, time_t *VAR_2)
{
    int VAR_3 = 0;

    if (VAR_1 != ((void*)0)) {

 if ((u_char)(0x01 << VAR_1->tm_wday) & VAR_0->lt_dow) {

     u_short VAR_4 = (u_short)((VAR_1->tm_hour * 60) + VAR_1->tm_min);

     if (VAR_1->tm_sec > 30)
  ++VAR_4;
     if (VAR_4 >= VAR_0->lt_start && VAR_4 < VAR_0->lt_end) {
  VAR_3 = 2;
  if (VAR_2 != ((void*)0)) {

      VAR_1->tm_hour = (int)(VAR_0->lt_end / 60);
      VAR_1->tm_min = (int)(VAR_0->lt_end % 60);
      *VAR_2 = FUNC_0(VAR_1);
  }
     }
 }
    }
    return (VAR_3);
}
