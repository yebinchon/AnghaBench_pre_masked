
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atexit_fn {int dummy; } ;
struct atexit {scalar_t__ ind; struct atexit_fn* fns; struct atexit* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct atexit* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct atexit*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct atexit_fn *VAR_3)
{
 static struct atexit VAR_4;
 struct atexit *VAR_5;

 FUNC_0(&VAR_2);
 if ((VAR_5 = VAR_1) == ((void*)0))
  VAR_1 = VAR_5 = &VAR_4;
 else while (VAR_5->ind >= VAR_0) {
  struct atexit *VAR_6;
  VAR_6 = VAR_1;
         FUNC_1(&VAR_2);
  if ((VAR_5 = (struct atexit *)FUNC_3(sizeof(*VAR_5))) == ((void*)0))
   return (-1);
  FUNC_0(&VAR_2);
  if (VAR_6 != VAR_1) {

   FUNC_1(&VAR_2);
   FUNC_2(VAR_5);
   FUNC_0(&VAR_2);
   VAR_5 = VAR_1;
   continue;
  }
  VAR_5->ind = 0;
  VAR_5->next = VAR_1;
  VAR_1 = VAR_5;
 }
 VAR_5->fns[VAR_5->ind++] = *VAR_3;
 FUNC_1(&VAR_2);
 return 0;
}
