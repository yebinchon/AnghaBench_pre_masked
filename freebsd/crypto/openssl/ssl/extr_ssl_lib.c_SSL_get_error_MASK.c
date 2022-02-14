
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int shutdown; TYPE_1__* s3; int * wbio; } ;
struct TYPE_11__ {scalar_t__ warn_alert; } ;
typedef TYPE_2__ SSL ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_6 (TYPE_2__ const*) ;
 scalar_t__ FUNC_7 (TYPE_2__ const*) ;
 scalar_t__ FUNC_8 (TYPE_2__ const*) ;
 scalar_t__ FUNC_9 (TYPE_2__ const*) ;
 scalar_t__ FUNC_10 (TYPE_2__ const*) ;
 scalar_t__ FUNC_11 (TYPE_2__ const*) ;
 scalar_t__ FUNC_12 (TYPE_2__ const*) ;

int FUNC_13(const SSL *VAR_17, int VAR_18)
{
    int VAR_19;
    unsigned long VAR_20;
    BIO *VAR_21;

    if (VAR_18 > 0)
        return VAR_4;





    if ((VAR_20 = FUNC_5()) != 0) {
        if (FUNC_4(VAR_20) == VAR_2)
            return VAR_6;
        else
            return VAR_5;
    }

    if (FUNC_10(VAR_17)) {
        VAR_21 = FUNC_6(VAR_17);
        if (FUNC_2(VAR_21))
            return VAR_12;
        else if (FUNC_3(VAR_21))
            return VAR_13;
        else if (FUNC_1(VAR_21)) {
            VAR_19 = FUNC_0(VAR_21);
            if (VAR_19 == VAR_1)
                return VAR_11;
            else if (VAR_19 == VAR_0)
                return VAR_7;
            else
                return VAR_6;
        }
    }

    if (FUNC_11(VAR_17)) {

        VAR_21 = VAR_17->wbio;
        if (FUNC_3(VAR_21))
            return VAR_13;
        else if (FUNC_2(VAR_21))



            return VAR_12;
        else if (FUNC_1(VAR_21)) {
            VAR_19 = FUNC_0(VAR_21);
            if (VAR_19 == VAR_1)
                return VAR_11;
            else if (VAR_19 == VAR_0)
                return VAR_7;
            else
                return VAR_6;
        }
    }
    if (FUNC_12(VAR_17))
        return VAR_14;
    if (FUNC_7(VAR_17))
        return VAR_8;
    if (FUNC_8(VAR_17))
        return VAR_9;
    if (FUNC_9(VAR_17))
        return VAR_10;

    if ((VAR_17->shutdown & VAR_16) &&
        (VAR_17->s3->warn_alert == VAR_3))
        return VAR_15;

    return VAR_6;
}
