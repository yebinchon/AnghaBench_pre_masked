
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int t_id; TYPE_2__* t_members; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_10__ {char* ml_name; int ml_type; int ml_size; int ml_offset; struct TYPE_10__* ml_next; } ;
typedef TYPE_2__ mlist_t ;
typedef int merge_cb_data_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_2 (int) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static tdesc_t *
FUNC_4(tdesc_t *VAR_0, int VAR_1, merge_cb_data_t *VAR_2)
{
 tdesc_t *VAR_3 = FUNC_0(VAR_0, VAR_1);
 mlist_t *VAR_4, **VAR_5;

 for (VAR_4 = VAR_0->t_members, VAR_5 = &VAR_3->t_members;
     VAR_4; VAR_4 = VAR_4->ml_next, VAR_5 = &((*VAR_5)->ml_next)) {
  *VAR_5 = FUNC_2(sizeof (mlist_t));
  (*VAR_5)->ml_offset = VAR_4->ml_offset;
  (*VAR_5)->ml_size = VAR_4->ml_size;
  (*VAR_5)->ml_name = FUNC_3(VAR_4->ml_name ? VAR_4->ml_name : "empty omem->ml_name");
  (void) FUNC_1(&((*VAR_5)->ml_type), VAR_4->ml_type,
      VAR_0->t_id, VAR_3, VAR_2);
 }
 *VAR_5 = ((void*)0);

 return (VAR_3);
}
