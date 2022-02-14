
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmemopen_cookie {int size; int off; char* buf; int len; int bin; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2)
{
 struct fmemopen_cookie *VAR_3 = VAR_0;

 if (VAR_2 > VAR_3->size - VAR_3->off)
  VAR_2 = VAR_3->size - VAR_3->off;

 if (VAR_2 == 0)
  return (0);

 FUNC_0(VAR_3->buf + VAR_3->off, VAR_1, VAR_2);

 VAR_3->off += VAR_2;

 if (VAR_3->off > VAR_3->len)
  VAR_3->len = VAR_3->off;







 if (!VAR_3->bin && VAR_3->off < VAR_3->size && VAR_3->buf[VAR_3->off - 1] != '\0')
  VAR_3->buf[VAR_3->off] = '\0';

 return (VAR_2);
}
