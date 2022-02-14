
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_request ;
typedef int hx509_name ;
typedef int hx509_context ;
struct TYPE_5__ {int subject; int subjectPKInfo; } ;
struct TYPE_6__ {TYPE_1__ certificationRequestInfo; } ;
typedef TYPE_1__ CertificationRequestInfo ;
typedef TYPE_2__ CertificationRequest ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (void*,size_t,TYPE_2__*,size_t*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int,char*,char const*) ;
 int FUNC_9 (char const*,void**,size_t*) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

int
FUNC_12(hx509_context VAR_1,
       const char *VAR_2,
       hx509_request *VAR_3)
{
    CertificationRequest VAR_4;
    CertificationRequestInfo *VAR_5;
    hx509_name VAR_6;
    size_t VAR_7, VAR_8;
    void *VAR_9;
    int VAR_10;

    if (FUNC_11(VAR_2, "PKCS10:", 7) != 0) {
 FUNC_8(VAR_1, 0, VAR_0,
          "unsupport type in %s", VAR_2);
 return VAR_0;
    }
    VAR_2 += 7;



    VAR_10 = FUNC_9(VAR_2, &VAR_9, &VAR_7);
    if (VAR_10) {
 FUNC_8(VAR_1, 0, VAR_10, "Failed to map file %s", VAR_2);
 return VAR_10;
    }

    VAR_10 = FUNC_1(VAR_9, VAR_7, &VAR_4, &VAR_8);
    FUNC_10(VAR_9);
    if (VAR_10) {
 FUNC_8(VAR_1, 0, VAR_10, "Failed to decode %s", VAR_2);
 return VAR_10;
    }

    VAR_10 = FUNC_5(VAR_1, VAR_3);
    if (VAR_10) {
 FUNC_2(&VAR_4);
 return VAR_10;
    }

    VAR_5 = &VAR_4.certificationRequestInfo;

    VAR_10 = FUNC_6(VAR_1, *VAR_3,
        &VAR_5->subjectPKInfo);
    if (VAR_10) {
 FUNC_2(&VAR_4);
 FUNC_4(VAR_3);
 return VAR_10;
    }

    VAR_10 = FUNC_0(&VAR_5->subject, &VAR_6);
    if (VAR_10) {
 FUNC_2(&VAR_4);
 FUNC_4(VAR_3);
 return VAR_10;
    }
    VAR_10 = FUNC_7(VAR_1, *VAR_3, VAR_6);
    FUNC_3(&VAR_6);
    FUNC_2(&VAR_4);
    if (VAR_10) {
 FUNC_4(VAR_3);
 return VAR_10;
    }

    return 0;
}
