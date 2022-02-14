
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;
typedef int u_char ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef TYPE_1__* res_state ;
struct TYPE_3__ {int * _rnd; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int * VAR_0 ;

void
FUNC_3(res_state VAR_1)
{
 struct timeval VAR_2;
 u_int32_t VAR_3;
 u_int16_t VAR_4;
 u_char *VAR_5 = VAR_1->_rnd == ((void*)0) ? VAR_0 : VAR_1->_rnd;

 FUNC_1(&VAR_2, ((void*)0));
 VAR_3 = VAR_2.tv_sec;
 FUNC_2(VAR_5, &VAR_3, 4);
 VAR_3 = VAR_2.tv_usec;
 FUNC_2(VAR_5 + 4, &VAR_3, 4);
 VAR_3 += VAR_2.tv_sec;
 FUNC_2(VAR_5 + 8, &VAR_3, 4);
 VAR_4 = FUNC_0();
 FUNC_2(VAR_5 + 12, &VAR_4, 2);
}
