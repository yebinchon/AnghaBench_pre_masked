
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (struct sockaddr*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

int
FUNC_4(struct sockaddr *VAR_4, struct sockaddr *VAR_5,
    struct sockaddr *VAR_6, u_int8_t VAR_7)
{
 if (VAR_4->sa_family == VAR_0)
  return (FUNC_2(FUNC_0(VAR_4), FUNC_0(VAR_5),
      FUNC_0(VAR_6), VAR_7));

 if (VAR_4->sa_family == VAR_1)
  return (FUNC_3(FUNC_1(VAR_4), FUNC_1(VAR_5),
      FUNC_1(VAR_6), VAR_7));

 VAR_3 = VAR_2;
 return (-1);
}
