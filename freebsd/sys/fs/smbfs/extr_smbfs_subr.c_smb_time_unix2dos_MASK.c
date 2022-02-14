
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int8_t ;
typedef int u_int16_t ;
struct timespec {int tv_sec; } ;


 int FUNC_0 (struct timespec*,int,int *) ;
 int FUNC_1 (struct timespec*,int,int *,int *,int *) ;

void
FUNC_2(struct timespec *VAR_0, int VAR_1, u_int16_t *VAR_2,
 u_int16_t *VAR_3, u_int8_t *VAR_4)
{
 struct timespec VAR_5;
 u_long VAR_6;

 VAR_5 = *VAR_0;
 FUNC_0(VAR_0, VAR_1, &VAR_6);
 VAR_5.tv_sec = VAR_6;
 FUNC_1(&VAR_5, 1, VAR_2, VAR_3, VAR_4);
}
