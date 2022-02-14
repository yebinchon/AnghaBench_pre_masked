
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; char* s; } ;
struct shar {TYPE_1__ work; } ;
struct archive_write {int archive; } ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_4, struct shar *VAR_5, const char *VAR_6, size_t VAR_7)
{
 char *VAR_8;
 size_t VAR_9;


 VAR_9 = VAR_5->work.length + 62;
 if (FUNC_2(&VAR_5->work, VAR_9) == ((void*)0)) {
  FUNC_1(&VAR_4->archive, VAR_3, "Out of memory");
  return (VAR_1);
 }

 VAR_8 = VAR_5->work.s + VAR_5->work.length;
 *VAR_8++ = FUNC_0(VAR_7);
 while (VAR_7 >= 3) {
  FUNC_3(VAR_6, VAR_8);
  VAR_7 -= 3;
  VAR_6 += 3;
  VAR_8 += 4;
 }
 if (VAR_7 != 0) {
  char VAR_10[3];
  VAR_10[0] = VAR_6[0];
  if (VAR_7 == 1)
   VAR_10[1] = '\0';
  else
   VAR_10[1] = VAR_6[1];
  VAR_10[2] = '\0';
  FUNC_3(VAR_10, VAR_8);
  VAR_8 += 4;
 }
 *VAR_8++ = '\n';
 if ((VAR_8 - VAR_5->work.s) > (ptrdiff_t)(VAR_5->work.length + 62)) {
  FUNC_1(&VAR_4->archive,
      VAR_0, "Buffer overflow");
  return (VAR_1);
 }
 VAR_5->work.length = VAR_8 - VAR_5->work.s;
 return (VAR_2);
}
