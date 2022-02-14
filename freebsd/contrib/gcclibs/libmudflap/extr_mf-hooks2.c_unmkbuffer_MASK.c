
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mf_filebuffer {struct mf_filebuffer* next; struct mf_filebuffer* buffer; int * file; } ;
typedef int FILE ;


 int FUNC_0 (struct mf_filebuffer*) ;
 struct mf_filebuffer* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_1)
{
  struct mf_filebuffer *VAR_2 = VAR_0;
  struct mf_filebuffer **VAR_3 = & VAR_0;
  while (VAR_2 != ((void*)0))
    {
      if (VAR_2->file == VAR_1)
        {
          *VAR_3 = VAR_2->next;
          FUNC_0 (VAR_2->buffer);
          FUNC_0 (VAR_2);
          return;
        }
      VAR_3 = & VAR_2->next;
      VAR_2 = VAR_2->next;
    }
}
