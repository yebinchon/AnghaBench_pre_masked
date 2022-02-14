
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* s; } ;
struct tar {TYPE_1__ line; } ;
struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 void* FUNC_3 (void const*,char,int) ;
 int FUNC_4 (char*,void const*,int) ;
 int FUNC_5 (struct archive_read*,size_t*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct archive_read *VAR_3, struct tar *VAR_4, const char **VAR_5,
    ssize_t VAR_6, size_t *VAR_7)
{
 ssize_t VAR_8;
 ssize_t VAR_9 = 0;
 const void *VAR_10;
 const char *VAR_11;
 void *VAR_12;

 FUNC_5(VAR_3, VAR_7);

 VAR_10 = FUNC_0(VAR_3, 1, &VAR_8);
 if (VAR_8 <= 0)
  return (VAR_1);
 VAR_11 = VAR_10;
 VAR_12 = FUNC_3(VAR_10, '\n', VAR_8);

 if (VAR_12 != ((void*)0)) {
  VAR_8 = 1 + ((const char *)VAR_12) - VAR_11;
  if (VAR_8 > VAR_6) {
   FUNC_1(&VAR_3->archive,
       VAR_0,
       "Line too long");
   return (VAR_1);
  }
  *VAR_7 = VAR_8;
  *VAR_5 = VAR_11;
  return (VAR_8);
 }
 *VAR_7 = VAR_8;

 for (;;) {
  if (VAR_9 + VAR_8 > VAR_6) {
   FUNC_1(&VAR_3->archive,
       VAR_0,
       "Line too long");
   return (VAR_1);
  }
  if (FUNC_2(&VAR_4->line, VAR_9 + VAR_8) == ((void*)0)) {
   FUNC_1(&VAR_3->archive, VAR_2,
       "Can't allocate working buffer");
   return (VAR_1);
  }
  FUNC_4(VAR_4->line.s + VAR_9, VAR_10, VAR_8);
  FUNC_5(VAR_3, VAR_7);
  VAR_9 += VAR_8;

  if (VAR_12 != ((void*)0)) {
   *VAR_5 = VAR_4->line.s;
   return (VAR_9);
  }

  VAR_10 = FUNC_0(VAR_3, 1, &VAR_8);
  if (VAR_8 <= 0)
   return (VAR_1);
  VAR_11 = VAR_10;
  VAR_12 = FUNC_3(VAR_10, '\n', VAR_8);

  if (VAR_12 != ((void*)0)) {
   VAR_8 = 1 + ((const char *)VAR_12) - VAR_11;
  }
  *VAR_7 = VAR_8;
 }
}
