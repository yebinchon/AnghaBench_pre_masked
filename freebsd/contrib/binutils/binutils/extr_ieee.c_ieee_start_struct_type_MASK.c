
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; } ;
struct ieee_name_type_hash_entry {struct ieee_name_type* types; TYPE_1__ root; } ;
struct ieee_buflist {int dummy; } ;
struct TYPE_5__ {scalar_t__ localp; char* name; scalar_t__ ignorep; struct ieee_buflist strdef; int indx; } ;
struct ieee_name_type {unsigned int id; scalar_t__ kind; TYPE_2__ type; struct ieee_name_type* next; } ;
struct ieee_handle {TYPE_3__* type_stack; int type_indx; int tags; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_6__ {TYPE_2__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,char const*,int ,unsigned int,scalar_t__,scalar_t__,struct ieee_buflist*) ;
 int FUNC_2 (struct ieee_handle*,struct ieee_buflist*) ;
 struct ieee_name_type_hash_entry* FUNC_3 (int *,char const*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ieee_handle*,unsigned int) ;
 int FUNC_5 (struct ieee_name_type*,int ,int) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_3, const char *VAR_4, unsigned int VAR_5,
   bfd_boolean VAR_6, unsigned int VAR_7)
{
  struct ieee_handle *VAR_8 = (struct ieee_handle *) VAR_3;
  bfd_boolean VAR_9, VAR_10;
  bfd_boolean VAR_11;
  char VAR_12[20];
  const char *VAR_13;
  struct ieee_name_type_hash_entry *VAR_14;
  struct ieee_name_type *VAR_15, *VAR_16;
  struct ieee_buflist VAR_17;

  VAR_9 = VAR_1;
  VAR_10 = VAR_1;




  if (VAR_4 != ((void*)0))
    {
      VAR_13 = VAR_4;
      VAR_11 = VAR_1;
    }
  else
    {
      FUNC_6 (VAR_12, "__anon%u", VAR_5);
      VAR_13 = VAR_12;
      VAR_11 = VAR_2;
    }



  VAR_14 = FUNC_3 (&VAR_8->tags, VAR_13, VAR_2, VAR_11);
  if (VAR_14 == ((void*)0))
    return VAR_1;

  VAR_15 = ((void*)0);
  for (VAR_16 = VAR_14->types; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
    {
      if (VAR_16->id == VAR_5)
 VAR_15 = VAR_16;
      else if (! VAR_16->type.localp)
 {



   VAR_9 = VAR_2;
 }
    }

  if (VAR_15 != ((void*)0))
    {
      FUNC_0 (VAR_9 == VAR_15->type.localp);
      if (VAR_15->kind == VAR_0 && ! VAR_9)
 {


   VAR_10 = VAR_2;
 }
    }
  else
    {
      VAR_15 = (struct ieee_name_type *) FUNC_7 (sizeof *VAR_15);
      FUNC_5 (VAR_15, 0, sizeof *VAR_15);
      VAR_15->id = VAR_5;
      VAR_15->type.name = VAR_14->root.string;
      VAR_15->next = VAR_14->types;
      VAR_14->types = VAR_15;
      VAR_15->type.indx = VAR_8->type_indx;
      ++VAR_8->type_indx;
    }

  VAR_15->kind = VAR_0;

  if (! FUNC_2 (VAR_8, &VAR_17)
      || ! FUNC_1 (VAR_8, VAR_4, VAR_15->type.indx, VAR_7, VAR_2,
       VAR_9, &VAR_17)
      || ! FUNC_4 (VAR_8, VAR_6 ? 'S' : 'U')
      || ! FUNC_4 (VAR_8, VAR_7))
    return VAR_1;

  if (! VAR_10)
    {
      const char *VAR_18;




      VAR_18 = VAR_15->type.name;
      VAR_15->type = VAR_8->type_stack->type;
      VAR_15->type.name = VAR_18;
    }

  VAR_8->type_stack->type.name = VAR_4;
  VAR_8->type_stack->type.strdef = VAR_17;
  VAR_8->type_stack->type.ignorep = VAR_10;

  return VAR_2;
}
