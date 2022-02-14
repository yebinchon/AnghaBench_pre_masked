
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_menuex {int help; int sig2; int sig1; } ;
struct bin_menu {int help; int sig2; int sig1; } ;
typedef int rc_uint_type ;
struct TYPE_4__ {int items; int help; } ;
typedef TYPE_1__ rc_menu ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,struct bin_menuex*,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_6 (windres_bfd *VAR_2, rc_uint_type VAR_3, const rc_menu *VAR_4)
{
  int VAR_5;

  VAR_5 = FUNC_0 (VAR_4);

  if (VAR_2)
    {
  if (! VAR_5)
    {
   struct bin_menu VAR_6;
   FUNC_4 (VAR_2, VAR_6.sig1, 0);
   FUNC_4 (VAR_2, VAR_6.sig2, 0);
   FUNC_3 (VAR_2, &VAR_6, VAR_3, VAR_1);
    }
  else
    {
   struct bin_menuex VAR_7;
   FUNC_4 (VAR_2, VAR_7.sig1, 1);
   FUNC_4 (VAR_2, VAR_7.sig2, 4);
   FUNC_5 (VAR_2, VAR_7.help, VAR_4->help);
   FUNC_3 (VAR_2, &VAR_7, VAR_3, VAR_0);
    }
    }
  VAR_3 += (VAR_5 != 0 ? VAR_0 : VAR_1);
  if (! VAR_5)
    {
      VAR_3 = FUNC_2 (VAR_2, VAR_3, VAR_4->items);
    }
  else
    {
      VAR_3 = FUNC_1 (VAR_2, VAR_3, VAR_4->items);
    }
  return VAR_3;
}
