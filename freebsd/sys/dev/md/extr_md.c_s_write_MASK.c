
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indir {int shift; uintptr_t* array; scalar_t__ used; } ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct indir*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,void*) ;

__attribute__((used)) static int
FUNC_4(struct indir *VAR_4, off_t VAR_5, uintptr_t VAR_6)
{
 struct indir *VAR_7, *VAR_8[10];
 int VAR_9, VAR_10;
 uintptr_t VAR_11;

 if (VAR_2 > 1)
  FUNC_3("s_write(%jd, %p)\n", (intmax_t)VAR_5, (void *)VAR_6);
 VAR_11 = 0;
 VAR_10 = 0;
 VAR_7 = VAR_4;
 for (;;) {
  VAR_8[VAR_10++] = VAR_7;
  if (VAR_7->shift) {
   VAR_9 = (VAR_5 >> VAR_7->shift) & VAR_1;
   VAR_11 = VAR_7->array[VAR_9];
   if (VAR_11 != 0) {
    VAR_7 = (struct indir *)VAR_11;
    continue;
   }

   VAR_7->array[VAR_9] =
       (uintptr_t)FUNC_2(VAR_7->shift - VAR_3);
   if (VAR_7->array[VAR_9] == 0)
    return (VAR_0);
   VAR_7->used++;
   VAR_11 = VAR_7->array[VAR_9];
   VAR_7 = (struct indir *)VAR_11;
   continue;
  }

  VAR_9 = VAR_5 & VAR_1;
  VAR_11 = VAR_7->array[VAR_9];
  if (VAR_11 != 0)
   VAR_7->used--;
  VAR_7->array[VAR_9] = VAR_6;
  if (VAR_6 != 0)
   VAR_7->used++;
  break;
 }
 if (VAR_7->used != 0 || VAR_10 == 1)
  return (0);
 VAR_10--;
 while (VAR_7->used == 0 && VAR_7 != VAR_4) {
  VAR_10--;
  VAR_9 = (VAR_5 >> VAR_8[VAR_10]->shift) & VAR_1;
  VAR_11 = VAR_8[VAR_10]->array[VAR_9];
  FUNC_0(VAR_11 == (uintptr_t)VAR_7, ("md screwed up"));
  FUNC_1(VAR_7);
  VAR_8[VAR_10]->array[VAR_9] = 0;
  VAR_8[VAR_10]->used--;
  VAR_7 = VAR_8[VAR_10];
 }
 return (0);
}
