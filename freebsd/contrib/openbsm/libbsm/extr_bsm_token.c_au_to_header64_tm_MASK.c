
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef int token_t ;
struct timeval {int tv_usec; int tv_sec; } ;
typedef int au_event_t ;
typedef int au_emod_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int) ;

token_t *
FUNC_5(int VAR_2, au_event_t VAR_3, au_emod_t VAR_4,
    struct timeval VAR_5)
{
 token_t *VAR_6;
 u_char *VAR_7 = ((void*)0);
 u_int32_t VAR_8;

 FUNC_4(VAR_6, VAR_7, sizeof(u_char) + sizeof(u_int32_t) +
     sizeof(u_char) + 2 * sizeof(u_int16_t) + 2 * sizeof(u_int64_t));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_7, VAR_1);
 FUNC_2(VAR_7, VAR_2);
 FUNC_0(VAR_7, VAR_0);
 FUNC_1(VAR_7, VAR_3);
 FUNC_1(VAR_7, VAR_4);

 VAR_8 = VAR_5.tv_usec/1000;

 FUNC_3(VAR_7, VAR_5.tv_sec);
 FUNC_3(VAR_7, VAR_8);

 return (VAR_6);
}
