
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int direction; } ;
struct TYPE_5__ {TYPE_1__ rule; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ,int ,struct sockaddr*,struct sockaddr*,int ) ;

int
FUNC_2(u_int32_t VAR_6, u_int8_t VAR_7, struct sockaddr *VAR_8,
    struct sockaddr *VAR_9, u_int16_t VAR_10)
{
 if (!VAR_8 || !VAR_9 || !VAR_10) {
  VAR_4 = VAR_1;
  return (-1);
 }

 if (FUNC_1(VAR_6, VAR_2, VAR_8, VAR_9, VAR_10) == -1)
  return (-1);

 VAR_5.rule.direction = VAR_7;
 if (FUNC_0(VAR_3, VAR_0, &VAR_5) == -1)
  return (-1);

 return (0);
}
