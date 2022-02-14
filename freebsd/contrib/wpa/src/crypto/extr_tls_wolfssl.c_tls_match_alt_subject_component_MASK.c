
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WOLFSSL_X509 ;
struct TYPE_3__ {int type; scalar_t__ obj; } ;
typedef TYPE_1__ WOLFSSL_ASN1_OBJECT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__,size_t) ;
 size_t FUNC_1 (char*) ;
 void* FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 TYPE_1__* FUNC_5 (void*,int) ;

__attribute__((used)) static int FUNC_6(WOLFSSL_X509 *VAR_1, int VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 WOLFSSL_ASN1_OBJECT *VAR_5;
 void *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_1, VAR_0, ((void*)0), ((void*)0));

 for (VAR_8 = 0; VAR_6 && VAR_8 < FUNC_4(VAR_6); VAR_8++) {
  VAR_5 = FUNC_5(VAR_6, VAR_8);
  if (VAR_5->type != VAR_2)
   continue;
  if (FUNC_1((char *) VAR_5->obj) == VAR_4 &&
      FUNC_0(VAR_3, VAR_5->obj, VAR_4) == 0)
   VAR_7++;
 }

 FUNC_3(VAR_6);

 return VAR_7;
}
