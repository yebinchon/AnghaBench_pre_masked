
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef TYPE_1__* res_state ;
struct TYPE_3__ {scalar_t__* _rnd; } ;
typedef int MD5_CTX ;


 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int FUNC_6 (struct timeval*,int *) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* VAR_0 ;

u_int
FUNC_8(res_state VAR_1) {
 struct timeval VAR_2;
 u_int16_t VAR_3;
 MD5_CTX VAR_4;
 u_char *VAR_5 = VAR_1->_rnd == ((void*)0) ? VAR_0 : VAR_1->_rnd;

 FUNC_6(&VAR_2, ((void*)0));
 VAR_3 = (u_int16_t) (VAR_2.tv_sec ^ VAR_2.tv_usec);
 FUNC_7(VAR_5 + 14, &VAR_3, 2);

 FUNC_4(&VAR_4);
 FUNC_5(&VAR_4, VAR_5, 16);
 FUNC_3(VAR_5, &VAR_4);





 FUNC_7(&VAR_3, VAR_5 + 14, 2);
 return ((u_int) VAR_3);
}
