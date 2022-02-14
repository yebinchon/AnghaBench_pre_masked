
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_hdr {int AR_DATE; } ;
typedef int GNode ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,struct ar_hdr*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,char**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int,char*,long) ;

void
FUNC_6(GNode *VAR_3)
{
    FILE * VAR_4;
    struct ar_hdr VAR_5;
    char *VAR_6, *VAR_7;

    VAR_4 = FUNC_0(FUNC_1(VAR_0, VAR_3, &VAR_6),
     FUNC_1(VAR_1, VAR_3, &VAR_7),
     &VAR_5, "r+");

    FUNC_3(VAR_6);
    FUNC_3(VAR_7);

    FUNC_5(VAR_5.AR_DATE, sizeof(VAR_5.AR_DATE), "%-12ld", (long) VAR_2);

    if (VAR_4 != ((void*)0)) {
 (void)FUNC_4((char *)&VAR_5, sizeof(struct ar_hdr), 1, VAR_4);
 FUNC_2(VAR_4);
    }
}
