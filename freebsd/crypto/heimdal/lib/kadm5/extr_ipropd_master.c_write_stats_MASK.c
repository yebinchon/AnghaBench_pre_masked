
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct sockaddr {int dummy; } ;
typedef int str ;
struct TYPE_4__ {int sa; } ;
struct TYPE_5__ {char* name; int flags; struct TYPE_5__* next; int seen; scalar_t__ version; TYPE_1__ addr; } ;
typedef TYPE_2__ slave ;
typedef int * rtbl_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,char*,int,int *) ;
 scalar_t__ FUNC_5 (int ,struct sockaddr*,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (char*,int,char*,unsigned int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(krb5_context VAR_8, slave *VAR_9, uint32_t VAR_10)
{
    char VAR_11[100];
    rtbl_t VAR_12;
    time_t VAR_13 = FUNC_15(((void*)0));
    FILE *VAR_14;

    VAR_14 = FUNC_6(VAR_8);
    if (VAR_14 == ((void*)0))
 return;

    FUNC_2(VAR_8, VAR_13, VAR_11, sizeof(VAR_11), VAR_7);
    FUNC_1(VAR_14, "Status for slaves, last updated: %s\n\n", VAR_11);

    FUNC_1(VAR_14, "Master version: %lu\n\n", (unsigned long)VAR_10);

    VAR_12 = FUNC_9();
    if (VAR_12 == ((void*)0)) {
 FUNC_0(VAR_14);
 return;
    }

    FUNC_7(VAR_12, VAR_3, 0);
    FUNC_7(VAR_12, VAR_1, 0);
    FUNC_7(VAR_12, VAR_6, VAR_0);
    FUNC_7(VAR_12, VAR_5, 0);
    FUNC_7(VAR_12, VAR_4, 0);

    FUNC_13(VAR_12, "  ");
    FUNC_12(VAR_12, VAR_3, "");

    while (VAR_9) {
 krb5_address VAR_15;
 krb5_error_code VAR_16;
 FUNC_8(VAR_12, VAR_3, VAR_9->name);
 VAR_16 = FUNC_5 (VAR_8,
         (struct sockaddr*)&VAR_9->addr.sa, &VAR_15);
 if(VAR_16 == 0) {
     FUNC_4(&VAR_15, VAR_11, sizeof(VAR_11), ((void*)0));
     FUNC_3(VAR_8, &VAR_15);
     FUNC_8(VAR_12, VAR_1, VAR_11);
 } else
     FUNC_8(VAR_12, VAR_1, "<unknown>");

 FUNC_14(VAR_11, sizeof(VAR_11), "%u", (unsigned)VAR_9->version);
 FUNC_8(VAR_12, VAR_6, VAR_11);

 if (VAR_9->flags & VAR_2)
     FUNC_8(VAR_12, VAR_5, "Down");
 else
     FUNC_8(VAR_12, VAR_5, "Up");

 VAR_16 = FUNC_2(VAR_8, VAR_9->seen, VAR_11, sizeof(VAR_11), VAR_7);
 FUNC_8(VAR_12, VAR_4, VAR_11);

 VAR_9 = VAR_9->next;
    }

    FUNC_11(VAR_12, VAR_14);
    FUNC_10(VAR_12);

    FUNC_0(VAR_14);
}
