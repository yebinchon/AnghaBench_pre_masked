
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tlsv1_client {int state; TYPE_1__* cred; scalar_t__ certificate_requested; } ;
struct TYPE_2__ {scalar_t__ key; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (struct tlsv1_client*) ;
 scalar_t__ FUNC_3 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_4 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_5 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_6 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_7 (struct tlsv1_client*,int **,int *) ;

__attribute__((used)) static u8 * FUNC_8(struct tlsv1_client *VAR_1,
      size_t *VAR_2)
{
 u8 *VAR_3, *VAR_4, *VAR_5;
 size_t VAR_6;

 *VAR_2 = 0;

 VAR_6 = 2000;
 if (VAR_1->certificate_requested)
  VAR_6 += FUNC_2(VAR_1);

 VAR_3 = FUNC_1(VAR_6);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_5 = VAR_3;
 VAR_4 = VAR_3 + VAR_6;

 if (VAR_1->certificate_requested) {
  if (FUNC_3(VAR_1, &VAR_5, VAR_4) < 0) {
   FUNC_0(VAR_3);
   return ((void*)0);
  }
 }

 if (FUNC_7(VAR_1, &VAR_5, VAR_4) < 0 ||
     (VAR_1->certificate_requested && VAR_1->cred && VAR_1->cred->key &&
      FUNC_4(VAR_1, &VAR_5, VAR_4) < 0) ||
     FUNC_5(VAR_1, &VAR_5, VAR_4) < 0 ||
     FUNC_6(VAR_1, &VAR_5, VAR_4) < 0) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 *VAR_2 = VAR_5 - VAR_3;

 VAR_1->state = VAR_0;

 return VAR_3;
}
