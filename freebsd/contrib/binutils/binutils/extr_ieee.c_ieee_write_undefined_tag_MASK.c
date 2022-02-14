
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee_name_type_hash_entry {struct ieee_name_type* types; } ;
struct TYPE_2__ {char* name; char indx; } ;
struct ieee_name_type {int kind; TYPE_1__ type; struct ieee_name_type* next; } ;
struct ieee_handle {unsigned int name_indx; void* error; int global_types; } ;
typedef void* bfd_boolean ;




 int VAR_0 ;



 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ieee_handle*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ieee_handle*,int) ;
 int FUNC_4 (struct ieee_handle*,char*) ;
 int FUNC_5 (struct ieee_handle*,char) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct ieee_name_type_hash_entry *VAR_6, void *VAR_7)
{
  struct ieee_handle *VAR_8 = (struct ieee_handle *) VAR_7;
  struct ieee_name_type *VAR_9;

  for (VAR_9 = VAR_6->types; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      unsigned int VAR_10;
      char VAR_11;

      if (VAR_9->kind == VAR_0)
 continue;

      if (FUNC_1 (&VAR_8->global_types))
 {
   if (! FUNC_2 (VAR_8, &VAR_8->global_types)
       || ! FUNC_3 (VAR_8, (int) VAR_3)
       || ! FUNC_3 (VAR_8, 2)
       || ! FUNC_5 (VAR_8, 0)
       || ! FUNC_4 (VAR_8, ""))
     {
       VAR_8->error = VAR_2;
       return VAR_1;
     }
 }
      else
 {
   if (! FUNC_2 (VAR_8, &VAR_8->global_types))
     {
       VAR_8->error = VAR_2;
       return VAR_1;
     }
 }

      VAR_10 = VAR_8->name_indx;
      ++VAR_8->name_indx;
      if (! FUNC_3 (VAR_8, (int) VAR_4)
   || ! FUNC_5 (VAR_8, VAR_10)
   || ! FUNC_4 (VAR_8, VAR_9->type.name)
   || ! FUNC_3 (VAR_8, (int) VAR_5)
   || ! FUNC_5 (VAR_8, VAR_9->type.indx)
   || ! FUNC_3 (VAR_8, 0xce)
   || ! FUNC_5 (VAR_8, VAR_10))
 {
   VAR_8->error = VAR_2;
   return VAR_1;
 }

      switch (VAR_9->kind)
 {
 default:
   FUNC_0 ();
   VAR_8->error = VAR_2;
   return VAR_1;
 case 130:
 case 132:
   VAR_11 = 'S';
   break;
 case 129:
 case 128:
   VAR_11 = 'U';
   break;
 case 131:
   VAR_11 = 'E';
   break;
 }
      if (! FUNC_5 (VAR_8, VAR_11)
   || ! FUNC_5 (VAR_8, 0))
 {
   VAR_8->error = VAR_2;
   return VAR_1;
 }
    }

  return VAR_2;
}
