
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* hx509_private_key ;
typedef int hx509_context ;
struct TYPE_8__ {unsigned char* data; int length; } ;
struct TYPE_11__ {TYPE_1__ subjectPublicKey; int algorithm; } ;
struct TYPE_9__ {int rsa; } ;
struct TYPE_10__ {TYPE_2__ private_key; } ;
typedef TYPE_4__ SubjectPublicKeyInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int ,unsigned char**) ;
 unsigned char* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(hx509_context VAR_2,
       hx509_private_key VAR_3,
       SubjectPublicKeyInfo *VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_4(VAR_4, 0, sizeof(*VAR_4));

    VAR_5 = FUNC_2(VAR_3->private_key.rsa, ((void*)0));

    VAR_4->subjectPublicKey.data = FUNC_3(VAR_5);
    if (VAR_4->subjectPublicKey.data == ((void*)0)) {
 FUNC_1(VAR_2, 0, VAR_1, "malloc - out of memory");
 return VAR_1;
    }
    VAR_4->subjectPublicKey.length = VAR_5 * 8;

    VAR_6 = FUNC_5(&VAR_4->algorithm, VAR_0,
    "\x05\x00", 2);
    if (VAR_6) {
 FUNC_1(VAR_2, 0, VAR_6, "malloc - out of memory");
 FUNC_0(VAR_4->subjectPublicKey.data);
 VAR_4->subjectPublicKey.data = ((void*)0);
 VAR_4->subjectPublicKey.length = 0;
 return VAR_6;
    }

    {
 unsigned char *VAR_7 = VAR_4->subjectPublicKey.data;
 FUNC_2(VAR_3->private_key.rsa, &VAR_7);
    }

    return 0;
}
