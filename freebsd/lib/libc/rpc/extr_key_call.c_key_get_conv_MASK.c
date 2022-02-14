
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_long ;
typedef int des_block ;
struct TYPE_4__ {int deskey; } ;
struct TYPE_5__ {scalar_t__ status; TYPE_1__ cryptkeyres_u; } ;
typedef TYPE_2__ cryptkeyres ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*,int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_2(char *VAR_4, des_block *VAR_5)
{
 cryptkeyres VAR_6;

 if (!FUNC_1((u_long) VAR_0, (xdrproc_t)VAR_3, VAR_4,
   (xdrproc_t)VAR_2, &VAR_6)) {
  return (-1);
 }
 if (VAR_6.status != VAR_1) {
  FUNC_0("get_conv status is nonzero");
  return (-1);
 }
 *VAR_5 = VAR_6.cryptkeyres_u.deskey;
 return (0);
}
