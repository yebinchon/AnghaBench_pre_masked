
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_menuitem {int id; int flags; } ;
typedef int rc_uint_type ;
struct TYPE_3__ {int type; int id; struct TYPE_3__* popup; int text; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_menuitem ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct bin_menuitem*,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static rc_uint_type
FUNC_3 (windres_bfd *VAR_4, rc_uint_type VAR_5, const rc_menuitem *VAR_6)
{
  const rc_menuitem *VAR_7;

  for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      struct bin_menuitem VAR_8;
      int VAR_9;

      VAR_9 = VAR_7->type;
      if (VAR_7->next == ((void*)0))
 VAR_9 |= VAR_2;
      if (VAR_7->popup != ((void*)0))
 VAR_9 |= VAR_3;

      if (VAR_4)
 {
   FUNC_2 (VAR_4, VAR_8.flags, VAR_9);
      if (VAR_7->popup == ((void*)0))
     FUNC_2 (VAR_4, VAR_8.id, VAR_7->id);
   FUNC_0 (VAR_4, &VAR_8, VAR_5,
       VAR_7->popup == ((void*)0) ? VAR_1
              : VAR_0);
 }
      VAR_5 += (VAR_7->popup == ((void*)0) ? VAR_1 : VAR_0);

      VAR_5 = FUNC_1 (VAR_4, VAR_5, VAR_7->text);

      if (VAR_7->popup != ((void*)0))
 {
   VAR_5 = FUNC_3 (VAR_4, VAR_5, VAR_7->popup);
 }
    }
  return VAR_5;
}
