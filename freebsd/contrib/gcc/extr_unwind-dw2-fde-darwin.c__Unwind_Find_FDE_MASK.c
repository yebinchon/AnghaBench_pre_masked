
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct km_object_info {int unseen_objects; int seen_objects; } ;
struct dwarf_eh_bases {int dummy; } ;
typedef int fde ;


 int VAR_0 ;
 int * FUNC_0 (void*,struct dwarf_eh_bases*) ;
 struct km_object_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct km_object_info*) ;
 struct km_object_info* FUNC_3 (int,int) ;
 int * FUNC_4 (void*,struct dwarf_eh_bases*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

const fde *
FUNC_5 (void *VAR_3, struct dwarf_eh_bases *VAR_4)
{
  struct km_object_info *VAR_5;
  const fde *VAR_6 = ((void*)0);

  VAR_5 =
    FUNC_1 (VAR_0);
  if (! VAR_5)
    VAR_5 = FUNC_3 (1, sizeof (*VAR_5));

  if (VAR_5 != ((void*)0))
    {
      VAR_1 = VAR_5->seen_objects;
      VAR_2 = VAR_5->unseen_objects;

      VAR_6 = FUNC_0 (VAR_3, VAR_4);
    }



  if (VAR_6 == ((void*)0))
    VAR_6 = FUNC_4 (VAR_3, VAR_4, VAR_5 == ((void*)0));

  if (VAR_5 != ((void*)0))
    {
      VAR_5->seen_objects = VAR_1;
      VAR_5->unseen_objects = VAR_2;
    }
  FUNC_2 (VAR_0,
       VAR_5);
  return VAR_6;
}
