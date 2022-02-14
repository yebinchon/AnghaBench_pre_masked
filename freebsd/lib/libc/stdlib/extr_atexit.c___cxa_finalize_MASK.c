
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dl_phdr_info {int dummy; } ;
struct TYPE_2__ {int (* std_func ) () ;int (* cxa_func ) (int ) ;} ;
struct atexit_fn {scalar_t__ fn_type; void* fn_dso; TYPE_1__ fn_ptr; int fn_arg; } ;
struct atexit {int ind; struct atexit_fn* fns; struct atexit* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct atexit* VAR_3 ;
 int FUNC_3 (struct dl_phdr_info*,int (*) (int )) ;
 int FUNC_4 (struct dl_phdr_info*) ;
 int FUNC_5 (void*,struct dl_phdr_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

void
FUNC_8(void *VAR_6)
{
 struct dl_phdr_info VAR_7;
 struct atexit *VAR_8;
 struct atexit_fn VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6 != ((void*)0)) {
  VAR_11 = FUNC_5(VAR_6, &VAR_7);
 } else {
  VAR_11 = 0;
  VAR_5 = 1;
 }

 FUNC_1(&VAR_4);
 for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
  for (VAR_10 = VAR_8->ind; --VAR_10 >= 0;) {
   if (VAR_8->fns[VAR_10].fn_type == VAR_1)
    continue;
   VAR_9 = VAR_8->fns[VAR_10];
   if (VAR_6 != ((void*)0) && VAR_6 != VAR_9.fn_dso) {

    if (!VAR_11 || VAR_5 ||
        !FUNC_3(&VAR_7,
        VAR_9.fn_ptr.cxa_func))
     continue;
   }




   VAR_8->fns[VAR_10].fn_type = VAR_1;
          FUNC_2(&VAR_4);


   if (VAR_9.fn_type == VAR_0)
    VAR_9.fn_ptr.cxa_func(VAR_9.fn_arg);
   else if (VAR_9.fn_type == VAR_2)
    VAR_9.fn_ptr.std_func();
   FUNC_1(&VAR_4);
  }
 }
 FUNC_2(&VAR_4);
 if (VAR_6 == ((void*)0))
  FUNC_0(&VAR_4);

 if (VAR_11 && !VAR_5 && &FUNC_4 != ((void*)0))
  FUNC_4(&VAR_7);
}
