
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct iicbus_ivar {int rl; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct iicbus_ivar*) ;
 struct iicbus_ivar* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 device_t VAR_7;
 struct iicbus_ivar *VAR_8;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_7);
 VAR_8 = FUNC_3(sizeof(struct iicbus_ivar), VAR_0, VAR_1 | VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_3, VAR_7);
  return (0);
 }
 FUNC_4(&VAR_8->rl);
 FUNC_2(VAR_7, VAR_8);
 return (VAR_7);
}
