
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sshkey {int dummy; } ;
struct pkcs11_provider {int dummy; } ;
typedef int pubkey_class ;
typedef int cert_class ;
struct TYPE_4__ {int member_2; int * pValue; int * member_1; int member_0; } ;
typedef int CK_ULONG ;
typedef int CK_OBJECT_CLASS ;
typedef TYPE_1__ CK_ATTRIBUTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct pkcs11_provider*,int ,TYPE_1__*,TYPE_1__*,struct sshkey***,int*) ;

__attribute__((used)) static int
FUNC_1(struct pkcs11_provider *VAR_8, CK_ULONG VAR_9,
    struct sshkey ***VAR_10, int *VAR_11)
{
 CK_OBJECT_CLASS VAR_12 = VAR_7;
 CK_OBJECT_CLASS VAR_13 = VAR_6;
 CK_ATTRIBUTE VAR_14[] = {
  { VAR_0, ((void*)0), sizeof(VAR_12) }
 };
 CK_ATTRIBUTE VAR_15[] = {
  { VAR_0, ((void*)0), sizeof(VAR_13) }
 };
 CK_ATTRIBUTE VAR_16[] = {
  { VAR_1, ((void*)0), 0 },
  { VAR_2, ((void*)0), 0 },
  { VAR_3, ((void*)0), 0 }
 };
 CK_ATTRIBUTE VAR_17[] = {
  { VAR_1, ((void*)0), 0 },
  { VAR_4, ((void*)0), 0 },
  { VAR_5, ((void*)0), 0 }
 };
 VAR_14[0].pValue = &VAR_12;
 VAR_15[0].pValue = &VAR_13;

 if (FUNC_0(VAR_8, VAR_9, VAR_14, VAR_16,
     VAR_10, VAR_11) < 0 ||
     FUNC_0(VAR_8, VAR_9, VAR_15, VAR_17,
     VAR_10, VAR_11) < 0)
  return (-1);
 return (0);
}
