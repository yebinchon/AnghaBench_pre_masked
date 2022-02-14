
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; size_t data_len; } ;
typedef TYPE_1__ pem_object ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char**,char**,unsigned char**,long*) ;
 TYPE_1__* FUNC_3 (char*,size_t,size_t*) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (char*,char*) ;

unsigned char *
FUNC_6(char *VAR_0, size_t VAR_1, size_t *VAR_2)
{




 BIO *VAR_3;
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);

 unsigned char *VAR_6 = ((void*)0);
 char *VAR_7;
 char *VAR_8;


 if ((VAR_7 = FUNC_5((char *)VAR_0, "\n=")) &&
     (VAR_8 = FUNC_5(VAR_7, "\n---"))) {
  FUNC_4(VAR_7, VAR_8, VAR_1 - (size_t)(VAR_8 - VAR_0));
  VAR_1 -= (size_t)(VAR_8 - VAR_7);
  VAR_0[VAR_1] = '\0';
 }
 if ((VAR_3 = FUNC_1(VAR_0, (int)VAR_1))) {
  long VAR_9 = (long)VAR_1;

  if (!FUNC_2(VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_9))
   VAR_6 = ((void*)0);
  FUNC_0(VAR_3);
  *VAR_2 = (size_t)VAR_9;
 }

 return (VAR_6);
}
