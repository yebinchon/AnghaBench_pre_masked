
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_ttls_data {int phase2_type; TYPE_1__* phase2_method; int ttls_version; int ssl; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {char* name; } ;







 int FUNC_0 (struct eap_sm*,int *,char*,size_t,int) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_2 (size_t,int) ;

__attribute__((used)) static int FUNC_3(struct eap_sm *VAR_0, void *VAR_1, char *VAR_2,
          size_t VAR_3, int VAR_4)
{
 struct eap_ttls_data *VAR_5 = VAR_1;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_0, &VAR_5->ssl, VAR_2, VAR_3, VAR_4);
 VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6,
     "EAP-TTLSv%d Phase2 method=",
     VAR_5->ttls_version);
 if (FUNC_2(VAR_3 - VAR_6, VAR_7))
  return VAR_6;
 VAR_6 += VAR_7;
 switch (VAR_5->phase2_type) {
 case 131:
  VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6, "EAP-%s\n",
      VAR_5->phase2_method ?
      VAR_5->phase2_method->name : "?");
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6, "MSCHAPV2\n");
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6, "MSCHAP\n");
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6, "PAP\n");
  break;
 case 132:
  VAR_7 = FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6, "CHAP\n");
  break;
 default:
  VAR_7 = 0;
  break;
 }
 if (FUNC_2(VAR_3 - VAR_6, VAR_7))
  return VAR_6;
 VAR_6 += VAR_7;

 return VAR_6;
}
