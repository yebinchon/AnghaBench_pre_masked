
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
struct TYPE_13__ {int altname; } ;
typedef TYPE_2__ X509 ;
struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_12__ {TYPE_9__* rfc822Name; int * directoryName; } ;
struct TYPE_15__ {TYPE_1__ d; int type; } ;
struct TYPE_14__ {int excludedSubtrees; int permittedSubtrees; } ;
typedef TYPE_3__ NAME_CONSTRAINTS ;
typedef TYPE_4__ GENERAL_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_9__* FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

int FUNC_10(X509 *VAR_8, NAME_CONSTRAINTS *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    X509_NAME *VAR_14;

    VAR_14 = FUNC_4(VAR_8);





    if (!FUNC_5(&VAR_12, FUNC_1(VAR_14),
                     FUNC_7(VAR_8->altname))
        || !FUNC_5(&VAR_13,
                        FUNC_9(VAR_9->permittedSubtrees),
                        FUNC_9(VAR_9->excludedSubtrees))
        || (VAR_12 > 0 && VAR_13 > VAR_2 / VAR_12))
        return VAR_5;

    if (FUNC_1(VAR_14) > 0) {
        GENERAL_NAME VAR_15;
        VAR_15.type = VAR_0;
        VAR_15.d.directoryName = VAR_14;

        VAR_10 = FUNC_6(&VAR_15, VAR_9);

        if (VAR_10 != VAR_7)
            return VAR_10;

        VAR_15.type = VAR_1;



        for (VAR_11 = -1;;) {
            const X509_NAME_ENTRY *VAR_16;

            VAR_11 = FUNC_3(VAR_14, VAR_3, VAR_11);
            if (VAR_11 == -1)
                break;
            VAR_16 = FUNC_2(VAR_14, VAR_11);
            VAR_15.d.rfc822Name = FUNC_0(VAR_16);
            if (VAR_15.d.rfc822Name->type != VAR_4)
                return VAR_6;

            VAR_10 = FUNC_6(&VAR_15, VAR_9);

            if (VAR_10 != VAR_7)
                return VAR_10;
        }

    }

    for (VAR_11 = 0; VAR_11 < FUNC_7(VAR_8->altname); VAR_11++) {
        GENERAL_NAME *VAR_17 = FUNC_8(VAR_8->altname, VAR_11);
        VAR_10 = FUNC_6(VAR_17, VAR_9);
        if (VAR_10 != VAR_7)
            return VAR_10;
    }

    return VAR_7;

}
