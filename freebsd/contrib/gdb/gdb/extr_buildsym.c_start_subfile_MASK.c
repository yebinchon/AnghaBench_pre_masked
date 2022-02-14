
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfile {scalar_t__ language; struct subfile* next; int * name; int * debugformat; int * line_vector; int * dirname; } ;
typedef enum language { ____Placeholder_language } language ;


 scalar_t__ FUNC_0 (int *,char*) ;
 struct subfile* VAR_0 ;
 void* FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int ,int) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 struct subfile* VAR_5 ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6 (char *VAR_6, char *VAR_7)
{
  struct subfile *VAR_8;




  for (VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->next)
    {
      if (FUNC_0 (VAR_8->name, VAR_6) == 0)
 {
   VAR_0 = VAR_8;
   return;
 }
    }





  VAR_8 = (struct subfile *) FUNC_5 (sizeof (struct subfile));
  FUNC_2 ((char *) VAR_8, 0, sizeof (struct subfile));
  VAR_8->next = VAR_5;
  VAR_5 = VAR_8;
  VAR_0 = VAR_8;


  VAR_8->name = (VAR_6 == ((void*)0)) ? ((void*)0) : FUNC_3 (VAR_6, FUNC_4 (VAR_6));
  VAR_8->dirname =
    (VAR_7 == ((void*)0)) ? ((void*)0) : FUNC_3 (VAR_7, FUNC_4 (VAR_7));


  VAR_8->line_vector = ((void*)0);
  VAR_8->language = FUNC_1 (VAR_8->name);
  if (VAR_8->language == VAR_4 &&
      VAR_8->next != ((void*)0))
    {
      VAR_8->language = VAR_8->next->language;
    }



  VAR_8->debugformat = ((void*)0);






  if (VAR_8->name)
    {
      struct subfile *VAR_9;
      enum language VAR_10 = FUNC_1 (VAR_8->name);

      if (VAR_10 == VAR_2 || VAR_10 == VAR_3)
 for (VAR_9 = VAR_5; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
   if (VAR_9->language == VAR_1)
     VAR_9->language = VAR_10;
    }


  if (VAR_8->language == VAR_1
      && VAR_8->next != ((void*)0)
      && (VAR_8->next->language == VAR_2
   || VAR_8->next->language == VAR_3))
    {
      VAR_8->language = VAR_8->next->language;
    }
}
