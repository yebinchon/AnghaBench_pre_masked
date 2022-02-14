
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_int ;
struct ps_prochandle {int dummy; } ;
typedef int psaddr_t ;
typedef scalar_t__ ps_err_e ;
typedef int buf ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ps_prochandle*,int ,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct ps_prochandle *VAR_4, psaddr_t VAR_5, uint64_t *VAR_6,
    u_int VAR_7, u_int VAR_8)
{
 uint8_t VAR_9[sizeof(*VAR_6)];
 ps_err_e VAR_10;

 if (VAR_7 > sizeof(VAR_9))
  return (VAR_2);

 VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_9, VAR_7);
 if (VAR_10 != VAR_3)
  return (VAR_0);

 switch (VAR_8) {
 case 129:
  switch (VAR_7) {
  case 1:
   *VAR_6 = VAR_9[0];
   break;
  case 2:
   *VAR_6 = FUNC_0(VAR_9);
   break;
  case 4:
   *VAR_6 = FUNC_1(VAR_9);
   break;
  case 8:
   *VAR_6 = FUNC_2(VAR_9);
   break;
  default:
   return (VAR_1);
  }
  break;
 case 128:
  switch (VAR_7) {
  case 1:
   *VAR_6 = VAR_9[0];
   break;
  case 2:
   *VAR_6 = FUNC_3(VAR_9);
   break;
  case 4:
   *VAR_6 = FUNC_4(VAR_9);
   break;
  case 8:
   *VAR_6 = FUNC_5(VAR_9);
   break;
  default:
   return (VAR_1);
  }
  break;
 default:
  return (VAR_1);
 }

 return (0);
}
