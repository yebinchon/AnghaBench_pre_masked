
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* popup; void* help; int * text; void* id; void* state; void* type; } ;
typedef TYPE_1__ rc_menuitem ;
typedef int bfd_byte ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int const*,int,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int const*,int) ;
 void* FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static rc_menuitem *
FUNC_6 (windres_bfd *VAR_0, const bfd_byte *VAR_1, rc_uint_type VAR_2,
   rc_uint_type *VAR_3)
{
  rc_menuitem *VAR_4, **VAR_5;

  VAR_4 = ((void*)0);
  VAR_5 = &VAR_4;

  *VAR_3 = 0;

  while (VAR_2 > 0)
    {
      rc_uint_type VAR_6, VAR_7;
      rc_uint_type VAR_8;
      rc_menuitem *VAR_9;

      if (VAR_2 < 16)
 FUNC_3 (FUNC_0("menuitem header"));

      VAR_9 = (rc_menuitem *) FUNC_2 (sizeof (rc_menuitem));
      VAR_9->type = FUNC_5 (VAR_0, VAR_1, 4);
      VAR_9->state = FUNC_5 (VAR_0, VAR_1 + 4, 4);
      VAR_9->id = FUNC_5 (VAR_0, VAR_1 + 8, 4);

      VAR_6 = FUNC_4 (VAR_0, VAR_1 + 12, 2);

      if (FUNC_4 (VAR_0, VAR_1 + 14, 2) == 0)
 {
   VAR_7 = 0;
   VAR_9->text = ((void*)0);
 }
      else
 VAR_9->text = FUNC_1 (VAR_0, VAR_1 + 14, VAR_2 - 14, &VAR_7);

      VAR_8 = 14 + VAR_7 * 2 + 2;
      VAR_8 = (VAR_8 + 3) &~ 3;

      if ((VAR_6 & 1) == 0)
 {
   VAR_9->popup = ((void*)0);
   VAR_9->help = 0;
 }
      else
 {
   rc_uint_type VAR_10;

   if (VAR_2 < VAR_8 + 4)
     FUNC_3 (FUNC_0("menuitem"));
   VAR_9->help = FUNC_5 (VAR_0, VAR_1 + VAR_8, 4);
   VAR_8 += 4;

   VAR_9->popup = FUNC_6 (VAR_0, VAR_1 + VAR_8,
           VAR_2 - VAR_8, &VAR_10);
   VAR_8 += VAR_10;
 }

      VAR_9->next = ((void*)0);
      *VAR_5 = VAR_9;
      VAR_5 = &VAR_9->next;

      VAR_1 += VAR_8;
      VAR_2 -= VAR_8;
      *VAR_3 += VAR_8;

      if ((VAR_6 & 0x80) != 0)
 return VAR_4;
    }

  return VAR_4;
}
