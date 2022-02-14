
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * password; int * user; int * realm; int * scheme; } ;
typedef TYPE_1__ http_auth_params_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 void* FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, http_auth_params_t *VAR_1)
{
 int VAR_2 = -1;
 char *VAR_3, *VAR_4;
 char *VAR_5 = FUNC_4(VAR_0);

 if (VAR_5 == ((void*)0)) {
  FUNC_1();
  return (-1);
 }
 VAR_3 = VAR_5;

 if ((VAR_4 = FUNC_3(VAR_3, ':')) == ((void*)0))
  goto out;

 *VAR_4 = 0;
 if ((VAR_1->scheme = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_1();
  goto out;
 }
 VAR_3 = VAR_4 + 1;

 if ((VAR_4 = FUNC_3(VAR_3, ':')) == ((void*)0))
  goto out;

 *VAR_4 = 0;
 if ((VAR_1->realm = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_1();
  goto out;
 }
 VAR_3 = VAR_4 + 1;

 if ((VAR_4 = FUNC_3(VAR_3, ':')) == ((void*)0))
  goto out;

 *VAR_4 = 0;
 if ((VAR_1->user = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_1();
  goto out;
 }
 VAR_3 = VAR_4 + 1;


 if ((VAR_1->password = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_1();
  goto out;
 }
 VAR_2 = 0;
out:
 if (VAR_2 == -1)
  FUNC_0(VAR_1);
 if (VAR_5)
  FUNC_2(VAR_5);
 return (VAR_2);
}
