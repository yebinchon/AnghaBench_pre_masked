
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct signature_alg {int flags; int (* create_signature ) (int ,struct signature_alg const*,int const,TYPE_1__ const*,int const*,TYPE_1__*,int *) ;} ;
typedef int hx509_private_key ;
typedef int hx509_context ;
typedef int heim_octet_string ;
struct TYPE_6__ {int algorithm; } ;
typedef TYPE_1__ AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct signature_alg* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int ,struct signature_alg const*,int const,TYPE_1__ const*,int const*,TYPE_1__*,int *) ;

int
FUNC_3(hx509_context VAR_3,
   const hx509_private_key VAR_4,
   const AlgorithmIdentifier *VAR_5,
   const heim_octet_string *VAR_6,
   AlgorithmIdentifier *VAR_7,
   heim_octet_string *VAR_8)
{
    const struct signature_alg *VAR_9;

    VAR_9 = FUNC_0(&VAR_5->algorithm);
    if (VAR_9 == ((void*)0)) {
 FUNC_1(VAR_3, 0, VAR_1,
     "algorithm no supported");
 return VAR_1;
    }

    if (VAR_4 && (VAR_9->flags & VAR_2) == 0) {
 FUNC_1(VAR_3, 0, VAR_1,
     "algorithm provides no conf");
 return VAR_0;
    }

    return (*VAR_9->create_signature)(VAR_3, VAR_9, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);
}
