
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_buflist {int dummy; } ;
struct ieee_handle {unsigned int type_indx; unsigned int name_indx; char const* modname; struct ieee_buflist global_types; struct ieee_buflist types; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee_buflist*) ;
 int FUNC_1 (struct ieee_handle*,struct ieee_buflist*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ieee_handle*,unsigned int,unsigned int,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct ieee_handle*,int) ;
 scalar_t__ FUNC_4 (struct ieee_handle*,char const*) ;
 scalar_t__ FUNC_5 (struct ieee_handle*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct ieee_handle *VAR_4, const char *VAR_5,
   unsigned int VAR_6, unsigned int VAR_7,
   bfd_boolean VAR_8, bfd_boolean VAR_9,
   struct ieee_buflist *VAR_10)
{
  unsigned int VAR_11;
  unsigned int VAR_12;

  if (VAR_6 != (unsigned int) -1)
    VAR_11 = VAR_6;
  else
    {
      VAR_11 = VAR_4->type_indx;
      ++VAR_4->type_indx;
    }

  VAR_12 = VAR_4->name_indx;
  ++VAR_4->name_indx;

  if (VAR_5 == ((void*)0))
    VAR_5 = "";




  if (VAR_10 != ((void*)0))
    {
      if (! FUNC_1 (VAR_4, VAR_10))
 return VAR_0;
    }
  else if (VAR_9)
    {
      if (! FUNC_0 (&VAR_4->types))
 {
   if (! FUNC_1 (VAR_4, &VAR_4->types))
     return VAR_0;
 }
      else
 {
   if (! FUNC_1 (VAR_4, &VAR_4->types)
       || ! FUNC_3 (VAR_4, (int) VAR_1)
       || ! FUNC_3 (VAR_4, 1)
       || ! FUNC_5 (VAR_4, 0)
       || ! FUNC_4 (VAR_4, VAR_4->modname))
     return VAR_0;
 }
    }
  else
    {
      if (! FUNC_0 (&VAR_4->global_types))
 {
   if (! FUNC_1 (VAR_4, &VAR_4->global_types))
     return VAR_0;
 }
      else
 {
   if (! FUNC_1 (VAR_4, &VAR_4->global_types)
       || ! FUNC_3 (VAR_4, (int) VAR_1)
       || ! FUNC_3 (VAR_4, 2)
       || ! FUNC_5 (VAR_4, 0)
       || ! FUNC_4 (VAR_4, ""))
     return VAR_0;
 }
    }




  if (! FUNC_2 (VAR_4, VAR_11, VAR_7, VAR_8, VAR_9))
    return VAR_0;

  return (FUNC_3 (VAR_4, (int) VAR_2)
   && FUNC_5 (VAR_4, VAR_12)
   && FUNC_4 (VAR_4, VAR_5)
   && FUNC_3 (VAR_4, (int) VAR_3)
   && FUNC_5 (VAR_4, VAR_11)
   && FUNC_3 (VAR_4, 0xce)
   && FUNC_5 (VAR_4, VAR_12));
}
