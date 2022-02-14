
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {int dummy; } ;
struct service {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 struct service_connection* FUNC_1 (struct service*,int,int ) ;
 int FUNC_2 (struct service_connection*) ;
 scalar_t__ FUNC_3 (int ,int,int ,int*) ;

int
FUNC_4(struct service *VAR_4,
    struct service_connection *VAR_5)
{
 struct service_connection *VAR_6;
 int VAR_7, VAR_8[2];

 if (FUNC_3(VAR_0, VAR_2 | VAR_1, 0, VAR_8) < 0)
  return (-1);

 VAR_6 = FUNC_1(VAR_4, VAR_8[0],
     FUNC_2(VAR_5));
 if (VAR_6 == ((void*)0)) {
  VAR_7 = VAR_3;
  FUNC_0(VAR_8[0]);
  FUNC_0(VAR_8[1]);
  VAR_3 = VAR_7;
  return (-1);
 }

 return (VAR_8[1]);
}
