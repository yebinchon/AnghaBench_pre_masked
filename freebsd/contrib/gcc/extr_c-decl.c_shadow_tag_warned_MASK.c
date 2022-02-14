
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct c_declspecs {scalar_t__ type; scalar_t__ storage_class; scalar_t__ restrict_p; scalar_t__ volatile_p; scalar_t__ const_p; scalar_t__ thread_p; scalar_t__ inline_p; scalar_t__ typedef_p; int tag_defined_p; int default_int_p; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9 (const struct c_declspecs *VAR_10, int VAR_11)
{
  bool VAR_12 = 0;

  if (VAR_10->type && !VAR_10->default_int_p && !VAR_10->typedef_p)
    {
      tree VAR_13 = VAR_10->type;
      enum tree_code VAR_14 = FUNC_0 (VAR_13);

      if (VAR_14 == VAR_1 || VAR_14 == VAR_2 || VAR_14 == VAR_0)


 {
   tree VAR_15 = FUNC_1 (VAR_13);
   tree VAR_16;

   VAR_12 = 1;

   if (VAR_15 == 0)
     {
       if (VAR_11 != 1 && VAR_14 != VAR_0)

  {
    FUNC_5 ("unnamed struct/union that defines no instances");
    VAR_11 = 1;
  }
     }
   else if (!VAR_10->tag_defined_p
     && VAR_10->storage_class != VAR_4)
     {
       if (VAR_11 != 1)
  FUNC_5 ("empty declaration with storage class specifier "
    "does not redeclare tag");
       VAR_11 = 1;
       FUNC_6 ();
     }
   else if (!VAR_10->tag_defined_p
     && (VAR_10->const_p
         || VAR_10->volatile_p
         || VAR_10->restrict_p))
     {
       if (VAR_11 != 1)
  FUNC_5 ("empty declaration with type qualifier "
    "does not redeclare tag");
       VAR_11 = 1;
       FUNC_6 ();
     }
   else
     {
       VAR_9 = 0;
       VAR_16 = FUNC_3 (VAR_14, VAR_15, 1);

       if (VAR_16 == 0)
  {
    VAR_16 = FUNC_4 (VAR_14);
    FUNC_7 (VAR_15, VAR_16);
  }
     }
 }
      else
 {
   if (VAR_11 != 1 && !VAR_8)
     {
       FUNC_5 ("useless type name in empty declaration");
       VAR_11 = 1;
     }
 }
    }
  else if (VAR_11 != 1 && !VAR_8 && VAR_10->typedef_p)
    {
      FUNC_5 ("useless type name in empty declaration");
      VAR_11 = 1;
    }

  VAR_9 = 0;

  if (VAR_10->inline_p)
    {
      FUNC_2 ("%<inline%> in empty declaration");
      VAR_11 = 1;
    }

  if (VAR_6 == VAR_7 && VAR_10->storage_class == VAR_3)
    {
      FUNC_2 ("%<auto%> in file-scope empty declaration");
      VAR_11 = 1;
    }

  if (VAR_6 == VAR_7 && VAR_10->storage_class == VAR_5)
    {
      FUNC_2 ("%<register%> in file-scope empty declaration");
      VAR_11 = 1;
    }

  if (!VAR_11 && !VAR_8 && VAR_10->storage_class != VAR_4)
    {
      FUNC_8 (0, "useless storage class specifier in empty declaration");
      VAR_11 = 2;
    }

  if (!VAR_11 && !VAR_8 && VAR_10->thread_p)
    {
      FUNC_8 (0, "useless %<__thread%> in empty declaration");
      VAR_11 = 2;
    }

  if (!VAR_11 && !VAR_8 && (VAR_10->const_p
           || VAR_10->volatile_p
           || VAR_10->restrict_p))
    {
      FUNC_8 (0, "useless type qualifier in empty declaration");
      VAR_11 = 2;
    }

  if (VAR_11 != 1)
    {
      if (!VAR_12)
 FUNC_5 ("empty declaration");
    }
}
