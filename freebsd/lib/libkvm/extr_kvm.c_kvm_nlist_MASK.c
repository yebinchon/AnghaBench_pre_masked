
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct nlist {char* n_name; int n_value; scalar_t__ n_desc; scalar_t__ n_other; int n_type; } ;
struct kvm_nlist {char* n_name; int n_value; int n_type; } ;
struct TYPE_6__ {int program; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ,char*) ;
 struct kvm_nlist* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct kvm_nlist*) ;

int
FUNC_4(kvm_t *VAR_0, struct nlist *VAR_1)
{
 struct kvm_nlist *VAR_2;
 int VAR_3, VAR_4, VAR_5;





 if (!FUNC_2(VAR_0)) {
  FUNC_0(VAR_0, VAR_0->program, "kvm_nlist of non-native vmcore");
  return (-1);
 }

 for (VAR_3 = 0; VAR_1[VAR_3].n_name != ((void*)0) && VAR_1[VAR_3].n_name[0] != '\0';
      VAR_3++)
  ;
 if (VAR_3 == 0)
  return (0);
 VAR_2 = FUNC_1(VAR_3 + 1, sizeof(*VAR_2));
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_2[VAR_4].n_name = VAR_1[VAR_4].n_name;
 VAR_5 = FUNC_3(VAR_0, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1[VAR_4].n_type = VAR_2[VAR_4].n_type;
  VAR_1[VAR_4].n_other = 0;
  VAR_1[VAR_4].n_desc = 0;
  VAR_1[VAR_4].n_value = VAR_2[VAR_4].n_value;
 }
 return (VAR_5);
}
