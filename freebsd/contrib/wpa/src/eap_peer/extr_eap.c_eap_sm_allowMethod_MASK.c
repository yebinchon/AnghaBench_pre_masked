
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
typedef int EapType ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sm*,int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int,int ) ;

__attribute__((used)) static Boolean FUNC_3(struct eap_sm *VAR_3, int VAR_4,
      EapType VAR_5)
{
 if (!FUNC_0(VAR_3, VAR_4, VAR_5)) {
  FUNC_2(VAR_1, "EAP: configuration does not allow: "
      "vendor %u method %u", VAR_4, VAR_5);
  return VAR_0;
 }
 if (FUNC_1(VAR_4, VAR_5))
  return VAR_2;
 FUNC_2(VAR_1, "EAP: not included in build: "
     "vendor %u method %u", VAR_4, VAR_5);
 return VAR_0;
}
