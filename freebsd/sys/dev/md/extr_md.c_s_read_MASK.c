
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indir {int shift; uintptr_t* array; } ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static uintptr_t
FUNC_1(struct indir *VAR_2, off_t VAR_3)
{
 struct indir *VAR_4;
 int VAR_5;
 uintptr_t VAR_6;

 if (VAR_1 > 1)
  FUNC_0("s_read(%jd)\n", (intmax_t)VAR_3);
 VAR_6 = 0;
 for (VAR_4 = VAR_2; VAR_4 != ((void*)0);) {
  if (VAR_4->shift) {
   VAR_5 = (VAR_3 >> VAR_4->shift) & VAR_0;
   VAR_6 = VAR_4->array[VAR_5];
   VAR_4 = (struct indir *)VAR_6;
   continue;
  }
  VAR_5 = VAR_3 & VAR_0;
  return (VAR_4->array[VAR_5]);
 }
 return (0);
}
