
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {int tq_queue; } ;
struct gtask {int ta_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct gtask*,struct gtask*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct gtaskqueue*,struct gtask*) ;

__attribute__((used)) static int
FUNC_2(struct gtaskqueue *VAR_3, struct gtask *VAR_4)
{

 if (VAR_4->ta_flags & VAR_1)
  FUNC_0(&VAR_3->tq_queue, VAR_4, VAR_4, VAR_2);
 VAR_4->ta_flags &= ~VAR_1;
 return (FUNC_1(VAR_3, VAR_4) ? VAR_0 : 0);
}
