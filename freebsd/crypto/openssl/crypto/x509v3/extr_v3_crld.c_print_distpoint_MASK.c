
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int entries; } ;
typedef TYPE_2__ X509_NAME ;
struct TYPE_6__ {int relativename; int fullname; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ name; } ;
typedef TYPE_3__ DIST_POINT_NAME ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_1, DIST_POINT_NAME *VAR_2, int VAR_3)
{
    if (VAR_2->type == 0) {
        FUNC_0(VAR_1, "%*sFull Name:\n", VAR_3, "");
        FUNC_3(VAR_1, VAR_2->name.fullname, VAR_3);
    } else {
        X509_NAME VAR_4;
        VAR_4.entries = VAR_2->name.relativename;
        FUNC_0(VAR_1, "%*sRelative Name:\n%*s", VAR_3, "", VAR_3 + 2, "");
        FUNC_2(VAR_1, &VAR_4, 0, VAR_0);
        FUNC_1(VAR_1, "\n");
    }
    return 1;
}
