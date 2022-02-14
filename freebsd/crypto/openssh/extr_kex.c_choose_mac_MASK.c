
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshmac {char* name; scalar_t__ enabled; int * key; } ;
struct ssh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct sshmac*,char*) ;
 char* FUNC_2 (char*,char*,int *) ;

__attribute__((used)) static int
FUNC_3(struct ssh *VAR_2, struct sshmac *VAR_3, char *VAR_4, char *VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_4, VAR_5, ((void*)0));

 if (VAR_6 == ((void*)0))
  return VAR_1;
 if (FUNC_1(VAR_3, VAR_6) < 0) {
  FUNC_0(VAR_6);
  return VAR_0;
 }
 VAR_3->name = VAR_6;
 VAR_3->key = ((void*)0);
 VAR_3->enabled = 0;
 return 0;
}
