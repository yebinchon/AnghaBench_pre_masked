
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _memstream {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct _memstream*) ;
 int FUNC_2 (struct _memstream*,int) ;

__attribute__((used)) static __inline int
FUNC_3(struct _memstream * __restrict VAR_1,
    char * __restrict VAR_2, size_t VAR_3)
{
 int VAR_4;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 != '_' && FUNC_0(VAR_4) == 0)
   goto name_found;
  VAR_2[VAR_5] = VAR_4;
 }
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == '_' || FUNC_0(VAR_4) != 0)
  return (VAR_0);

name_found:
 FUNC_2(VAR_1, VAR_4);
 VAR_2[VAR_5] = '\0';

 return (0);
}
