
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmemopen_cookie {struct fmemopen_cookie* buf; scalar_t__ own; } ;


 int FUNC_0 (struct fmemopen_cookie*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0)
{
 struct fmemopen_cookie *VAR_1 = VAR_0;

 if (VAR_1->own)
  FUNC_0(VAR_1->buf);

 FUNC_0(VAR_1);

 return (0);
}
