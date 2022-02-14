
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_prop {int refs; int * val; struct bhnd_nvram_prop* name; } ;
typedef int bhnd_nvram_val ;


 struct bhnd_nvram_prop* FUNC_0 (int,int) ;
 int FUNC_1 (struct bhnd_nvram_prop*) ;
 struct bhnd_nvram_prop* FUNC_2 (char const*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct bhnd_nvram_prop *
FUNC_5(const char *VAR_0, bhnd_nvram_val *VAR_1)
{
 struct bhnd_nvram_prop *VAR_2;

 VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);


 VAR_2->refs = 1;

 if ((VAR_2->name = FUNC_2(VAR_0)) == ((void*)0))
  goto failed;

 if ((VAR_2->val = FUNC_3(VAR_1)) == ((void*)0))
  goto failed;

 return (VAR_2);

failed:
 if (VAR_2->name != ((void*)0))
  FUNC_1(VAR_2->name);

 if (VAR_2->val != ((void*)0))
  FUNC_4(VAR_2->val);

 FUNC_1(VAR_2);
 return (((void*)0));
}
