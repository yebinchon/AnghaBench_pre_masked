
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidmap {int nr_free; void* page; } ;
struct pid_namespace {int last_pid; struct pidmap* pidmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pidmap*,int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct pid_namespace*,struct pidmap*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct pid_namespace*,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,void*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct pid_namespace *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = VAR_7->last_pid;
 struct pidmap *VAR_13;

 VAR_11 = VAR_12 + 1;
 if (VAR_11 >= VAR_5)
  VAR_11 = VAR_4;
 VAR_9 = VAR_11 & VAR_1;
 VAR_13 = &VAR_7->pidmap[VAR_11/VAR_0];
 VAR_10 = (VAR_5 + VAR_0 - 1)/VAR_0 - !VAR_9;
 for (VAR_8 = 0; VAR_8 <= VAR_10; ++VAR_8) {
  if (FUNC_11(!VAR_13->page)) {
   void *VAR_14 = FUNC_4(VAR_3, VAR_2);




   FUNC_8(&VAR_6);
   if (VAR_13->page)
    FUNC_3(VAR_14);
   else
    VAR_13->page = VAR_14;
   FUNC_9(&VAR_6);
   if (FUNC_11(!VAR_13->page))
    break;
  }
  if (FUNC_5(FUNC_1(&VAR_13->nr_free))) {
   do {
    if (!FUNC_10(VAR_9, VAR_13->page)) {
     FUNC_0(&VAR_13->nr_free);
     FUNC_7(VAR_7, VAR_12, VAR_11);
     return VAR_11;
    }
    VAR_9 = FUNC_2(VAR_13, VAR_9);
    VAR_11 = FUNC_6(VAR_7, VAR_13, VAR_9);






   } while (VAR_9 < VAR_0 && VAR_11 < VAR_5 &&
     (VAR_8 != VAR_10 || VAR_11 < VAR_12 ||
         !((VAR_12+1) & VAR_1)));
  }
  if (VAR_13 < &VAR_7->pidmap[(VAR_5-1)/VAR_0]) {
   ++VAR_13;
   VAR_9 = 0;
  } else {
   VAR_13 = &VAR_7->pidmap[0];
   VAR_9 = VAR_4;
   if (FUNC_11(VAR_12 == VAR_9))
    break;
  }
  VAR_11 = FUNC_6(VAR_7, VAR_13, VAR_9);
 }
 return -1;
}
