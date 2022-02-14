
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_14__ {int match; int timenow; int * path; int * subject_id; int subject; } ;
typedef TYPE_1__ hx509_query ;
typedef int hx509_path ;
typedef int hx509_name ;
typedef int hx509_context ;
typedef scalar_t__ hx509_certs ;
typedef TYPE_2__* hx509_cert ;
typedef int ai ;
struct TYPE_16__ {int * keyIdentifier; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_3__ AuthorityKeyIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int ,scalar_t__,TYPE_1__*,TYPE_2__**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char**) ;
 int FUNC_10 (int ,int ,int,char*,...) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(hx509_context VAR_6,
     time_t VAR_7,
     hx509_certs VAR_8,
     hx509_path *VAR_9,
     hx509_certs VAR_10,
     hx509_cert VAR_11,
     hx509_cert *VAR_12)
{
    AuthorityKeyIdentifier VAR_13;
    hx509_query VAR_14;
    int VAR_15;

    *VAR_12 = ((void*)0);
    FUNC_11(&VAR_13, 0, sizeof(VAR_13));

    FUNC_1(&VAR_14);

    if (!FUNC_12(VAR_11->data)) {
 VAR_14.match |= VAR_2;
 VAR_14.subject = FUNC_0(VAR_11);
    } else {
 VAR_15 = FUNC_2(VAR_11->data, &VAR_13);
 if (VAR_15) {
     FUNC_10(VAR_6, 0, VAR_0,
       "Subjectless certificate missing AuthKeyID");
     return VAR_0;
 }

 if (VAR_13.keyIdentifier == ((void*)0)) {
     FUNC_4(&VAR_13);
     FUNC_10(VAR_6, 0, VAR_0,
       "Subjectless certificate missing keyIdentifier "
       "inside AuthKeyID");
     return VAR_0;
 }

 VAR_14.subject_id = VAR_13.keyIdentifier;
 VAR_14.match = VAR_3;
    }

    VAR_14.path = VAR_9;
    VAR_14.match |= VAR_5;

    if (VAR_10) {
 VAR_14.timenow = VAR_7;
 VAR_14.match |= VAR_4;

 VAR_15 = FUNC_6(VAR_6, VAR_10, &VAR_14, VAR_12);
 if (VAR_15 == 0) {
     FUNC_4(&VAR_13);
     return 0;
 }
 VAR_14.match &= ~VAR_4;
    }

    if (VAR_8) {
 VAR_15 = FUNC_6(VAR_6, VAR_8, &VAR_14, VAR_12);
 if (VAR_15 == 0) {
     FUNC_4(&VAR_13);
     return VAR_15;
 }
    }
    FUNC_4(&VAR_13);

    {
 hx509_name VAR_16;
 char *VAR_17;

 VAR_15 = FUNC_5(VAR_11, &VAR_16);
 if (VAR_15) {
     FUNC_7(VAR_6);
     return VAR_1;
 }
 VAR_15 = FUNC_9(VAR_16, &VAR_17);
 FUNC_8(&VAR_16);
 if (VAR_15) {
     FUNC_7(VAR_6);
     return VAR_1;
 }

 FUNC_10(VAR_6, 0, VAR_1,
          "Failed to find issuer for "
          "certificate with subject: '%s'", VAR_17);
 FUNC_3(VAR_17);
    }
    return VAR_1;
}
