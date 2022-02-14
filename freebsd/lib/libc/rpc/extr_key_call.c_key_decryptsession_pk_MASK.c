
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_long ;
typedef int netobj ;
typedef int des_block ;
struct TYPE_6__ {int deskey; } ;
struct TYPE_7__ {scalar_t__ status; TYPE_1__ cryptkeyres_u; } ;
typedef TYPE_2__ cryptkeyres ;
struct TYPE_8__ {char* remotename; int deskey; int remotekey; } ;
typedef TYPE_3__ cryptkeyarg2 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_2(char *VAR_4, netobj *VAR_5, des_block *VAR_6)
{
 cryptkeyarg2 VAR_7;
 cryptkeyres VAR_8;

 VAR_7.remotename = VAR_4;
 VAR_7.remotekey = *VAR_5;
 VAR_7.deskey = *VAR_6;
 if (!FUNC_1((u_long)VAR_0, (xdrproc_t)VAR_2, &VAR_7,
   (xdrproc_t)VAR_3, &VAR_8)) {
  return (-1);
 }
 if (VAR_8.status != VAR_1) {
  FUNC_0("decrypt status is nonzero");
  return (-1);
 }
 *VAR_6 = VAR_8.cryptkeyres_u.deskey;
 return (0);
}
