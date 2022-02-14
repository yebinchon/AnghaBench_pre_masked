
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct quotafile*) ;

void
FUNC_2(struct quotafile *VAR_0)
{

 if (VAR_0->fd != -1)
  FUNC_0(VAR_0->fd);
 FUNC_1(VAR_0);
}
