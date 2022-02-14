
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmemopen_cookie {int len; int off; int buf; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, char *VAR_1, int VAR_2)
{
 struct fmemopen_cookie *VAR_3 = VAR_0;

 if (VAR_2 > VAR_3->len - VAR_3->off)
  VAR_2 = VAR_3->len - VAR_3->off;

 if (VAR_2 == 0)
  return (0);

 FUNC_0(VAR_1, VAR_3->buf + VAR_3->off, VAR_2);

 VAR_3->off += VAR_2;

 return (VAR_2);
}
