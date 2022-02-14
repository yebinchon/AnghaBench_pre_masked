
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_teap_data {TYPE_1__* phase2_method; int ssl; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct eap_sm*,int *,char*,size_t,int) ;
 int FUNC_1 (char*,size_t,char*,int ) ;
 scalar_t__ FUNC_2 (size_t,int) ;

__attribute__((used)) static int FUNC_3(struct eap_sm *VAR_0, void *VAR_1, char *VAR_2,
          size_t VAR_3, int VAR_4)
{
 struct eap_teap_data *VAR_5 = VAR_1;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_0, &VAR_5->ssl, VAR_2, VAR_3, VAR_4);
 if (VAR_5->phase2_method) {
  VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6,
      "EAP-TEAP Phase 2 method=%s\n",
      VAR_5->phase2_method->name);
  if (FUNC_2(VAR_3 - VAR_6, VAR_7))
   return VAR_6;
  VAR_6 += VAR_7;
 }
 return VAR_6;
}
