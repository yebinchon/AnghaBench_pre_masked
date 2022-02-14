
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstream {int offset; int len; int* bufp; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*,struct memstream*,int,int) ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (struct memstream*,int) ;
 int FUNC_3 (struct memstream*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, const char *VAR_2, int VAR_3)
{
 struct memstream *VAR_4;
 ssize_t VAR_5;

 VAR_4 = VAR_1;
 if (!FUNC_2(VAR_4, VAR_4->offset + VAR_3))
  return (-1);
 VAR_5 = VAR_4->len - VAR_4->offset;
 if (VAR_3 < VAR_5)
  VAR_5 = VAR_3;
 FUNC_1(*VAR_4->bufp + VAR_4->offset, VAR_2, VAR_5);
 VAR_4->offset += VAR_5;
 FUNC_3(VAR_4);



 return (VAR_5);
}
