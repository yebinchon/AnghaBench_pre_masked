
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
struct ssh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssh*,scalar_t__*,int *) ;
 int FUNC_1 (struct ssh*,char*,scalar_t__,scalar_t__) ;

int
FUNC_2(struct ssh *VAR_1, u_int VAR_2)
{
 int VAR_3;
 u_char VAR_4;

 if ((VAR_3 = FUNC_0(VAR_1, &VAR_4, ((void*)0))) != 0)
  return VAR_3;
 if (VAR_4 != VAR_2) {
  if ((VAR_3 = FUNC_1(VAR_1,
      "Protocol error: expected packet type %d, got %d",
      VAR_2, VAR_4)) != 0)
   return VAR_3;
  return VAR_0;
 }
 return 0;
}
