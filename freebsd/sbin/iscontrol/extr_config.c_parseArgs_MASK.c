
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tokenID; } ;
typedef TYPE_1__ textkey_t ;
typedef int isc_opt_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 TYPE_1__* FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char*) ;
 char* FUNC_3 (char*,char) ;

void
FUNC_4(int VAR_0, char **VAR_1, isc_opt_t *VAR_2)
{
     char **VAR_3;
     char *VAR_4, *VAR_5;
     textkey_t *VAR_6;

     for(VAR_3 = VAR_1; VAR_0 > 0; VAR_0--, VAR_3++) {
   VAR_4 = FUNC_3(*VAR_3, '=');
   if(VAR_4 == ((void*)0))
        continue;
   *VAR_4 = 0;
   VAR_5 = VAR_4 + 1;
   while(FUNC_0((unsigned char)*--VAR_4))
        *VAR_4 = 0;
   while(FUNC_0((unsigned char)*VAR_5))
        VAR_5++;
   if((VAR_6 = FUNC_1(*VAR_3)) == ((void*)0))
        continue;
   FUNC_2(VAR_2, VAR_6->tokenID, VAR_5);
     }
}
