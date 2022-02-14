
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ offsetT ;
struct TYPE_4__ {TYPE_2__* frag; } ;
typedef TYPE_1__ list_info_type ;
struct TYPE_5__ {scalar_t__ fr_fix; unsigned int fr_address; int* fr_literal; scalar_t__ fr_type; int fr_var; int fr_offset; struct TYPE_5__* fr_next; TYPE_1__* line; } ;
typedef TYPE_2__ fragS ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static unsigned int
FUNC_1 (list_info_type *VAR_4)
{
  int VAR_5;
  list_info_type *VAR_6 = VAR_4;
  unsigned int VAR_7 = ~(unsigned int) 0;
  fragS *VAR_8;
  fragS *VAR_9;
  unsigned int VAR_10;


  VAR_8 = VAR_4->frag;
  while (VAR_8 && VAR_8->line != VAR_4)
    VAR_8 = VAR_8->fr_next;

  VAR_9 = VAR_8;

  VAR_5 = 0;


  while (VAR_9 != (fragS *) ((void*)0) && VAR_9->line == VAR_6)
    {

      VAR_10 = 0;
      while ((offsetT) VAR_10 < VAR_9->fr_fix
      && VAR_5 < VAR_0 - 3)
 {
   if (VAR_7 == ~(unsigned int) 0)
     VAR_7 = VAR_9->fr_address / VAR_1;

   FUNC_0 (VAR_2 + VAR_5,
     "%02X",
     (VAR_9->fr_literal[VAR_10]) & 0xff);
   VAR_5 += 2;
   VAR_10++;
 }
      if (VAR_9->fr_type == VAR_3)
 {
   unsigned int VAR_11 = VAR_10;
   unsigned int VAR_12 = VAR_10;


   while (((offsetT) VAR_10
    < (VAR_9->fr_fix + VAR_9->fr_var * VAR_9->fr_offset))
   && VAR_5 < VAR_0 - 3)
     {
       if (VAR_7 == ~(unsigned int) 0)
  VAR_7 = VAR_9->fr_address / VAR_1;

       FUNC_0 (VAR_2 + VAR_5,
         "%02X",
         (VAR_9->fr_literal[VAR_12]) & 0xff);
       VAR_5 += 2;

       VAR_12++;
       VAR_10++;

       if ((offsetT) VAR_12 >= VAR_9->fr_fix + VAR_9->fr_var)
  VAR_12 = VAR_11;
     }
 }

      VAR_9 = VAR_9->fr_next;
    }
  VAR_2[VAR_5] = '\0';
  return VAR_7;
}
