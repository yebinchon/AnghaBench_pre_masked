
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pthread {int flags; scalar_t__ state; int critical_count; int lock; scalar_t__ cycle; scalar_t__ force_exit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct pthread* VAR_4 ;
 int FUNC_3 (struct pthread*) ;
 int FUNC_4 (struct pthread*) ;
 int FUNC_5 (scalar_t__*,scalar_t__,int *,int ) ;
 int FUNC_6 (scalar_t__*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct pthread *VAR_5)
{
 uint32_t VAR_6;

 if (FUNC_2((VAR_5->flags &
  (VAR_2 | VAR_3))
  != VAR_2))
  return;
 if (VAR_5 == VAR_4)
  return;
 if (VAR_5->force_exit)
  return;




 FUNC_3(VAR_5);






 VAR_5->critical_count++;
 FUNC_0(VAR_5, &(VAR_5)->lock);
 while ((VAR_5->flags & VAR_2) != 0) {
  VAR_5->cycle++;
  VAR_6 = VAR_5->cycle;


  FUNC_6(&VAR_5->cycle, VAR_0, 0);





  if (VAR_5->state == VAR_1)
   break;
  VAR_5->flags |= VAR_3;
  FUNC_1(VAR_5, &(VAR_5)->lock);
  FUNC_5(&VAR_5->cycle, VAR_6, ((void*)0), 0);
  FUNC_0(VAR_5, &(VAR_5)->lock);
 }
 FUNC_1(VAR_5, &(VAR_5)->lock);
 VAR_5->critical_count--;

 FUNC_4(VAR_5);
}
