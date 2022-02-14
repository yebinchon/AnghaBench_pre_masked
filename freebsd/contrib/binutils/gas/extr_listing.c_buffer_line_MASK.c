
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int at_end; int linenum; scalar_t__ pos; int filename; } ;
typedef TYPE_1__ file_info_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static char *
FUNC_5 (file_info_type *VAR_5, char *VAR_6, unsigned int VAR_7)
{
  unsigned int VAR_8 = 0;
  int VAR_9;

  char *VAR_10 = VAR_6;


  if (VAR_5->at_end)
    return "";


  if (!VAR_4 || VAR_5 != VAR_4)
    {
      if (VAR_3)
 {
   VAR_4->pos = FUNC_4 (VAR_3);
   FUNC_0 (VAR_3);
 }

      VAR_4 = VAR_5;
      VAR_3 = FUNC_2 (VAR_5->filename, VAR_1);
      if (VAR_3 == ((void*)0))
 {
   VAR_5->at_end = 1;
   return "";
 }


      if (VAR_5->pos)
 FUNC_3 (VAR_3, VAR_5->pos, VAR_2);
    }

  VAR_9 = FUNC_1 (VAR_3);


  VAR_7 -= 1;

  while (VAR_9 != VAR_0 && VAR_9 != '\n')
    {
      if (VAR_8 < VAR_7)
 *VAR_10++ = VAR_9;
      VAR_8++;

      VAR_9 = FUNC_1 (VAR_3);

    }
  if (VAR_9 == VAR_0)
    {
      VAR_5->at_end = 1;
      if (VAR_8 + 2 < VAR_7)
 {
   *VAR_10++ = '.';
   *VAR_10++ = '.';
   *VAR_10++ = '.';
 }
    }
  VAR_5->linenum++;
  *VAR_10++ = 0;
  return VAR_6;
}
