
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int word ;
struct TYPE_2__ {size_t st_size; int st_mode; } ;
struct file_data {scalar_t__ desc; size_t bufsize; size_t buffered; void* buffer; TYPE_1__ stat; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct file_data*,size_t) ;
 int FUNC_2 () ;
 void* FUNC_3 (void*,size_t) ;

__attribute__((used)) static void
FUNC_4 (struct file_data *VAR_1)
{
  size_t VAR_2;

  if (VAR_1->desc < 0)
    {

      return;
    }

  if (FUNC_0 (VAR_1->stat.st_mode))
    {





      size_t VAR_3 = VAR_1->stat.st_size;
      VAR_2 = VAR_3 + 2 * sizeof (word) - VAR_3 % sizeof (word);
      if (VAR_3 != VAR_1->stat.st_size || VAR_2 < VAR_3
   || VAR_0 <= VAR_2)
 FUNC_2 ();

      if (VAR_1->bufsize < VAR_2)
 {
   VAR_1->bufsize = VAR_2;
   VAR_1->buffer = FUNC_3 (VAR_1->buffer, VAR_2);
 }





      if (VAR_1->buffered <= VAR_3)
 {
   FUNC_1 (VAR_1, VAR_3 + 1 - VAR_1->buffered);
   if (VAR_1->buffered <= VAR_3)
     return;
 }
    }




  FUNC_1 (VAR_1, VAR_1->bufsize - VAR_1->buffered);

  if (VAR_1->buffered)
    {
      while (VAR_1->buffered == VAR_1->bufsize)
 {
   if (VAR_0 / 2 - sizeof (word) < VAR_1->bufsize)
     FUNC_2 ();
   VAR_1->bufsize *= 2;
   VAR_1->buffer = FUNC_3 (VAR_1->buffer, VAR_1->bufsize);
   FUNC_1 (VAR_1, VAR_1->bufsize - VAR_1->buffered);
 }



      VAR_2 = VAR_1->buffered + 2 * sizeof (word);
      VAR_1->bufsize = VAR_2 - VAR_2 % sizeof (word);
      VAR_1->buffer = FUNC_3 (VAR_1->buffer, VAR_1->bufsize);
    }
}
