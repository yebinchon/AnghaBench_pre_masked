
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_6__ {scalar_t__ param; scalar_t__ wanted_type; int arg_num; int pointer_count; int wanted_type_name; int name; scalar_t__ char_lenient_flag; scalar_t__ writing_in_flag; scalar_t__ reading_from_flag; struct TYPE_6__* next; } ;
typedef TYPE_2__ format_wanted_type ;
struct TYPE_5__ {scalar_t__ (* type_promotes_to ) (scalar_t__) ;} ;
struct TYPE_7__ {scalar_t__ (* types_compatible_p ) (scalar_t__,scalar_t__) ;TYPE_1__ types; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (int ,char const*,int,scalar_t__,int,int ,scalar_t__,int) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 TYPE_3__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_20 (format_wanted_type *VAR_11, const char *VAR_12,
      int VAR_13)
{
  for (; VAR_11 != 0; VAR_11 = VAR_11->next)
    {
      tree VAR_14;
      tree VAR_15;
      tree VAR_16;
      tree VAR_17;
      int VAR_18;
      int VAR_19;
      int VAR_20;
      VAR_14 = VAR_11->param;
      VAR_15 = FUNC_6 (VAR_14);
      if (VAR_15 == VAR_5)
 continue;
      VAR_16 = VAR_15;
      VAR_20 = 0;
      VAR_17 = VAR_11->wanted_type;
      VAR_18 = VAR_11->arg_num;


      FUNC_15 (VAR_17);
      FUNC_15 (VAR_17 != VAR_10 || VAR_11->pointer_count);

      if (VAR_11->pointer_count == 0)
 VAR_17 = VAR_6.types.type_promotes_to (VAR_17);

      VAR_17 = FUNC_7 (VAR_17);

      FUNC_2 (VAR_14);



      for (VAR_19 = 0; VAR_19 < VAR_11->pointer_count; ++VAR_19)
 {
   if (FUNC_3 (VAR_15) == VAR_3)
     {
       VAR_15 = FUNC_6 (VAR_15);
       if (VAR_15 == VAR_5)
  break;


       if (VAR_11->writing_in_flag
    && VAR_19 == 0
    && VAR_14 != 0
    && FUNC_16 (VAR_14))
  FUNC_19 (VAR_2, "writing through null pointer "
    "(argument %d)", VAR_18);


       if (VAR_11->reading_from_flag
    && VAR_19 == 0
    && VAR_14 != 0
    && FUNC_16 (VAR_14))
  FUNC_19 (VAR_2, "reading through null pointer "
    "(argument %d)", VAR_18);

       if (VAR_14 != 0 && FUNC_3 (VAR_14) == VAR_0)
  VAR_14 = FUNC_4 (VAR_14, 0);
       else
  VAR_14 = 0;






       if (VAR_11->writing_in_flag
    && VAR_19 == 0
    && (FUNC_8 (VAR_15)
        || (VAR_14 != 0
     && (FUNC_0 (VAR_14)
         || (FUNC_1 (VAR_14)
      && FUNC_5 (VAR_14))))))
  FUNC_19 (VAR_2, "writing into constant object "
    "(argument %d)", VAR_18);




       if (VAR_19 > 0
    && VAR_7
    && (FUNC_8 (VAR_15)
        || FUNC_11 (VAR_15)
        || FUNC_9 (VAR_15)))
  FUNC_19 (VAR_2, "extra type qualifiers in format "
    "argument (argument %d)",
    VAR_18);

     }
   else
     {
       FUNC_14 (VAR_11->name, VAR_12, VAR_13,
       VAR_17, VAR_11->pointer_count,
       VAR_11->wanted_type_name, VAR_16,
       VAR_18);
       break;
     }
 }

      if (VAR_19 < VAR_11->pointer_count)
 continue;

      VAR_15 = FUNC_7 (VAR_15);




      if (VAR_11->char_lenient_flag)
 VAR_20 = (VAR_15 == VAR_4
     || VAR_15 == VAR_8
     || VAR_15 == VAR_9);


      if (VAR_6.types_compatible_p (VAR_17, VAR_15))
 continue;




      if (VAR_17 == VAR_10
   && (!VAR_7 || (VAR_19 == 1 && VAR_20)))
 continue;




      if (FUNC_3 (VAR_17) == VAR_1
   && FUNC_3 (VAR_15) == VAR_1
   && (!VAR_7 || VAR_19 == 0 || (VAR_19 == 1 && VAR_20))
   && (FUNC_10 (VAR_17)
       ? VAR_17 == FUNC_13 (VAR_15)
       : VAR_17 == FUNC_12 (VAR_15)))
 continue;


      if (VAR_17 == VAR_4
   && (!VAR_7 || VAR_19 < 2)
   && VAR_20)
 continue;

      FUNC_14 (VAR_11->name, VAR_12, VAR_13,
      VAR_17, VAR_11->pointer_count,
      VAR_11->wanted_type_name, VAR_16, VAR_18);
    }
}
