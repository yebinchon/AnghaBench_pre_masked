
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_15__ {int len; TYPE_5__* val; } ;
struct TYPE_16__ {TYPE_3__ rdnSequence; } ;
struct TYPE_18__ {TYPE_4__ u; } ;
struct TYPE_17__ {int len; TYPE_10__* val; } ;
struct TYPE_13__ {int * utf8String; } ;
struct TYPE_14__ {TYPE_1__ u; int element; } ;
struct TYPE_12__ {TYPE_2__ value; int type; } ;
typedef TYPE_5__ RelativeDistinguishedName ;
typedef TYPE_6__ Name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int ,int ,int,char*) ;
 TYPE_10__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*,int) ;
 void* FUNC_4 (TYPE_5__*,int) ;
 int * FUNC_5 (char const*) ;

int
FUNC_6(hx509_context VAR_2,
     Name *VAR_3,
     int VAR_4,
     const heim_oid *VAR_5,
     const char *VAR_6)
{
    RelativeDistinguishedName *VAR_7;
    int VAR_8;
    void *VAR_9;

    VAR_9 = FUNC_4(VAR_3->u.rdnSequence.val,
    sizeof(VAR_3->u.rdnSequence.val[0]) *
    (VAR_3->u.rdnSequence.len + 1));
    if (VAR_9 == ((void*)0)) {
 FUNC_1(VAR_2, 0, VAR_0, "Out of memory");
 return VAR_0;
    }
    VAR_3->u.rdnSequence.val = VAR_9;

    if (VAR_4) {
 VAR_7 = &VAR_3->u.rdnSequence.val[VAR_3->u.rdnSequence.len];
    } else {
 FUNC_3(&VAR_3->u.rdnSequence.val[1],
  &VAR_3->u.rdnSequence.val[0],
  VAR_3->u.rdnSequence.len *
  sizeof(VAR_3->u.rdnSequence.val[0]));

 VAR_7 = &VAR_3->u.rdnSequence.val[0];
    }
    VAR_7->val = FUNC_2(sizeof(VAR_7->val[0]));
    if (VAR_7->val == ((void*)0))
 return VAR_0;
    VAR_7->len = 1;
    VAR_8 = FUNC_0(VAR_5, &VAR_7->val[0].type);
    if (VAR_8)
 return VAR_8;
    VAR_7->val[0].value.element = VAR_1;
    VAR_7->val[0].value.u.utf8String = FUNC_5(VAR_6);
    if (VAR_7->val[0].value.u.utf8String == ((void*)0))
 return VAR_0;
    VAR_3->u.rdnSequence.len += 1;

    return 0;
}
