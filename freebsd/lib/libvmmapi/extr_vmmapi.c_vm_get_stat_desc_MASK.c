
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_stat_desc {int index; char const* desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct vm_stat_desc*) ;

const char *
FUNC_1(struct vmctx *VAR_1, int VAR_2)
{
 static struct vm_stat_desc VAR_3;

 VAR_3.index = VAR_2;
 if (FUNC_0(VAR_1->fd, VAR_0, &VAR_3) == 0)
  return (VAR_3.desc);
 else
  return (((void*)0));
}
