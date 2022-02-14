
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
struct TYPE_18__ {int principal; TYPE_4__* generation; } ;
struct TYPE_15__ {TYPE_6__ entry; } ;
typedef TYPE_1__ hdb_entry_ex ;
struct TYPE_17__ {scalar_t__ gen; int usec; int time; } ;
struct TYPE_16__ {int (* hdb__put ) (int ,TYPE_2__*,unsigned int,int ,int ) ;} ;
typedef TYPE_2__ HDB ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int ,TYPE_2__*,unsigned int,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_6__*,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,TYPE_2__*,int *) ;
 int FUNC_6 (int ,TYPE_2__*,TYPE_6__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,char*) ;
 TYPE_4__* FUNC_9 (int) ;
 int FUNC_10 (int ,TYPE_2__*,unsigned int,int ,int ) ;

krb5_error_code
FUNC_11(krb5_context VAR_2, HDB *VAR_3, unsigned VAR_4, hdb_entry_ex *VAR_5)
{
    krb5_data VAR_6, VAR_7;
    int VAR_8;


    VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_5);
    if (VAR_8)
 return VAR_8;

    if(VAR_5->entry.generation == ((void*)0)) {
 struct timeval VAR_9;
 VAR_5->entry.generation = FUNC_9(sizeof(*VAR_5->entry.generation));
 if(VAR_5->entry.generation == ((void*)0)) {
     FUNC_8(VAR_2, VAR_0, "malloc: out of memory");
     return VAR_0;
 }
 FUNC_0(&VAR_9, ((void*)0));
 VAR_5->entry.generation->time = VAR_9.tv_sec;
 VAR_5->entry.generation->usec = VAR_9.tv_usec;
 VAR_5->entry.generation->gen = 0;
    } else
 VAR_5->entry.generation->gen++;

    VAR_8 = FUNC_6(VAR_2, VAR_3, &VAR_5->entry);
    if (VAR_8)
 return VAR_8;

    FUNC_4(VAR_2, VAR_5->entry.principal, &VAR_6);


    VAR_8 = FUNC_5(VAR_2, VAR_3, &VAR_6);
    if (VAR_8) {
 FUNC_7(&VAR_6);
 return VAR_8;
    }
    FUNC_3(VAR_2, &VAR_5->entry, &VAR_7);
    VAR_8 = VAR_3->hdb__put(VAR_2, VAR_3, VAR_4 & VAR_1, VAR_6, VAR_7);
    FUNC_7(&VAR_7);
    FUNC_7(&VAR_6);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

    return VAR_8;
}
