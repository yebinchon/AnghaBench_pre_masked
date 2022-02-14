
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint ;
struct usm_user {int dummy; } ;
struct asn_oid {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usm_user* FUNC_0 (int *,int ,char*) ;
 struct usm_user* FUNC_1 () ;
 struct usm_user* FUNC_2 (struct usm_user*) ;
 scalar_t__ FUNC_3 (struct asn_oid const*,scalar_t__,int *,int *,char*) ;

__attribute__((used)) static struct usm_user *
FUNC_4(const struct asn_oid *VAR_2, uint VAR_3)
{
 uint32_t VAR_4;
 char VAR_5[VAR_0];
 uint8_t VAR_6[VAR_1];
 struct usm_user *VAR_7;

 if (VAR_2->len - VAR_3 == 0)
  return (FUNC_1());

 if (FUNC_3(VAR_2, VAR_3, VAR_6, &VAR_4, VAR_5) < 0)
  return (((void*)0));

 if ((VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5)) != ((void*)0))
  return (FUNC_2(VAR_7));

 return (((void*)0));
}
