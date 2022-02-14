
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_3__ {int type; struct TYPE_3__* next; struct TYPE_3__* popup; scalar_t__ id; int * text; scalar_t__ help; scalar_t__ state; } ;
typedef TYPE_1__ rc_menuitem ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int const*,int,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static rc_menuitem *
FUNC_5 (windres_bfd *VAR_2, const bfd_byte *VAR_3, rc_uint_type VAR_4,
        rc_uint_type *VAR_5)
{
  rc_menuitem *VAR_6, **VAR_7;

  VAR_6 = ((void*)0);
  VAR_7 = &VAR_6;

  *VAR_5 = 0;

  while (VAR_4 > 0)
    {
      rc_uint_type VAR_8, VAR_9, VAR_10;
      rc_uint_type VAR_11;
      rc_menuitem *VAR_12;

      if (VAR_4 < 4)
 FUNC_3 (FUNC_0("menuitem header"));

      VAR_12 = (rc_menuitem *) FUNC_2 (sizeof *VAR_12);
      VAR_12->state = 0;
      VAR_12->help = 0;

      VAR_8 = FUNC_4 (VAR_2, VAR_3, 2);
      VAR_12->type = VAR_8 &~ (VAR_1 | VAR_0);

      if ((VAR_8 & VAR_1) == 0)
 VAR_11 = 4;
      else
 VAR_11 = 2;

      if (VAR_4 < VAR_11 + 2)
 FUNC_3 (FUNC_0("menuitem header"));

      if (FUNC_4 (VAR_2, VAR_3 + VAR_11, 2) == 0)
 {
   VAR_9 = 0;
   VAR_12->text = ((void*)0);
 }
      else
 VAR_12->text = FUNC_1 (VAR_2, VAR_3 + VAR_11, VAR_4 - VAR_11, &VAR_9);

      VAR_10 = VAR_11 + VAR_9 * 2 + 2;

      if ((VAR_8 & VAR_1) == 0)
 {
   VAR_12->popup = ((void*)0);
   VAR_12->id = FUNC_4 (VAR_2, VAR_3 + 2, 2);
 }
      else
 {
   rc_uint_type VAR_13;

   VAR_12->id = 0;
   VAR_12->popup = FUNC_5 (VAR_2, VAR_3 + VAR_10, VAR_4 - VAR_10,
           &VAR_13);
   VAR_10 += VAR_13;
 }

      VAR_12->next = ((void*)0);
      *VAR_7 = VAR_12;
      VAR_7 = &VAR_12->next;

      VAR_3 += VAR_10;
      VAR_4 -= VAR_10;
      *VAR_5 += VAR_10;

      if ((VAR_8 & VAR_0) != 0)
 return VAR_6;
    }

  return VAR_6;
}
