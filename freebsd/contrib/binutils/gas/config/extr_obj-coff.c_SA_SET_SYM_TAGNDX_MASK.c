
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_7__ {TYPE_5__* p; } ;
struct TYPE_8__ {TYPE_1__ x_tagndx; } ;
struct TYPE_9__ {TYPE_2__ x_sym; } ;
struct TYPE_10__ {TYPE_3__ auxent; } ;
struct TYPE_11__ {int fix_tag; TYPE_4__ u; } ;
typedef TYPE_5__ combined_entry_type ;
struct TYPE_12__ {TYPE_5__* native; } ;


 TYPE_6__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (symbolS *VAR_0, symbolS *VAR_1)
{
  combined_entry_type *VAR_2, *VAR_3;

  VAR_2 = &FUNC_0 (FUNC_1 (VAR_0))->native[1];
  VAR_3 = FUNC_0 (FUNC_1 (VAR_1))->native;
  VAR_2->u.auxent.x_sym.x_tagndx.p = VAR_3;
  VAR_2->fix_tag = 1;
}
