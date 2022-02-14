
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {scalar_t__ fd; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vmctx*) ;

void
FUNC_4(struct vmctx *VAR_0)
{
 FUNC_1(VAR_0 != ((void*)0));

 if (VAR_0->fd >= 0)
  FUNC_2(VAR_0->fd);
 FUNC_0(VAR_0->name);

 FUNC_3(VAR_0);
}
