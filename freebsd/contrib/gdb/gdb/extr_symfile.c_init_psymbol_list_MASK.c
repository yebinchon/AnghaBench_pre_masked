
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct partial_symbol {int dummy; } ;
struct TYPE_4__ {int size; struct partial_symbol** list; struct partial_symbol** next; } ;
struct TYPE_3__ {int size; struct partial_symbol** list; struct partial_symbol** next; } ;
struct objfile {TYPE_2__ static_psymbols; int md; TYPE_1__ global_psymbols; } ;


 int FUNC_0 (int ,struct partial_symbol**) ;
 scalar_t__ FUNC_1 (int ,int) ;

void
FUNC_2 (struct objfile *VAR_0, int VAR_1)
{


  if (VAR_0->global_psymbols.list)
    {
      FUNC_0 (VAR_0->md, VAR_0->global_psymbols.list);
    }
  if (VAR_0->static_psymbols.list)
    {
      FUNC_0 (VAR_0->md, VAR_0->static_psymbols.list);
    }





  VAR_0->global_psymbols.size = VAR_1 / 10;
  VAR_0->static_psymbols.size = VAR_1 / 10;

  if (VAR_0->global_psymbols.size > 0)
    {
      VAR_0->global_psymbols.next =
 VAR_0->global_psymbols.list = (struct partial_symbol **)
 FUNC_1 (VAR_0->md, (VAR_0->global_psymbols.size
    * sizeof (struct partial_symbol *)));
    }
  if (VAR_0->static_psymbols.size > 0)
    {
      VAR_0->static_psymbols.next =
 VAR_0->static_psymbols.list = (struct partial_symbol **)
 FUNC_1 (VAR_0->md, (VAR_0->static_psymbols.size
    * sizeof (struct partial_symbol *)));
    }
}
