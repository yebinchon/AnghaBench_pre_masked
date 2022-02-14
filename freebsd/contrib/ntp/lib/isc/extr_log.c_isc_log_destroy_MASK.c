
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_mem_t ;
struct TYPE_8__ {char* buffer; scalar_t__ magic; int * mctx; scalar_t__ module_count; int * modules; scalar_t__ category_count; int * categories; scalar_t__ debug_level; int text; int messages; int lock; int * logconfig; } ;
typedef TYPE_1__ isc_logmessage_t ;
typedef int isc_logconfig_t ;
typedef TYPE_1__ isc_log_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;

void
FUNC_8(isc_log_t **VAR_1) {
 isc_log_t *VAR_2;
 isc_logconfig_t *VAR_3;
 isc_mem_t *VAR_4;
 isc_logmessage_t *VAR_5;

 FUNC_3(VAR_1 != ((void*)0) && FUNC_4(*VAR_1));

 VAR_2 = *VAR_1;
 VAR_4 = VAR_2->mctx;

 if (VAR_2->logconfig != ((void*)0)) {
  VAR_3 = VAR_2->logconfig;
  VAR_2->logconfig = ((void*)0);
  FUNC_5(&VAR_3);
 }

 FUNC_0(&VAR_2->lock);

 while ((VAR_5 = FUNC_1(VAR_2->messages)) != ((void*)0)) {
  FUNC_2(VAR_2->messages, VAR_5, VAR_0);

  FUNC_6(VAR_4, VAR_5,
       sizeof(*VAR_5) + FUNC_7(VAR_5->text) + 1);
 }

 VAR_2->buffer[0] = '\0';
 VAR_2->debug_level = 0;
 VAR_2->categories = ((void*)0);
 VAR_2->category_count = 0;
 VAR_2->modules = ((void*)0);
 VAR_2->module_count = 0;
 VAR_2->mctx = ((void*)0);
 VAR_2->magic = 0;

 FUNC_6(VAR_4, VAR_2, sizeof(*VAR_2));

 *VAR_1 = ((void*)0);
}
