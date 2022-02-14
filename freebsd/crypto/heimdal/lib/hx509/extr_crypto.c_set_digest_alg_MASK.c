
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int heim_oid ;
struct TYPE_6__ {size_t length; struct TYPE_6__* data; } ;
struct TYPE_5__ {TYPE_3__* parameters; int algorithm; } ;
typedef TYPE_1__ DigestAlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_3__*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_4(DigestAlgorithmIdentifier *VAR_1,
        const heim_oid *VAR_2,
        const void *VAR_3, size_t VAR_4)
{
    int VAR_5;
    if (VAR_3) {
 VAR_1->parameters = FUNC_2(sizeof(*VAR_1->parameters));
 if (VAR_1->parameters == ((void*)0))
     return VAR_0;
 VAR_1->parameters->data = FUNC_2(VAR_4);
 if (VAR_1->parameters->data == ((void*)0)) {
     FUNC_1(VAR_1->parameters);
     VAR_1->parameters = ((void*)0);
     return VAR_0;
 }
 FUNC_3(VAR_1->parameters->data, VAR_3, VAR_4);
 VAR_1->parameters->length = VAR_4;
    } else
 VAR_1->parameters = ((void*)0);
    VAR_5 = FUNC_0(VAR_2, &VAR_1->algorithm);
    if (VAR_5) {
 if (VAR_1->parameters) {
     FUNC_1(VAR_1->parameters->data);
     FUNC_1(VAR_1->parameters);
     VAR_1->parameters = ((void*)0);
 }
 return VAR_5;
    }
    return 0;
}
