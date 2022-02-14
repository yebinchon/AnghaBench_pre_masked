
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v3_ext_method {int dummy; } ;
typedef int objbuf ;
struct TYPE_8__ {int professionInfos; int * namingAuthority; int * admissionAuthority; } ;
struct TYPE_7__ {int contentsOfAdmissions; int * admissionAuthority; } ;
struct TYPE_6__ {int * professionOIDs; int * professionItems; int * namingAuthority; int * registrationNumber; } ;
typedef TYPE_1__ PROFESSION_INFO ;
typedef int BIO ;
typedef int ASN1_STRING ;
typedef int ASN1_OBJECT ;
typedef TYPE_2__ ADMISSION_SYNTAX ;
typedef TYPE_3__ ADMISSIONS ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int *,int) ;
 scalar_t__ FUNC_6 (struct v3_ext_method const*,int *,int *,int) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(const struct v3_ext_method *VAR_0, void *VAR_1,
                                BIO *VAR_2, int VAR_3)
{
    ADMISSION_SYNTAX * VAR_4 = (ADMISSION_SYNTAX *)VAR_1;
    int VAR_5, VAR_6, VAR_7;

    if (VAR_4->admissionAuthority != ((void*)0)) {
        if (FUNC_1(VAR_2, "%*sadmissionAuthority:\n", VAR_3, "") <= 0
            || FUNC_1(VAR_2, "%*s  ", VAR_3, "") <= 0
            || FUNC_2(VAR_2, VAR_4->admissionAuthority) <= 0
            || FUNC_1(VAR_2, "\n") <= 0)
            goto err;
    }

    for (VAR_5 = 0; VAR_5 < FUNC_7(VAR_4->contentsOfAdmissions); VAR_5++) {
        ADMISSIONS* VAR_8 = FUNC_8(VAR_4->contentsOfAdmissions, VAR_5);

        if (FUNC_1(VAR_2, "%*sEntry %0d:\n", VAR_3, "", 1 + VAR_5) <= 0) goto err;

        if (VAR_8->admissionAuthority != ((void*)0)) {
            if (FUNC_1(VAR_2, "%*s  admissionAuthority:\n", VAR_3, "") <= 0
                || FUNC_1(VAR_2, "%*s    ", VAR_3, "") <= 0
                || FUNC_2(VAR_2, VAR_8->admissionAuthority) <= 0
                || FUNC_1(VAR_2, "\n") <= 0)
                goto err;
        }

        if (VAR_8->namingAuthority != ((void*)0)) {
            if (FUNC_6(VAR_0, VAR_8->namingAuthority, VAR_2, VAR_3) <= 0)
                goto err;
        }

        for (VAR_6 = 0; VAR_6 < FUNC_13(VAR_8->professionInfos); VAR_6++) {
            PROFESSION_INFO* VAR_9 = FUNC_14(VAR_8->professionInfos, VAR_6);

            if (FUNC_1(VAR_2, "%*s  Profession Info Entry %0d:\n", VAR_3, "", 1 + VAR_6) <= 0)
                goto err;

            if (VAR_9->registrationNumber != ((void*)0)) {
                if (FUNC_1(VAR_2, "%*s    registrationNumber: ", VAR_3, "") <= 0
                    || FUNC_0(VAR_2, VAR_9->registrationNumber) <= 0
                    || FUNC_1(VAR_2, "\n") <= 0)
                    goto err;
            }

            if (VAR_9->namingAuthority != ((void*)0)) {
                if (FUNC_6(VAR_0, VAR_9->namingAuthority, VAR_2, VAR_3 + 2) <= 0)
                    goto err;
            }

            if (VAR_9->professionItems != ((void*)0)) {

                if (FUNC_1(VAR_2, "%*s    Info Entries:\n", VAR_3, "") <= 0)
                    goto err;
                for (VAR_7 = 0; VAR_7 < FUNC_11(VAR_9->professionItems); VAR_7++) {
                    ASN1_STRING* VAR_10 = FUNC_12(VAR_9->professionItems, VAR_7);

                    if (FUNC_1(VAR_2, "%*s      ", VAR_3, "") <= 0
                        || FUNC_0(VAR_2, VAR_10) <= 0
                        || FUNC_1(VAR_2, "\n") <= 0)
                        goto err;
                }
            }

            if (VAR_9->professionOIDs != ((void*)0)) {
                if (FUNC_1(VAR_2, "%*s    Profession OIDs:\n", VAR_3, "") <= 0)
                    goto err;
                for (VAR_7 = 0; VAR_7 < FUNC_9(VAR_9->professionOIDs); VAR_7++) {
                    ASN1_OBJECT* VAR_11 = FUNC_10(VAR_9->professionOIDs, VAR_7);
                    const char *VAR_12 = FUNC_3(FUNC_4(VAR_11));
                    char VAR_13[128];

                    FUNC_5(VAR_13, sizeof(VAR_13), VAR_11, 1);
                    if (FUNC_1(VAR_2, "%*s      %s%s%s%s\n", VAR_3, "",
                                   VAR_12 ? VAR_12 : "", VAR_12 ? " (" : "",
                                   VAR_13, VAR_12 ? ")" : "") <= 0)
                        goto err;
                }
            }
        }
    }
    return 1;

err:
    return -1;
}
