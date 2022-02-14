
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; } ;
typedef int lwpid_t ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (size_t const) ;
 struct thread* FUNC_6 (struct thread*) ;

__attribute__((used)) static void
FUNC_7(struct thread **VAR_1)
{
 static struct thread * const VAR_2 = (void *)(uintptr_t)1;
 static const size_t VAR_3 = sizeof(lwpid_t) * 2;
 size_t VAR_4;

 if (*VAR_1 == ((void*)0)) {
  FUNC_3(VAR_0);
  return;
 }

 if (*VAR_1 == VAR_2) {
  FUNC_0('l');
  *VAR_1 = ((void*)0);
  goto sendit;
 }

 FUNC_0('m');

 for (VAR_4 = 0;
     *VAR_1 != ((void*)0) && FUNC_5(VAR_3 + 1);
     *VAR_1 = FUNC_6(*VAR_1), VAR_4++) {
  if (VAR_4 > 0)
   FUNC_1(',');
  FUNC_4((*VAR_1)->td_tid);
 }





 if (*VAR_1 == ((void*)0) && VAR_4 > 0)
  *VAR_1 = VAR_2;

sendit:
 FUNC_2();
}
