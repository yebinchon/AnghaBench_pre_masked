
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lang_wild_statement_type ;
struct TYPE_7__ {int * the_bfd; } ;
typedef TYPE_1__ lang_input_statement_type ;
typedef int callback_t ;
struct TYPE_8__ {TYPE_1__* usrdata; } ;
typedef TYPE_2__ bfd ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,void*) ;

__attribute__((used)) static void
FUNC_3 (lang_wild_statement_type *VAR_1,
  lang_input_statement_type *VAR_2,
  callback_t VAR_3,
  void *VAR_4)
{
  if (VAR_2->the_bfd == ((void*)0)
      || ! FUNC_0 (VAR_2->the_bfd, VAR_0))
    FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4);
  else
    {
      bfd *VAR_5;



      VAR_5 = FUNC_1 (VAR_2->the_bfd, ((void*)0));
      while (VAR_5 != ((void*)0))
 {





   if (VAR_5->usrdata != ((void*)0))
     {
       FUNC_2 (VAR_1, VAR_5->usrdata, VAR_3, VAR_4);
     }

   VAR_5 = FUNC_1 (VAR_2->the_bfd, VAR_5);
 }
    }
}
