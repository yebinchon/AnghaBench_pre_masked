
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ t_type; scalar_t__ t_id; void* t_name; TYPE_3__* t_members; struct TYPE_9__* t_tdesc; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_10__ {int td_nextid; } ;
typedef TYPE_2__ tdata_t ;
struct TYPE_11__ {struct TYPE_11__* ml_next; TYPE_1__* ml_type; void* ml_name; scalar_t__ ml_size; scalar_t__ ml_offset; } ;
typedef TYPE_3__ mlist_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,char*) ;
 int * FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_3 (void*,char*) ;
 int FUNC_4 (void*,char*) ;
 int FUNC_5 (char*,void*) ;
 TYPE_1__* FUNC_6 (int) ;
 TYPE_3__* FUNC_7 (int) ;
 void* FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(tdata_t *VAR_4, size_t VAR_5)
{
 tdesc_t *VAR_6, *VAR_7;
 tdesc_t *VAR_8;
 mlist_t *VAR_9, *VAR_10;
 mlist_t *VAR_11;
 int VAR_12 = 0;







 if ((VAR_6 = FUNC_2(VAR_4, "cpu_t")) != ((void*)0)) {
  if (VAR_6->t_type != VAR_3)
   return;
  VAR_7 = VAR_6->t_tdesc;
 } else {
  VAR_7 = FUNC_2(VAR_4, "cpu");
 }

 if (VAR_7 == ((void*)0))
  return;

 if (!FUNC_4(VAR_7->t_name, "cpu") || VAR_7->t_type != VAR_2)
  return;

 for (VAR_9 = VAR_7->t_members, VAR_10 = ((void*)0); VAR_9;
     VAR_10 = VAR_9, VAR_9 = VAR_9->ml_next) {
  if (FUNC_3(VAR_9->ml_name, "cpu_cyclic") == 0)
   VAR_12 = 1;
 }

 if (VAR_12 == 0 || VAR_10 == ((void*)0) ||
     FUNC_3(VAR_10->ml_name, "cpu_m") == 0)
  return;
 if (!FUNC_4(VAR_10->ml_name, "cpu_m_pad") &&
     FUNC_1("CTFCONVERT_PERMISSIVE") == ((void*)0)) {
  FUNC_5("last cpu_t member before cpu_m is %s; "
      "it must be cpu_m_pad.\n", VAR_10->ml_name);
 }

 if ((VAR_8 = FUNC_2(VAR_4, "machcpu")) == ((void*)0)) {
  VAR_8 = FUNC_6(sizeof (*VAR_8));
  VAR_8->t_name = FUNC_8("machcpu");
  VAR_8->t_id = VAR_4->td_nextid++;
  VAR_8->t_type = VAR_0;
 } else if (VAR_8->t_type != VAR_2) {
  return;
 }

 FUNC_0(3, "Adding cpu_m machcpu %s to cpu struct\n",
     (VAR_8->t_type == VAR_0 ? "forward" : "struct"));

 VAR_11 = FUNC_7(sizeof (*VAR_11));
 VAR_11->ml_offset = VAR_10->ml_offset + (VAR_5 * VAR_1);
 VAR_11->ml_size = 0;
 VAR_11->ml_name = FUNC_8("cpu_m");
 VAR_11->ml_type = VAR_8;
 VAR_11->ml_next = ((void*)0);

 VAR_10->ml_next = VAR_11;
}
