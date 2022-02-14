
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong_t ;
typedef int uint_t ;
struct TYPE_3__ {int nvs_op; int * nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(nvstream_t *VAR_4, XDR *VAR_5, char *VAR_6, size_t VAR_7)
{

 if ((ulong_t)VAR_6 % 4 != 0)
  return (VAR_0);

 switch (VAR_4->nvs_op) {
 case 129:
  FUNC_0(VAR_5, VAR_6, (uint_t)VAR_7, VAR_3);
  VAR_4->nvs_private = VAR_5;
  return (0);
 case 130:
  FUNC_0(VAR_5, VAR_6, (uint_t)VAR_7, VAR_2);
  VAR_4->nvs_private = VAR_5;
  return (0);
 case 128:
  VAR_4->nvs_private = ((void*)0);
  return (0);
 default:
  return (VAR_1);
 }
}
