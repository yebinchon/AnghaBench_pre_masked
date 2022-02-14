
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_names {int should_free; unsigned long ino; unsigned char type; int list; } ;
struct audit_context {size_t name_count; int ino_count; int names_list; struct audit_names* preallocated_names; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct audit_names* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct audit_names*,int ,int) ;

__attribute__((used)) static struct audit_names *FUNC_3(struct audit_context *VAR_2,
      unsigned char VAR_3)
{
 struct audit_names *VAR_4;

 if (VAR_2->name_count < VAR_0) {
  VAR_4 = &VAR_2->preallocated_names[VAR_2->name_count];
  FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 } else {
  VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
  if (!VAR_4)
   return ((void*)0);
  VAR_4->should_free = 1;
 }

 VAR_4->ino = (unsigned long)-1;
 VAR_4->type = VAR_3;
 FUNC_1(&VAR_4->list, &VAR_2->names_list);

 VAR_2->name_count++;



 return VAR_4;
}
