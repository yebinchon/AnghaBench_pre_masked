
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ stack_index_t ;
typedef int buf ;
typedef int X509 ;
struct TYPE_3__ {int policyid; } ;
typedef TYPE_1__ POLICYINFO ;
typedef int CERTIFICATEPOLICIES ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int * FUNC_1 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_6(X509 *VAR_2)
{
 CERTIFICATEPOLICIES *VAR_3;
 stack_index_t VAR_4;
 char VAR_5[100];
 int VAR_6;
 int VAR_7 = 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1, ((void*)0), ((void*)0));
 if (!VAR_3)
  return 0;

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_3); VAR_4++) {
  POLICYINFO *VAR_8;

  VAR_8 = FUNC_4(VAR_3, VAR_4);
  VAR_6 = FUNC_0(VAR_5, sizeof(VAR_5), VAR_8->policyid, 0);
  if (VAR_6 < 0 || (size_t) VAR_6 >= sizeof(VAR_5))
   continue;
  FUNC_5(VAR_0, "OpenSSL: Certificate Policy %s", VAR_5);
  if (FUNC_2(VAR_5, "1.3.6.1.4.1.40808.1.3.1") == 0)
   VAR_7 = 1;
 }

 return VAR_7;
}
