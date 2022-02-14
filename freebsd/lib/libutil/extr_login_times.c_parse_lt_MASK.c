
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lt_start; int lt_end; int lt_dow; } ;
typedef TYPE_1__ login_time_t ;
struct TYPE_6__ {int cn; int fl; int * dw; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 char* FUNC_3 (char*,int*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ FUNC_6 (char*,int *,int ) ;
 scalar_t__ FUNC_7 (char) ;

login_time_t
FUNC_8(const char *VAR_3)
{
    login_time_t VAR_4;

    FUNC_2(&VAR_4, 0, sizeof VAR_4);
    VAR_4.lt_dow = VAR_1;
    if (VAR_3 && *VAR_3 && FUNC_4(VAR_3, "Never") != 0 && FUNC_4(VAR_3, "None") != 0) {
 int VAR_5;
 login_time_t VAR_6 = VAR_4;
 char *VAR_7;
 char VAR_8[64];


 FUNC_5(VAR_8, VAR_3, sizeof VAR_8);
 for (VAR_5 = 0; VAR_8[VAR_5]; VAR_5++)
     VAR_8[VAR_5] = (char)FUNC_7(VAR_8[VAR_5]);
 VAR_7 = VAR_8;

 while (FUNC_0(*VAR_7)) {

     VAR_5 = 0;
     while (VAR_2[VAR_5].dw && FUNC_6(VAR_7, VAR_2[VAR_5].dw, VAR_2[VAR_5].cn) != 0)
  VAR_5++;
     if (VAR_2[VAR_5].dw == ((void*)0))
  break;
     VAR_6.lt_dow |= VAR_2[VAR_5].fl;
     VAR_7 += VAR_2[VAR_5].cn;
 }

 if (VAR_6.lt_dow == VAR_1)
     VAR_6.lt_dow |= VAR_0;

 if (FUNC_1(*VAR_7))
     VAR_7 = FUNC_3(VAR_7, &VAR_6.lt_start);
 else
     VAR_6.lt_start = 0;
 if (*VAR_7 == '-')
     VAR_7 = FUNC_3(VAR_7 + 1, &VAR_6.lt_end);
 else
     VAR_6.lt_end = 1440;

 VAR_4 = VAR_6;
    }
    return (VAR_4);
}
