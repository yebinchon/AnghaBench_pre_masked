
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mf_filebuffer {char* buffer; struct mf_filebuffer* next; int * file; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 struct mf_filebuffer* VAR_4 ;
 int FUNC_4 (int *,char*,int,size_t) ;

__attribute__((used)) static void
FUNC_5 (FILE *VAR_5)
{



  int VAR_6;
  size_t VAR_7 = VAR_0;
  int VAR_8;
  char *VAR_9 = FUNC_3 (VAR_7);
  struct mf_filebuffer *VAR_10 = FUNC_3 (sizeof (struct mf_filebuffer));
  FUNC_0 ((VAR_9 != ((void*)0)) && (VAR_10 != ((void*)0)));


  VAR_10->file = VAR_5;
  VAR_10->buffer = VAR_9;
  VAR_10->next = VAR_4;
  VAR_4 = VAR_10;


  VAR_8 = FUNC_1 (VAR_5) == 2 ? VAR_3 : (FUNC_2 (FUNC_1 (VAR_5)) ? VAR_2 : VAR_1);

  VAR_6 = FUNC_4 (VAR_5, VAR_9, VAR_8, VAR_7);
  FUNC_0 (VAR_6 == 0);
}
