
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* module_data; } ;
typedef TYPE_1__ pam_handle_t ;
struct TYPE_10__ {void (* cleanup ) (TYPE_1__*,void*,int) ;void* data; struct TYPE_10__* next; int * name; } ;
typedef TYPE_3__ pam_data_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int * FUNC_5 (char const*) ;
 void FUNC_6 (TYPE_1__*,void*,int) ;

int
FUNC_7(pam_handle_t *VAR_2,
 const char *VAR_3,
 void *VAR_4,
 void (*VAR_5)(pam_handle_t *VAR_6,
  void *VAR_7,
  int VAR_8))
{
 pam_data_t *VAR_9;

 FUNC_0(VAR_3);
 for (VAR_9 = VAR_2->module_data; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
  if (FUNC_4(VAR_9->name, VAR_3) == 0) {
   if (VAR_9->cleanup)
    (VAR_9->cleanup)(VAR_2, VAR_9->data, VAR_1);
   VAR_9->data = VAR_4;
   VAR_9->cleanup = VAR_5;
   FUNC_2(VAR_1);
  }
 }
 if ((VAR_9 = FUNC_3(sizeof *VAR_9)) == ((void*)0))
  FUNC_2(VAR_0);
 if ((VAR_9->name = FUNC_5(VAR_3)) == ((void*)0)) {
  FUNC_1(VAR_9);
  FUNC_2(VAR_0);
 }
 VAR_9->data = VAR_4;
 VAR_9->cleanup = VAR_5;
 VAR_9->next = VAR_2->module_data;
 VAR_2->module_data = VAR_9;
 FUNC_2(VAR_1);
}
