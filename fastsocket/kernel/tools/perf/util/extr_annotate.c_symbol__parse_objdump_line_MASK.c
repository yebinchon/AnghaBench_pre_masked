
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int end; int start; } ;
struct map {int dummy; } ;
struct disasm_line {int dummy; } ;
struct annotation {TYPE_1__* src; } ;
typedef int s64 ;
struct TYPE_2__ {int source; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct disasm_line*) ;
 struct disasm_line* FUNC_1 (int,char*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char**,size_t*,int *) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (struct map*,int ) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char**,int) ;
 struct annotation* FUNC_8 (struct symbol*) ;

__attribute__((used)) static int FUNC_9(struct symbol *VAR_0, struct map *VAR_1,
          FILE *VAR_2, size_t VAR_3)
{
 struct annotation *VAR_4 = FUNC_8(VAR_0);
 struct disasm_line *VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;
 s64 VAR_12, VAR_13 = -1;

 if (FUNC_3(&VAR_6, &VAR_11, VAR_2) < 0)
  return -1;

 if (!VAR_6)
  return -1;

 while (VAR_11 != 0 && FUNC_4(VAR_6[VAR_11 - 1]))
  VAR_6[--VAR_11] = '\0';

 VAR_10 = FUNC_6(VAR_6, '\n');
 if (VAR_10)
  *VAR_10 = 0;

 VAR_12 = -1;
 VAR_7 = VAR_6;




 VAR_8 = VAR_6;
 while (*VAR_8) {
  if (*VAR_8 != ' ')
   break;
  VAR_8++;
 }

 if (*VAR_8) {



  VAR_12 = FUNC_7(VAR_8, &VAR_9, 16);
  if (*VAR_9 != ':' || VAR_8 == VAR_9 || VAR_9[1] == '\0')
   VAR_12 = -1;
 }

 if (VAR_12 != -1) {
  u64 VAR_14 = FUNC_5(VAR_1, VAR_0->start),
      VAR_15 = FUNC_5(VAR_1, VAR_0->end);

  VAR_13 = VAR_12 - VAR_14;
  if (VAR_13 < 0 || (u64)VAR_12 > VAR_15)
   VAR_13 = -1;
  else
   VAR_7 = VAR_9 + 1;
 }

 VAR_5 = FUNC_1(VAR_13, VAR_7, VAR_3);
 FUNC_2(VAR_6);

 if (VAR_5 == ((void*)0))
  return -1;

 FUNC_0(&VAR_4->src->source, VAR_5);

 return 0;
}
