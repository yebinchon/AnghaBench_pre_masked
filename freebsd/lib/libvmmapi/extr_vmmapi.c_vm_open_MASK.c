
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; int lowmem_limit; char* name; scalar_t__ memflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vmctx* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (struct vmctx*) ;
 int FUNC_5 (char*) ;

struct vmctx *
FUNC_6(const char *VAR_1)
{
 struct vmctx *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct vmctx) + FUNC_3(VAR_1) + 1);
 FUNC_0(VAR_2 != ((void*)0));

 VAR_2->fd = -1;
 VAR_2->memflags = 0;
 VAR_2->lowmem_limit = 3 * VAR_0;
 VAR_2->name = (char *)(VAR_2 + 1);
 FUNC_2(VAR_2->name, VAR_1);

 if ((VAR_2->fd = FUNC_5(VAR_2->name)) < 0)
  goto err;

 return (VAR_2);
err:
 FUNC_4(VAR_2);
 return (((void*)0));
}
