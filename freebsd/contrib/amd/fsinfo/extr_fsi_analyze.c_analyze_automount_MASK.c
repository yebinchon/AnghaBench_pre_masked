
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dict_ent ;
struct TYPE_3__ {int a_name; int a_volname; int a_ioloc; int * a_mounted; } ;
typedef TYPE_1__ automount ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_3(automount *VAR_0)
{
  dict_ent *VAR_1 = FUNC_1(VAR_0->a_volname);

  if (VAR_1) {
    VAR_0->a_mounted = VAR_1;
  } else {
    if (FUNC_0(VAR_0->a_volname, VAR_0->a_name))
      FUNC_2(VAR_0->a_ioloc, "unknown volname %s automounted", VAR_0->a_volname);
    else
      FUNC_2(VAR_0->a_ioloc, "unknown volname %s automounted on %s", VAR_0->a_volname, VAR_0->a_name);
  }
}
