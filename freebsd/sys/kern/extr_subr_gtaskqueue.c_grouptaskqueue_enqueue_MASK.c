
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {int tq_flags; int tq_context; int (* tq_enqueue ) (int ) ;int tq_queue; } ;
struct gtask {int ta_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gtask*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gtaskqueue*) ;
 int FUNC_2 (struct gtaskqueue*) ;
 int FUNC_3 (struct gtask*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

int
FUNC_6(struct gtaskqueue *VAR_5, struct gtask *VAR_6)
{






 FUNC_1(VAR_5);
 if (VAR_6->ta_flags & VAR_1) {
  FUNC_2(VAR_5);
  return (0);
 }
 if (VAR_6->ta_flags & VAR_2) {
  FUNC_2(VAR_5);
  return (VAR_0);
 }
 FUNC_0(&VAR_5->tq_queue, VAR_6, VAR_4);
 VAR_6->ta_flags |= VAR_1;
 FUNC_2(VAR_5);
 if ((VAR_5->tq_flags & VAR_3) == 0)
  VAR_5->tq_enqueue(VAR_5->tq_context);
 return (0);
}
