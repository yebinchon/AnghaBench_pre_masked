
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; } ;
struct private_key {int private_key; TYPE_1__ localKeyId; } ;
struct TYPE_6__ {TYPE_1__* local_key_id; int match; } ;
typedef TYPE_2__ hx509_query ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_2,
   struct private_key *VAR_3,
   hx509_certs VAR_4)
{
    hx509_cert VAR_5;
    hx509_query VAR_6;
    int VAR_7;

    if (VAR_3->localKeyId.length == 0) {
 FUNC_4(VAR_2, 0, VAR_0,
          "No local key attribute on private key");
 return VAR_0;
    }

    FUNC_1(&VAR_6);
    VAR_6.match |= VAR_1;

    VAR_6.local_key_id = &VAR_3->localKeyId;

    VAR_7 = FUNC_3(VAR_2, VAR_4, &VAR_6, &VAR_5);
    if (VAR_7 == 0) {

 if (VAR_3->private_key)
     FUNC_0(VAR_5, VAR_3->private_key);
 FUNC_2(VAR_5);
    }
    return VAR_7;
}
