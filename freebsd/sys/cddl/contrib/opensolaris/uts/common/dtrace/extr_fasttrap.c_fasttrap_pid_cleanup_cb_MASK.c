
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ftp_marked; scalar_t__ ftp_ccount; scalar_t__ ftp_mcount; scalar_t__ ftp_rcount; struct TYPE_5__* ftp_next; int ftp_provid; int ftp_mtx; int ftp_retired; } ;
typedef TYPE_1__ fasttrap_provider_t ;
struct TYPE_6__ {int ftb_mtx; int ftb_data; } ;
typedef TYPE_2__ fasttrap_bucket_t ;
typedef int dtrace_provider_id_t ;
struct TYPE_7__ {int fth_nent; TYPE_2__* fth_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_9)
{
 fasttrap_provider_t **VAR_10, *VAR_11;
 fasttrap_bucket_t *VAR_12;
 dtrace_provider_id_t VAR_13;
 int VAR_14, VAR_15 = 0, VAR_16;

 FUNC_4(&VAR_3);
 while (!VAR_2 || VAR_15 > 0) {
  VAR_4 = 0;
  FUNC_6(&VAR_3);

  VAR_15 = 0;







  for (VAR_14 = 0; VAR_14 < VAR_6.fth_nent; VAR_14++) {
   VAR_12 = &VAR_6.fth_table[VAR_14];
   FUNC_7(&VAR_12->ftb_mtx);
   VAR_10 = (fasttrap_provider_t **)&VAR_12->ftb_data;

   while ((VAR_11 = *VAR_10) != ((void*)0)) {
    if (!VAR_11->ftp_marked) {
     VAR_10 = &VAR_11->ftp_next;
     continue;
    }

    FUNC_7(&VAR_11->ftp_mtx);







    if (VAR_11->ftp_ccount != 0 ||
        VAR_11->ftp_mcount != 0) {
     FUNC_8(&VAR_11->ftp_mtx);
     VAR_11->ftp_marked = 0;
     continue;
    }

    if (!VAR_11->ftp_retired || VAR_11->ftp_rcount != 0)
     VAR_11->ftp_marked = 0;

    FUNC_8(&VAR_11->ftp_mtx);
    VAR_13 = VAR_11->ftp_provid;
    if ((VAR_16 = FUNC_1(VAR_13)) != 0) {
     if (VAR_7 > VAR_5 / 2)
      (void) FUNC_0(VAR_13);

     if (VAR_16 == VAR_0)
      VAR_11->ftp_marked = 1;

     VAR_15 += VAR_11->ftp_marked;
     VAR_10 = &VAR_11->ftp_next;
    } else {
     *VAR_10 = VAR_11->ftp_next;
     FUNC_2(VAR_11);
    }
   }
   FUNC_8(&VAR_12->ftb_mtx);
  }
  FUNC_4(&VAR_3);
  if (VAR_15 > 0 || VAR_4 ||
      VAR_2) {
   FUNC_6(&VAR_3);
   FUNC_9("ftclean", VAR_8);
   FUNC_4(&VAR_3);
  } else
   FUNC_5(&VAR_1, &VAR_3,
       0, "ftcl", 0);
 }




 FUNC_10(&VAR_2);
 FUNC_6(&VAR_3);

 FUNC_3();
}
