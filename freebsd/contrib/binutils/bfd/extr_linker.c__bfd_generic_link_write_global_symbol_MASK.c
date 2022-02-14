
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct generic_write_global_symbol_info {int psymalloc; int output_bfd; TYPE_3__* info; } ;
struct TYPE_13__ {int string; } ;
struct TYPE_10__ {scalar_t__ link; } ;
struct TYPE_11__ {TYPE_1__ i; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_4__ root; TYPE_2__ u; } ;
struct generic_link_hash_entry {TYPE_7__ root; TYPE_5__* sym; scalar_t__ written; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_14__ {int flags; int name; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_12__ {scalar_t__ strip; int keep_hash; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

bfd_boolean
FUNC_5 (struct generic_link_hash_entry *VAR_6,
           void *VAR_7)
{
  struct generic_write_global_symbol_info *VAR_8 = VAR_7;
  asymbol *VAR_9;

  if (VAR_6->root.type == VAR_3)
    VAR_6 = (struct generic_link_hash_entry *) VAR_6->root.u.i.link;

  if (VAR_6->written)
    return VAR_2;

  VAR_6->written = VAR_2;

  if (VAR_8->info->strip == VAR_4
      || (VAR_8->info->strip == VAR_5
   && FUNC_1 (VAR_8->info->keep_hash, VAR_6->root.root.string,
         VAR_1, VAR_1) == ((void*)0)))
    return VAR_2;

  if (VAR_6->sym != ((void*)0))
    VAR_9 = VAR_6->sym;
  else
    {
      VAR_9 = FUNC_2 (VAR_8->output_bfd);
      if (!VAR_9)
 return VAR_1;
      VAR_9->name = VAR_6->root.root.string;
      VAR_9->flags = 0;
    }

  FUNC_4 (VAR_9, &VAR_6->root);

  VAR_9->flags |= VAR_0;

  if (! FUNC_3 (VAR_8->output_bfd, VAR_8->psymalloc,
       VAR_9))
    {

      FUNC_0 ();
    }

  return VAR_2;
}
