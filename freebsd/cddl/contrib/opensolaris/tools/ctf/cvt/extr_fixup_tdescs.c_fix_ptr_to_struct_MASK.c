
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
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,char const*,scalar_t__) ;
 TYPE_1__* FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__,char const*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(tdata_t *VAR_4)
{
 const char *VAR_5[2] = { "vmem", "id_space" };
 const char *VAR_6[2] = { ((void*)0), "is_vmem" };
 tdesc_t *VAR_7 = ((void*)0);
 tdesc_t *VAR_8, *VAR_9;
 mlist_t *VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_1("vmem_t")) == ((void*)0) || VAR_9->t_type != VAR_3)
  return;

 for (VAR_11 = 0; VAR_11 < (int) (sizeof (VAR_5) / sizeof (VAR_5[0])); VAR_11++) {
  if (!(VAR_8 = FUNC_1(VAR_5[VAR_11])) || VAR_8->t_type != VAR_2)
   continue;

  for (VAR_10 = VAR_8->t_members; VAR_10; VAR_10 = VAR_10->ml_next) {
   if (VAR_6[VAR_11] && !FUNC_2(VAR_10->ml_name, VAR_6[VAR_11]))
    continue;

   if (VAR_10->ml_type->t_type != VAR_1 ||
       VAR_10->ml_type->t_name ||
       (VAR_10->ml_type->t_tdesc->t_type != VAR_2 &&
       VAR_10->ml_type->t_tdesc->t_type != VAR_0) ||
       !FUNC_2(VAR_10->ml_type->t_tdesc->t_name, "vmem"))
    continue;

   FUNC_0(3, "Fixed %s->%s => ptr struct vmem bug\n",
       VAR_5[VAR_11], VAR_10->ml_name);

   if (!VAR_7) {
    VAR_7 = FUNC_3(sizeof (*VAR_7));
    VAR_7->t_type = VAR_1;
    VAR_7->t_id = VAR_4->td_nextid++;
    VAR_7->t_tdesc = VAR_9;
   }

   VAR_10->ml_type = VAR_7;
  }
 }
}
