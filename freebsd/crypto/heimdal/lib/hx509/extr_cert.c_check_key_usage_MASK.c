
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hx509_context ;
typedef int buf ;
struct TYPE_10__ {int subject; } ;
struct TYPE_12__ {TYPE_2__ tbsCertificate; } ;
struct TYPE_9__ {int length; int data; } ;
struct TYPE_11__ {TYPE_1__ extnValue; } ;
typedef int KeyUsage ;
typedef TYPE_3__ Extension ;
typedef TYPE_4__ Certificate ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__ const*) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int *,size_t*) ;
 TYPE_3__* FUNC_5 (TYPE_4__ const*,int *,size_t*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int,char*,...) ;
 int FUNC_8 (unsigned int,int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(hx509_context VAR_2, const Certificate *VAR_3,
  unsigned VAR_4, int VAR_5)
{
    const Extension *VAR_6;
    KeyUsage VAR_7;
    size_t VAR_8;
    int VAR_9;
    size_t VAR_10 = 0;
    unsigned VAR_11;

    if (FUNC_1(VAR_3) < 3)
 return 0;

    VAR_6 = FUNC_5(VAR_3, &VAR_1, &VAR_10);
    if (VAR_6 == ((void*)0)) {
 if (VAR_5) {
     FUNC_7(VAR_2, 0, VAR_0,
       "Required extension key "
       "usage missing from certifiate");
     return VAR_0;
 }
 return 0;
    }

    VAR_9 = FUNC_4(VAR_6->extnValue.data, VAR_6->extnValue.length, &VAR_7, &VAR_8);
    if (VAR_9)
 return VAR_9;
    VAR_11 = FUNC_0(VAR_7);
    if ((VAR_11 & VAR_4) != VAR_4) {
 unsigned VAR_12 = (~VAR_11) & VAR_4;
 char VAR_13[256], *VAR_14;

 FUNC_8(VAR_12, FUNC_3(), VAR_13, sizeof(VAR_13));
 FUNC_2(&VAR_3->tbsCertificate.subject, &VAR_14);
 FUNC_7(VAR_2, 0, VAR_0,
          "Key usage %s required but missing "
          "from certifiate %s", VAR_13, VAR_14);
 FUNC_6(VAR_14);
 return VAR_0;
    }
    return 0;
}
