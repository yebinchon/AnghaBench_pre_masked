
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int (* to_close ) (int) ;int (* to_xclose ) (struct target_ops*,int) ;} ;


 int FUNC_0 (struct target_ops*,int) ;
 int FUNC_1 (int) ;

void
FUNC_2 (struct target_ops *VAR_0, int VAR_1)
{
  if (VAR_0->to_xclose != ((void*)0))
    VAR_0->to_xclose (VAR_0, VAR_1);
  else if (VAR_0->to_close != ((void*)0))
    VAR_0->to_close (VAR_1);
}
