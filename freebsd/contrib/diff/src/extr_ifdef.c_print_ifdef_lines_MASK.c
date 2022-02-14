
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {size_t from; size_t upto; struct file_data* file; } ;
struct file_data {char** linbuf; } ;
typedef size_t lin ;
typedef int FILE ;


 char* FUNC_0 (int *,char const*,struct file_data const*,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (char const* const,int,int,int *) ;
 int FUNC_2 (char const* const,char const* const,int ,int ) ;
 int FUNC_3 (char,int *) ;

__attribute__((used)) static void
FUNC_4 (register FILE *VAR_1, char const *VAR_2,
     struct group const *VAR_3)
{
  struct file_data const *VAR_4 = VAR_3->file;
  char const * const *VAR_5 = VAR_4->linbuf;
  lin VAR_6 = VAR_3->from, VAR_7 = VAR_3->upto;

  if (!VAR_1)
    return;


  if (!VAR_0 && VAR_2[0] == '%')
    {
      if (VAR_2[1] == 'l' && VAR_2[2] == '\n' && !VAR_2[3] && VAR_6 < VAR_7)
 {
   FUNC_1 (VAR_5[VAR_6], sizeof (char),
    VAR_5[VAR_7] + (VAR_5[VAR_7][-1] != '\n') - VAR_5[VAR_6],
    VAR_1);
   return;
 }
      if (VAR_2[1] == 'L' && !VAR_2[2])
 {
   FUNC_1 (VAR_5[VAR_6], sizeof (char),
    VAR_5[VAR_7] - VAR_5[VAR_6], VAR_1);
   return;
 }
    }

  for (; VAR_6 < VAR_7; VAR_6++)
    {
      register char VAR_8;
      register char const *VAR_9 = VAR_2;

      while ((VAR_8 = *VAR_9++) != 0)
 {
   char const *VAR_10 = VAR_9;
   if (VAR_8 == '%')
     switch ((VAR_8 = *VAR_9++))
       {
       case '%':
  break;

       case 'l':
  FUNC_2 (VAR_5[VAR_6],
          (VAR_5[VAR_6 + 1]
    - (VAR_5[VAR_6 + 1][-1] == '\n')),
          0, 0);
  continue;

       case 'L':
  FUNC_2 (VAR_5[VAR_6], VAR_5[VAR_6 + 1], 0, 0);
  continue;

       default:
  VAR_9 = FUNC_0 (VAR_1, VAR_9 - 2, VAR_4, VAR_6, 0);
  if (VAR_9)
    continue;
  VAR_8 = '%';
  VAR_9 = VAR_10;
  break;
       }

   FUNC_3 (VAR_8, VAR_1);
 }
    }
}
