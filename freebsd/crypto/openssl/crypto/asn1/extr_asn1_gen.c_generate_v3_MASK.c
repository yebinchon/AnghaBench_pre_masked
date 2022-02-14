
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exp_len; int exp_tag; int exp_constructed; int exp_class; scalar_t__ exp_pad; } ;
typedef TYPE_1__ tag_exp_type ;
struct TYPE_5__ {int imp_tag; int imp_class; int exp_count; int utype; TYPE_1__* exp_list; int format; int str; } ;
typedef TYPE_2__ tag_exp_arg ;
typedef int X509V3_CTX ;
typedef int ASN1_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char const**,long*,int*,int*,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (unsigned char**,int,long,int,int) ;
 scalar_t__ FUNC_4 (char const*,char,int,int ,TYPE_2__*) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_7 (int,int ,int *,int,int*) ;
 int * FUNC_8 (int ,int ,int) ;
 int * FUNC_9 (int *,unsigned char const**,int) ;
 int FUNC_10 (int *,unsigned char**) ;
 int FUNC_11 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static ASN1_TYPE *FUNC_12(const char *VAR_10, X509V3_CTX *VAR_11, int VAR_12,
                              int *VAR_13)
{
    ASN1_TYPE *VAR_14;
    tag_exp_arg VAR_15;
    tag_exp_type *VAR_16;

    int VAR_17, VAR_18;

    unsigned char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    const unsigned char *VAR_21;
    unsigned char *VAR_22;
    const unsigned char *VAR_23;
    int VAR_24;
    long VAR_25 = 0;
    int VAR_26 = 0, VAR_27, VAR_28;
    int VAR_29;

    VAR_15.imp_tag = -1;
    VAR_15.imp_class = -1;
    VAR_15.format = VAR_0;
    VAR_15.exp_count = 0;
    if (FUNC_4(VAR_10, ',', 1, VAR_9, &VAR_15) != 0) {
        *VAR_13 = VAR_4;
        return ((void*)0);
    }

    if ((VAR_15.utype == VAR_6)
        || (VAR_15.utype == VAR_7)) {
        if (!VAR_11) {
            *VAR_13 = VAR_3;
            return ((void*)0);
        }
        if (VAR_12 >= VAR_1) {
            *VAR_13 = VAR_2;
            return ((void*)0);
        }
        VAR_14 = FUNC_7(VAR_15.utype, VAR_15.str, VAR_11, VAR_12, VAR_13);
    } else
        VAR_14 = FUNC_8(VAR_15.str, VAR_15.format, VAR_15.utype);

    if (!VAR_14)
        return ((void*)0);


    if ((VAR_15.imp_tag == -1) && (VAR_15.exp_count == 0))
        return VAR_14;


    VAR_24 = FUNC_10(VAR_14, &VAR_19);
    FUNC_0(VAR_14);
    VAR_14 = ((void*)0);

    VAR_21 = VAR_19;


    if (VAR_15.imp_tag != -1) {


        VAR_29 = FUNC_1(&VAR_21, &VAR_25, &VAR_27, &VAR_28,
                            VAR_24);
        if (VAR_29 & 0x80)
            goto err;

        VAR_24 -= VAR_21 - VAR_19;




        if (VAR_29 & 0x1) {

            VAR_26 = 2;
            VAR_25 = 0;
        } else

            VAR_26 = VAR_29 & VAR_5;




        VAR_18 = FUNC_2(0, VAR_25, VAR_15.imp_tag);
    } else
        VAR_18 = VAR_24;



    for (VAR_17 = 0, VAR_16 = VAR_15.exp_list + VAR_15.exp_count - 1;
         VAR_17 < VAR_15.exp_count; VAR_17++, VAR_16--) {

        VAR_18 += VAR_16->exp_pad;
        VAR_16->exp_len = VAR_18;

        VAR_18 = FUNC_2(0, VAR_18, VAR_16->exp_tag);
    }



    VAR_20 = FUNC_6(VAR_18);
    if (VAR_20 == ((void*)0))
        goto err;



    VAR_22 = VAR_20;



    for (VAR_17 = 0, VAR_16 = VAR_15.exp_list; VAR_17 < VAR_15.exp_count;
         VAR_17++, VAR_16++) {
        FUNC_3(&VAR_22, VAR_16->exp_constructed, VAR_16->exp_len,
                        VAR_16->exp_tag, VAR_16->exp_class);
        if (VAR_16->exp_pad)
            *VAR_22++ = 0;
    }



    if (VAR_15.imp_tag != -1) {
        if (VAR_15.imp_class == VAR_8
            && (VAR_15.imp_tag == VAR_6
                || VAR_15.imp_tag == VAR_7))
            VAR_26 = VAR_5;
        FUNC_3(&VAR_22, VAR_26, VAR_25,
                        VAR_15.imp_tag, VAR_15.imp_class);
    }


    FUNC_11(VAR_22, VAR_21, VAR_24);

    VAR_23 = VAR_20;


    VAR_14 = FUNC_9(((void*)0), &VAR_23, VAR_18);

 err:
    FUNC_5(VAR_19);
    FUNC_5(VAR_20);

    return VAR_14;

}
