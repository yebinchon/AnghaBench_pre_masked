
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
struct file_data {scalar_t__ desc; int bufsize; int eof; scalar_t__ buffered; void* buffer; int name; int stat; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (int,int ,scalar_t__) ;
 int FUNC_3 (struct file_data*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int) ;
 void* FUNC_7 (int) ;

__attribute__((used)) static bool
FUNC_8 (struct file_data *VAR_2, bool VAR_3)
{

  if (VAR_2->desc < 0)
    {

      VAR_2->bufsize = sizeof (word);
      VAR_2->buffer = FUNC_7 (VAR_2->bufsize);
    }
  else
    {
      VAR_2->bufsize = FUNC_2 (sizeof (word),
         FUNC_0 (VAR_2->stat),
         VAR_0 - 2 * sizeof (word));
      VAR_2->buffer = FUNC_7 (VAR_2->bufsize);

      if (! VAR_3)
 {


   bool VAR_4 = FUNC_6 (VAR_2->desc, 1);
   off_t VAR_5;
   FUNC_3 (VAR_2, VAR_2->bufsize);
   VAR_5 = VAR_2->buffered;

   if (! VAR_4)
     {





       if (FUNC_4 (VAR_2->desc, - VAR_5, VAR_1) == -1)
  FUNC_5 (VAR_2->name);
       FUNC_6 (VAR_2->desc, 0);
       VAR_2->buffered = 0;
       VAR_2->eof = 0;
     }

   return FUNC_1 (VAR_2->buffer, VAR_5);
 }
    }

  VAR_2->buffered = 0;
  VAR_2->eof = 0;
  return 0;
}
