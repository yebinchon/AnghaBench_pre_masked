
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_provider*,int) ;

void
FUNC_1(struct g_provider *VAR_2, int VAR_3)
{

 VAR_2->flags |= VAR_1;
 if (!(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2, VAR_3);
}
