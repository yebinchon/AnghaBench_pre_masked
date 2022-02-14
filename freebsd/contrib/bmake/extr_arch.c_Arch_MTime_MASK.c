
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct ar_hdr {int AR_DATE; } ;
struct TYPE_4__ {scalar_t__ mtime; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 struct ar_hdr* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;

time_t
FUNC_4(GNode *VAR_3)
{
    struct ar_hdr *VAR_4;
    time_t VAR_5;
    char *VAR_6, *VAR_7;

    VAR_4 = FUNC_0(FUNC_1(VAR_0, VAR_3, &VAR_6),
        FUNC_1(VAR_1, VAR_3, &VAR_7),
        VAR_2);

    FUNC_2(VAR_6);
    FUNC_2(VAR_7);

    if (VAR_4 != ((void*)0)) {
 VAR_5 = (time_t)FUNC_3(VAR_4->AR_DATE, ((void*)0), 10);
    } else {
 VAR_5 = 0;
    }

    VAR_3->mtime = VAR_5;
    return (VAR_5);
}
