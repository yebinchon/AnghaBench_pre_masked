
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* ftp_next; int ftp_provid; int ftp_mtx; } ;
typedef TYPE_1__ fasttrap_provider_t ;
struct TYPE_9__ {int ftb_mtx; int ftb_data; } ;
typedef TYPE_2__ fasttrap_bucket_t ;
struct TYPE_12__ {int fth_nent; TYPE_2__* fth_table; } ;
struct TYPE_11__ {int fth_nent; TYPE_2__* fth_table; } ;
struct TYPE_10__ {int fth_nent; TYPE_2__* fth_table; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (char*,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_7__ VAR_15 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_5__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_4__ VAR_19 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int*,int *,int ,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_20 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(void)
{
 int VAR_21, VAR_22 = 0;
 if (VAR_12 != VAR_0 &&
     FUNC_4(VAR_12) != 0)
  return (-1);





 for (VAR_21 = 0; VAR_21 < VAR_16.fth_nent; VAR_21++) {
  fasttrap_provider_t **VAR_23, *VAR_24;
  fasttrap_bucket_t *VAR_25 = &VAR_16.fth_table[VAR_21];

  FUNC_12(&VAR_25->ftb_mtx);
  VAR_23 = (fasttrap_provider_t **)&VAR_25->ftb_data;
  while ((VAR_24 = *VAR_23) != ((void*)0)) {







   FUNC_12(&VAR_24->ftp_mtx);
   FUNC_13(&VAR_24->ftp_mtx);

   if (FUNC_5(VAR_24->ftp_provid) != 0) {
    VAR_22 = 1;
    VAR_23 = &VAR_24->ftp_next;
   } else {
    *VAR_23 = VAR_24->ftp_next;
    FUNC_6(VAR_24);
   }
  }

  FUNC_13(&VAR_25->ftb_mtx);
 }

 if (VAR_22) {
  (void) FUNC_3("fasttrap", &VAR_13, ((void*)0),
      &VAR_12);

  return (-1);
 }






 FUNC_0(VAR_3 == &VAR_11);
 VAR_3 = ((void*)0);

 FUNC_0(VAR_1 == &VAR_10);
 VAR_1 = ((void*)0);

 FUNC_0(VAR_2 == &VAR_10);
 VAR_2 = ((void*)0);

 FUNC_9(&VAR_7);
 VAR_6 = 1;

 FUNC_15(&VAR_5);
 FUNC_10(&VAR_6, &VAR_7, 0, "ftcld",
     0);
 VAR_8 = ((void*)0);
 FUNC_8(&VAR_7);
 FUNC_1(VAR_20, VAR_17);

 for (VAR_21 = 0; VAR_21 < VAR_19.fth_nent; VAR_21++)
  FUNC_11(&VAR_19.fth_table[VAR_21].ftb_mtx);
 for (VAR_21 = 0; VAR_21 < VAR_16.fth_nent; VAR_21++)
  FUNC_11(&VAR_16.fth_table[VAR_21].ftb_mtx);
 for (VAR_21 = 0; VAR_21 < VAR_15.fth_nent; VAR_21++)
  FUNC_11(&VAR_15.fth_table[VAR_21].ftb_mtx);

 FUNC_7(VAR_19.fth_table,
     VAR_19.fth_nent * sizeof (fasttrap_bucket_t));
 VAR_19.fth_nent = 0;

 FUNC_7(VAR_16.fth_table,
     VAR_16.fth_nent * sizeof (fasttrap_bucket_t));
 VAR_16.fth_nent = 0;

 FUNC_7(VAR_15.fth_table,
     VAR_15.fth_nent * sizeof (fasttrap_bucket_t));
 VAR_15.fth_nent = 0;


 FUNC_2(VAR_4);
 FUNC_11(&VAR_9);
 FUNC_14(&VAR_18);


 return (0);
}
