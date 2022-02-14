
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct status_map_st {int member_0; char* member_1; } ;
struct TYPE_3__ {int * failure_info; int text; int status; } ;
typedef TYPE_1__ TS_STATUS_INFO ;
typedef int BIO ;


 long FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char const**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,struct status_map_st const*,int *) ;

int FUNC_8(BIO *VAR_0, TS_STATUS_INFO *VAR_1)
{
    static const char *VAR_2[] = {
        "Granted.",
        "Granted with modifications.",
        "Rejected.",
        "Waiting.",
        "Revocation warning.",
        "Revoked."
    };
    static const struct status_map_st VAR_3[] = {
        {134,
         "unrecognized or unsupported algorithm identifier"},
        {132,
         "transaction not permitted or supported"},
        {133,
         "the data submitted has the wrong format"},
        {130,
         "the TSA's time source is not available"},
        {128,
         "the requested TSA policy is not supported by the TSA"},
        {129,
         "the requested extension is not supported by the TSA"},
        {135,
         "the additional information requested could not be understood "
         "or is not available"},
        {131,
         "the request cannot be handled due to system failure"},
        {-1, ((void*)0)}
    };
    long VAR_4;
    int VAR_5, VAR_6 = 0;

    FUNC_2(VAR_0, "Status: ");
    VAR_4 = FUNC_0(VAR_1->status);
    if (0 <= VAR_4 && VAR_4 < (long)FUNC_4(VAR_2))
        FUNC_2(VAR_0, "%s\n", VAR_2[VAR_4]);
    else
        FUNC_2(VAR_0, "out of bounds\n");

    FUNC_2(VAR_0, "Status description: ");
    for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_1->text); ++VAR_5) {
        if (VAR_5 > 0)
            FUNC_3(VAR_0, "\t");
        FUNC_1(VAR_0, FUNC_6(VAR_1->text, VAR_5), 0);
        FUNC_3(VAR_0, "\n");
    }
    if (VAR_5 == 0)
        FUNC_2(VAR_0, "unspecified\n");

    FUNC_2(VAR_0, "Failure info: ");
    if (VAR_1->failure_info != ((void*)0))
        VAR_6 = FUNC_7(VAR_0, VAR_3, VAR_1->failure_info);
    if (VAR_6 == 0)
        FUNC_2(VAR_0, "unspecified");
    FUNC_2(VAR_0, "\n");

    return 1;
}
