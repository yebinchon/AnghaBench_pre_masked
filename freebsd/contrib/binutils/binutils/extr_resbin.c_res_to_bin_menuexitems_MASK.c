
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_menuitemex {int flags; struct bin_menuitemex* id; struct bin_menuitemex* state; struct bin_menuitemex* type; } ;
typedef int rc_uint_type ;
struct TYPE_3__ {struct TYPE_3__* popup; int help; int text; int id; int state; int type; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_menuitem ;
typedef struct bin_menuitemex bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bin_menuitemex*,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,struct bin_menuitemex*,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_4 (windres_bfd *VAR_1, rc_uint_type VAR_2, const rc_menuitem *VAR_3)
{
  rc_uint_type VAR_4 = VAR_2;
  const rc_menuitem *VAR_5;

  for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      struct bin_menuitemex VAR_6;
      int VAR_7;

      VAR_2 += (4 - ((VAR_2 - VAR_4) & 3)) & 3;

      VAR_7 = 0;
      if (VAR_5->next == ((void*)0))
 VAR_7 |= 0x80;
      if (VAR_5->popup != ((void*)0))
 VAR_7 |= 1;

      if (VAR_1)
 {
   FUNC_3 (VAR_1, VAR_6.type, VAR_5->type);
   FUNC_3 (VAR_1, VAR_6.state, VAR_5->state);
   FUNC_3 (VAR_1, VAR_6.id, VAR_5->id);
   FUNC_2 (VAR_1, VAR_6.flags, VAR_7);
   FUNC_0 (VAR_1, &VAR_6, VAR_2, VAR_0);
 }
      VAR_2 += VAR_0;

      VAR_2 = FUNC_1 (VAR_1, VAR_2, VAR_5->text);

      if (VAR_5->popup != ((void*)0))
 {
   bfd_byte VAR_8[4];

   VAR_2 += (4 - ((VAR_2 - VAR_4) & 3)) & 3;

   if (VAR_1)
     {
       FUNC_3 (VAR_1, VAR_8, VAR_5->help);
       FUNC_0 (VAR_1, VAR_8, VAR_2, 4);
     }
   VAR_2 += 4;
   VAR_2 = FUNC_4 (VAR_1, VAR_2, VAR_5->popup);
 }
    }
  return VAR_2;
}
