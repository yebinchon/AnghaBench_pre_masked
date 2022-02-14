
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {TYPE_1__* cert; int type; } ;
struct sshauthopt {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int extensions; int critical; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sshauthopt*,int ,int ,int) ;
 int FUNC_1 (struct sshauthopt*) ;
 struct sshauthopt* FUNC_2 () ;
 int FUNC_3 (int ) ;

struct sshauthopt *
FUNC_4(struct sshkey *VAR_3)
{
 struct sshauthopt *VAR_4;

 if (VAR_3 == ((void*)0) || !FUNC_3(VAR_3->type) || VAR_3->cert == ((void*)0) ||
     VAR_3->cert->type != VAR_2)
  return ((void*)0);

 if ((VAR_4 = FUNC_2()) == ((void*)0))
  return ((void*)0);


 if (FUNC_0(VAR_4, VAR_3->cert->critical,
     VAR_0, 1) == -1) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 if (FUNC_0(VAR_4, VAR_3->cert->extensions,
     VAR_1, 0) == -1) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
