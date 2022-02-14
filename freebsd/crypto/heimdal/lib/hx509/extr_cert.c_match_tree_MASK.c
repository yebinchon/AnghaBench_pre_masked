
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int certname ;
struct TYPE_21__ {int rdnSequence; } ;
struct TYPE_22__ {TYPE_1__ u; int element; } ;
struct TYPE_23__ {TYPE_2__ directoryName; } ;
struct TYPE_29__ {TYPE_3__ u; scalar_t__ element; } ;
struct TYPE_28__ {unsigned int len; TYPE_7__* val; } ;
struct TYPE_20__ {scalar_t__ element; } ;
struct TYPE_27__ {TYPE_15__ base; scalar_t__ maximum; scalar_t__ minimum; } ;
struct TYPE_24__ {int rdnSequence; } ;
struct TYPE_25__ {TYPE_4__ u; int element; } ;
struct TYPE_26__ {TYPE_5__ subject; } ;
struct TYPE_19__ {TYPE_6__ tbsCertificate; } ;
typedef TYPE_8__ GeneralSubtrees ;
typedef TYPE_9__ GeneralName ;
typedef TYPE_10__ Certificate ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_15__*,TYPE_10__ const*,int*,int*) ;
 int FUNC_1 (TYPE_15__*,TYPE_9__*,int*) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;
 int FUNC_3 (TYPE_10__ const*) ;

__attribute__((used)) static int
FUNC_4(const GeneralSubtrees *VAR_2, const Certificate *VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    unsigned int VAR_8;
    int VAR_9 = 0;

    VAR_5 = VAR_6 = VAR_7 = *VAR_4 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_2->len; VAR_8++) {
 if (VAR_2->val[VAR_8].minimum && VAR_2->val[VAR_8].maximum)
     return VAR_0;







 if (VAR_2->val[VAR_8].base.element == VAR_1
     && !FUNC_3(VAR_3))
 {
     GeneralName VAR_10;

     FUNC_2(&VAR_10, 0, sizeof(VAR_10));
     VAR_10.element = VAR_1;
     VAR_10.u.directoryName.element =
  VAR_3->tbsCertificate.subject.element;
     VAR_10.u.directoryName.u.rdnSequence =
  VAR_3->tbsCertificate.subject.u.rdnSequence;

     VAR_9 = FUNC_1(&VAR_2->val[VAR_8].base, &VAR_10, &VAR_5);
 }






 VAR_9 = FUNC_0(&VAR_2->val[VAR_8].base, VAR_3, &VAR_7, &VAR_6);
    }
    if (VAR_5 && (!VAR_7 || VAR_6))
 *VAR_4 = 1;
    return VAR_9;
}
