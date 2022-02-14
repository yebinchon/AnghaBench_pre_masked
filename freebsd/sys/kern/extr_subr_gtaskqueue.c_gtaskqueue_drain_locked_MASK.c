
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {int dummy; } ;
struct gtask {int ta_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct gtaskqueue*,struct gtask*,char*) ;
 scalar_t__ FUNC_1 (struct gtaskqueue*,struct gtask*) ;

__attribute__((used)) static void
FUNC_2(struct gtaskqueue *VAR_1, struct gtask *VAR_2)
{
 while ((VAR_2->ta_flags & VAR_0) || FUNC_1(VAR_1, VAR_2))
  FUNC_0(VAR_1, VAR_2, "gtq_drain");
}
