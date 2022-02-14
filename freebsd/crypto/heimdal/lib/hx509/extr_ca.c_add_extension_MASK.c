
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hx509_context ;
typedef int heim_oid ;
typedef int heim_octet_string ;
typedef int ext ;
struct TYPE_8__ {int extnValue; int extnID; int * critical; } ;
struct TYPE_7__ {int extensions; } ;
typedef TYPE_1__ TBSCertificate ;
typedef TYPE_2__ Extension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int,char*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_7(hx509_context VAR_2,
       TBSCertificate *VAR_3,
       int VAR_4,
       const heim_oid *VAR_5,
       const heim_octet_string *VAR_6)
{
    Extension VAR_7;
    int VAR_8;

    FUNC_6(&VAR_7, 0, sizeof(VAR_7));

    if (VAR_4) {
 VAR_7.critical = FUNC_5(sizeof(*VAR_7.critical));
 if (VAR_7.critical == ((void*)0)) {
     VAR_8 = VAR_0;
     FUNC_4(VAR_2, 0, VAR_8, "Out of memory");
     goto out;
 }
 *VAR_7.critical = VAR_1;
    }

    VAR_8 = FUNC_2(VAR_5, &VAR_7.extnID);
    if (VAR_8) {
 FUNC_4(VAR_2, 0, VAR_8, "Out of memory");
 goto out;
    }
    VAR_8 = FUNC_1(VAR_6, &VAR_7.extnValue);
    if (VAR_8) {
 FUNC_4(VAR_2, 0, VAR_8, "Out of memory");
 goto out;
    }
    VAR_8 = FUNC_0(VAR_3->extensions, &VAR_7);
    if (VAR_8) {
 FUNC_4(VAR_2, 0, VAR_8, "Out of memory");
 goto out;
    }
out:
    FUNC_3(&VAR_7);
    return VAR_8;
}
