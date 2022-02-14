
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {int tq_queue; } ;
struct gtask {int ta_flags; } ;


 int FUNC_0 (struct gtask*,int ,int ,int ,struct gtask*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct gtask*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct gtaskqueue*,struct gtask*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct gtaskqueue *VAR_4)
{
 struct gtask VAR_5;

 if (FUNC_1(&VAR_4->tq_queue))
  return;
 FUNC_0(&VAR_5, 0, VAR_1, VAR_2, &VAR_5);
 FUNC_2(&VAR_4->tq_queue, &VAR_5, VAR_3);
 VAR_5.ta_flags |= VAR_0;





 while (VAR_5.ta_flags & VAR_0)
  FUNC_3(VAR_4, &VAR_5, "gtq_qdrain");
}
