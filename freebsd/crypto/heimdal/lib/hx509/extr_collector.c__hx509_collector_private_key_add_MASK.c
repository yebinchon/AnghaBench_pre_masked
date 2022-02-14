
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct private_key {int localKeyId; scalar_t__ private_key; int alg; } ;
struct TYPE_6__ {int len; struct private_key** data; } ;
struct hx509_collector {TYPE_1__ val; } ;
typedef scalar_t__ hx509_private_key ;
typedef int hx509_context ;
struct TYPE_7__ {int length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 struct private_key* FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (TYPE_2__ const*,int *) ;
 int FUNC_3 (struct private_key*) ;
 int FUNC_4 (struct private_key*) ;
 int FUNC_5 (int ,int const*,int ,int ,int ,scalar_t__*) ;
 int FUNC_6 (int ,int ,int,char*) ;
 int FUNC_7 (int *,int ,int) ;
 void* FUNC_8 (struct private_key**,int) ;

int
FUNC_9(hx509_context VAR_2,
     struct hx509_collector *VAR_3,
     const AlgorithmIdentifier *VAR_4,
     hx509_private_key VAR_5,
     const heim_octet_string *VAR_6,
     const heim_octet_string *VAR_7)
{
    struct private_key *VAR_8;
    void *VAR_9;
    int VAR_10;

    VAR_8 = FUNC_0(1, sizeof(*VAR_8));
    if (VAR_8 == ((void*)0))
 return VAR_0;

    VAR_9 = FUNC_8(VAR_3->val.data, (VAR_3->val.len + 1) * sizeof(VAR_3->val.data[0]));
    if (VAR_9 == ((void*)0)) {
 FUNC_3(VAR_8);
 FUNC_6(VAR_2, 0, VAR_0, "Out of memory");
 return VAR_0;
    }
    VAR_3->val.data = VAR_9;

    VAR_10 = FUNC_1(VAR_4, &VAR_8->alg);
    if (VAR_10) {
 FUNC_6(VAR_2, 0, VAR_10, "Failed to copy "
          "AlgorithmIdentifier");
 goto out;
    }
    if (VAR_5) {
 VAR_8->private_key = VAR_5;
    } else {
 VAR_10 = FUNC_5(VAR_2, VAR_4,
           VAR_6->data, VAR_6->length,
           VAR_1,
           &VAR_8->private_key);
 if (VAR_10)
     goto out;
    }
    if (VAR_7) {
 VAR_10 = FUNC_2(VAR_7, &VAR_8->localKeyId);
 if (VAR_10) {
     FUNC_6(VAR_2, 0, VAR_10,
       "Failed to copy localKeyId");
     goto out;
 }
    } else
 FUNC_7(&VAR_8->localKeyId, 0, sizeof(VAR_8->localKeyId));

    VAR_3->val.data[VAR_3->val.len] = VAR_8;
    VAR_3->val.len++;

out:
    if (VAR_10)
 FUNC_4(VAR_8);

    return VAR_10;
}
