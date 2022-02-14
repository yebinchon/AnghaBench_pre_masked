
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bintime {int dummy; } ;
struct devstat {scalar_t__ start_count; scalar_t__ end_count; int sequence0; struct bintime busy_from; int sequence1; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bintime*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(struct devstat *VAR_2, const struct bintime *VAR_3)
{

 FUNC_4(&VAR_1, VAR_0);


 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(&VAR_2->sequence1, 1);





 if (VAR_2->start_count == VAR_2->end_count) {
  if (VAR_3 != ((void*)0))
   VAR_2->busy_from = *VAR_3;
  else
   FUNC_3(&VAR_2->busy_from);
 }
 VAR_2->start_count++;
 FUNC_2(&VAR_2->sequence0, 1);
 FUNC_0();
}
