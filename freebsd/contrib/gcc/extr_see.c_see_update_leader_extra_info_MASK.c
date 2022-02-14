
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_entry {scalar_t__ extra_info; } ;
struct see_entry_extra_info {scalar_t__ relevancy; int source_mode_signed; int source_mode; int source_mode_unsigned; } ;



 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct web_entry* FUNC_2 (struct web_entry*) ;
 scalar_t__ FUNC_3 (struct web_entry*,struct web_entry*) ;

__attribute__((used)) static bool
FUNC_4 (struct web_entry *VAR_1, struct web_entry *VAR_2)
{
  struct see_entry_extra_info *VAR_3, *VAR_4;

  VAR_1 = FUNC_2 (VAR_1);
  VAR_2 = FUNC_2 (VAR_2);

  if (FUNC_3 (VAR_1, VAR_2))
    return 1;

  VAR_3 = (struct see_entry_extra_info *) VAR_1->extra_info;
  VAR_4 = (struct see_entry_extra_info *) VAR_2->extra_info;

  FUNC_0 (VAR_3 && VAR_4);

  if (VAR_4->relevancy == 131)
    {
      VAR_3->relevancy = 131;
      return 0;
    }
  switch (VAR_3->relevancy)
    {
    case 131:
      break;
    case 130:
      switch (VAR_4->relevancy)
 {
 case 130:
   break;
 case 132:
   VAR_3->relevancy = VAR_4->relevancy;
   VAR_3->source_mode_signed = VAR_4->source_mode_signed;
   VAR_3->source_mode_unsigned = VAR_4->source_mode_unsigned;
   break;
 case 129:
 case 128:
   VAR_3->relevancy = VAR_4->relevancy;
   VAR_3->source_mode = VAR_4->source_mode;
   break;
 default:
   FUNC_1 ();
 }
      break;
    case 129:
      switch (VAR_4->relevancy)
 {
 case 129:

   VAR_3->source_mode =
     (VAR_3->source_mode > VAR_4->source_mode) ?
     VAR_3->source_mode : VAR_4->source_mode;
   break;
 case 130:
   break;
 case 128:

   VAR_3->relevancy = 131;
   break;
 case 132:
   if (VAR_4->source_mode_signed == VAR_0)
     VAR_3->relevancy = 131;
   else

     VAR_3->source_mode =
       (VAR_3->source_mode > VAR_4->source_mode_signed) ?
       VAR_3->source_mode : VAR_4->source_mode_signed;
   break;
 default:
   FUNC_1 ();
 }
      break;

    case 128:
      switch (VAR_4->relevancy)
 {
 case 129:

   VAR_3->relevancy = 131;
   break;
 case 130:
   break;
 case 128:

   VAR_3->source_mode =
     (VAR_3->source_mode > VAR_4->source_mode) ?
     VAR_3->source_mode : VAR_4->source_mode;
   break;
 case 132:
   if (VAR_4->source_mode_unsigned == VAR_0)
     VAR_3->relevancy = 131;
   else

     VAR_3->source_mode =
       (VAR_3->source_mode > VAR_4->source_mode_unsigned) ?
       VAR_3->source_mode : VAR_4->source_mode_unsigned;
   break;
 default:
   FUNC_1 ();
 }
      break;
    case 132:
      if (VAR_3->source_mode_signed != VAR_0
   && VAR_3->source_mode_unsigned != VAR_0)
 {
   switch (VAR_4->relevancy)
     {
     case 129:
       VAR_3->relevancy = 129;
       VAR_3->source_mode =
  (VAR_3->source_mode_signed > VAR_4->source_mode) ?
  VAR_3->source_mode_signed : VAR_4->source_mode;
       break;
     case 130:
       break;
     case 128:
       VAR_3->relevancy = 128;
       VAR_3->source_mode =
  (VAR_3->source_mode_unsigned > VAR_4->source_mode) ?
  VAR_3->source_mode_unsigned : VAR_4->source_mode;
       break;
     case 132:
       if (VAR_4->source_mode_unsigned != VAR_0)
  VAR_3->source_mode_unsigned =
    (VAR_3->source_mode_unsigned >
    VAR_4->source_mode_unsigned) ?
    VAR_3->source_mode_unsigned :
    VAR_4->source_mode_unsigned;
       if (VAR_4->source_mode_signed != VAR_0)
  VAR_3->source_mode_signed =
    (VAR_3->source_mode_signed >
    VAR_4->source_mode_signed) ?
    VAR_3->source_mode_signed : VAR_4->source_mode_signed;
       break;
     default:
       FUNC_1 ();
     }
 }
      else if (VAR_3->source_mode_signed == VAR_0)
 {
   FUNC_0 (VAR_3->source_mode_unsigned != VAR_0);
   switch (VAR_4->relevancy)
     {
     case 129:
       VAR_3->relevancy = 131;
       break;
     case 130:
       break;
     case 128:
       VAR_3->relevancy = 128;
       VAR_3->source_mode =
  (VAR_3->source_mode_unsigned > VAR_4->source_mode) ?
  VAR_3->source_mode_unsigned : VAR_4->source_mode;
       break;
     case 132:
       if (VAR_4->source_mode_unsigned == VAR_0)
  VAR_3->relevancy = 131;
       else
  VAR_3->source_mode_unsigned =
    (VAR_3->source_mode_unsigned >
    VAR_4->source_mode_unsigned) ?
    VAR_3->source_mode_unsigned :
    VAR_4->source_mode_unsigned;
       break;
     default:
       FUNC_1 ();
     }
 }
      else
 {
   FUNC_0 (VAR_3->source_mode_unsigned == VAR_0);
   FUNC_0 (VAR_3->source_mode_signed != VAR_0);
   switch (VAR_4->relevancy)
     {
     case 129:
       VAR_3->relevancy = 129;
       VAR_3->source_mode =
  (VAR_3->source_mode_signed > VAR_4->source_mode) ?
  VAR_3->source_mode_signed : VAR_4->source_mode;
       break;
     case 130:
       break;
     case 128:
       VAR_3->relevancy = 131;
       break;
     case 132:
       if (VAR_4->source_mode_signed == VAR_0)
  VAR_3->relevancy = 131;
       else
  VAR_3->source_mode_signed =
    (VAR_3->source_mode_signed >
    VAR_4->source_mode_signed) ?
    VAR_3->source_mode_signed : VAR_4->source_mode_signed;
       break;
     default:
       FUNC_1 ();
     }
 }
      break;
    default:

      FUNC_1 ();
    }

  return 0;
}
