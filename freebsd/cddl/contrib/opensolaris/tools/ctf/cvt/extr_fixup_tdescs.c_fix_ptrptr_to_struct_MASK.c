
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ t_type; struct TYPE_7__* t_tdesc; scalar_t__ t_id; scalar_t__ t_name; TYPE_3__* t_members; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_8__ {int td_nextid; } ;
typedef TYPE_2__ tdata_t ;
typedef int strs ;
struct TYPE_9__ {TYPE_1__* ml_type; scalar_t__ ml_name; struct TYPE_9__* ml_next; } ;
typedef TYPE_3__ mlist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,char const*,char const*,char const*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (scalar_t__,char const*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(tdata_t *VAR_3)
{
 const char *VAR_4[2] = { "as", "fdbuffer" };
 const char *VAR_5[2] = { "a_objectdir", "fd_shadow" };
 const char *VAR_6[2] = { "vnode", "page" };
 const char *VAR_7[2] = { "vnode_t", "page_t" };
 tdesc_t *VAR_8;
 tdesc_t *VAR_9, *VAR_10;
 tdesc_t *VAR_11, *VAR_12;
 mlist_t *VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < (int) (sizeof (VAR_4) / sizeof (VAR_4[0])); VAR_14++) {
  if (!(VAR_8 = FUNC_1(VAR_4[VAR_14])) || VAR_8->t_type != VAR_1)
   continue;

  for (VAR_13 = VAR_8->t_members; VAR_13; VAR_13 = VAR_13->ml_next) {
   if (FUNC_2(VAR_13->ml_name, VAR_5[VAR_14]))
    break;
  }
  if (!VAR_13)
   continue;

  if (VAR_13->ml_type->t_type != VAR_0 || VAR_13->ml_type->t_name ||
      VAR_13->ml_type->t_tdesc->t_type != VAR_0 ||
      VAR_13->ml_type->t_tdesc->t_name)
   continue;

  VAR_9 = VAR_13->ml_type->t_tdesc->t_tdesc;
  if (VAR_9->t_type != VAR_1 || !FUNC_2(VAR_9->t_name, VAR_6[VAR_14]))
   continue;

  if (!(VAR_10 = FUNC_1(VAR_7[VAR_14])) || VAR_10->t_type != VAR_2)
   continue;


  VAR_12 = FUNC_3(sizeof (*VAR_12));
  VAR_12->t_type = VAR_0;
  VAR_12->t_id = VAR_3->td_nextid++;
  VAR_12->t_tdesc = VAR_10;

  VAR_11 = FUNC_3(sizeof (*VAR_11));
  VAR_11->t_type = VAR_0;
  VAR_11->t_id = VAR_3->td_nextid++;
  VAR_11->t_tdesc = VAR_12;

  VAR_13->ml_type = VAR_11;

  FUNC_0(3, "Fixed %s->%s => ptrptr struct %s bug\n",
      VAR_4[VAR_14], VAR_5[VAR_14], VAR_6[VAR_14]);
 }
}
