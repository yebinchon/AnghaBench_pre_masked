
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int hx509_context ;
typedef enum certtype { ____Placeholder_certtype } certtype ;
struct TYPE_16__ {size_t* pathLenConstraint; int * cA; } ;
struct TYPE_12__ {int subject; } ;
struct TYPE_15__ {TYPE_1__ tbsCertificate; } ;
struct TYPE_13__ {int length; int data; } ;
struct TYPE_14__ {TYPE_2__ extnValue; } ;
typedef TYPE_3__ Extension ;
typedef TYPE_4__ Certificate ;
typedef TYPE_5__ BasicConstraints ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (TYPE_4__ const*) ;
 int FUNC_1 (int *,char**) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_5__*,size_t*) ;
 TYPE_3__* FUNC_4 (TYPE_4__ const*,int *,size_t*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,int ,int,char*,char*) ;

__attribute__((used)) static int
FUNC_8(hx509_context VAR_5, const Certificate *VAR_6,
   enum certtype VAR_7, size_t VAR_8)
{
    BasicConstraints VAR_9;
    const Extension *VAR_10;
    size_t VAR_11;
    int VAR_12;
    size_t VAR_13 = 0;

    if (FUNC_0(VAR_6) < 3)
 return 0;

    VAR_10 = FUNC_4(VAR_6, &VAR_4, &VAR_13);
    if (VAR_10 == ((void*)0)) {
 switch(VAR_7) {
 case 128:
 case 129:
     return 0;
 case 130: {
     char *VAR_14;
     VAR_12 = FUNC_1(&VAR_6->tbsCertificate.subject, &VAR_14);
     FUNC_2(VAR_12 == 0);
     FUNC_7(VAR_5, 0, VAR_1,
       "basicConstraints missing from "
       "CA certifiacte %s", VAR_14);
     FUNC_5(VAR_14);
     return VAR_1;
 }
 }
    }

    VAR_12 = FUNC_3(VAR_10->extnValue.data,
      VAR_10->extnValue.length, &VAR_9,
      &VAR_11);
    if (VAR_12)
 return VAR_12;
    switch(VAR_7) {
    case 128:
 if (VAR_9.cA != ((void*)0) && *VAR_9.cA)
     VAR_12 = VAR_2;
 break;
    case 129:
 VAR_12 = 0;
 break;
    case 130:
 if (VAR_9.cA == ((void*)0) || !*VAR_9.cA)
     VAR_12 = VAR_3;
 else if (VAR_9.pathLenConstraint)
     if (VAR_8 - 1 > *VAR_9.pathLenConstraint)
  VAR_12 = VAR_0;
 break;
    }
    FUNC_6(&VAR_9);
    return VAR_12;
}
