
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_logconfig_t ;
struct TYPE_9__ {int * logconfig; int magic; int lock; int messages; scalar_t__ debug_level; scalar_t__ module_count; int * modules; scalar_t__ category_count; int * categories; int * mctx; } ;
typedef TYPE_1__ isc_log_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (int **) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

isc_result_t
FUNC_11(isc_mem_t *VAR_5, isc_log_t **VAR_6, isc_logconfig_t **VAR_7) {
 isc_log_t *VAR_8;
 isc_logconfig_t *VAR_9 = ((void*)0);
 isc_result_t VAR_10;

 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0) && *VAR_6 == ((void*)0));
 FUNC_1(VAR_7 == ((void*)0) || *VAR_7 == ((void*)0));

 VAR_8 = FUNC_7(VAR_5, sizeof(*VAR_8));
 if (VAR_8 != ((void*)0)) {
  VAR_8->mctx = VAR_5;
  VAR_8->categories = ((void*)0);
  VAR_8->category_count = 0;
  VAR_8->modules = ((void*)0);
  VAR_8->module_count = 0;
  VAR_8->debug_level = 0;

  FUNC_0(VAR_8->messages);

  VAR_10 = FUNC_9(&VAR_8->lock);
  if (VAR_10 != VAR_1) {
   FUNC_8(VAR_5, VAR_8, sizeof(*VAR_8));
   return (VAR_10);
  }
  VAR_8->magic = VAR_2;

  FUNC_3(VAR_8, VAR_3);
  FUNC_4(VAR_8, VAR_4);
  VAR_10 = FUNC_5(VAR_8, &VAR_9);

 } else
  VAR_10 = VAR_0;

 if (VAR_10 == VAR_1)
  VAR_10 = FUNC_10(VAR_9);

 if (VAR_10 == VAR_1) {
  VAR_8->logconfig = VAR_9;

  *VAR_6 = VAR_8;
  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_9;

 } else {
  if (VAR_9 != ((void*)0))
   FUNC_6(&VAR_9);
  if (VAR_8 != ((void*)0))
   FUNC_2(&VAR_8);
 }

 return (VAR_10);
}
