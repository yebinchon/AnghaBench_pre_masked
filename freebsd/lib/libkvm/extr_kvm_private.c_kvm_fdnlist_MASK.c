
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlist {char* n_name; int n_type; int n_value; } ;
struct kvm_nlist {char* n_name; int n_type; int n_value; } ;
struct TYPE_3__ {int (* resolve_symbol ) (char*,int *) ;int nlfd; } ;
typedef TYPE_1__ kvm_t ;
typedef int kvaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct nlist*) ;
 struct nlist* FUNC_1 (int,int) ;
 int FUNC_2 (struct nlist*) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static int
FUNC_4(kvm_t *VAR_2, struct kvm_nlist *VAR_3)
{
 kvaddr_t VAR_4;
 int VAR_5, VAR_6;

 if (VAR_2->resolve_symbol == ((void*)0)) {
  struct nlist *VAR_7;
  int VAR_8, VAR_9;

  for (VAR_8 = 0; VAR_3[VAR_8].n_name != ((void*)0) &&
       VAR_3[VAR_8].n_name[0] != '\0'; VAR_8++)
   ;
  VAR_7 = FUNC_1(VAR_8 + 1, sizeof(*VAR_7));
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   VAR_7[VAR_9].n_name = VAR_3[VAR_9].n_name;
  VAR_6 = FUNC_0(VAR_2->nlfd, VAR_7);
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   VAR_3[VAR_9].n_type = VAR_7[VAR_9].n_type;
   VAR_3[VAR_9].n_value = VAR_7[VAR_9].n_value;
  }
  FUNC_2(VAR_7);
  return (VAR_6);
 }

 VAR_6 = 0;
 while (VAR_3->n_name != ((void*)0) && VAR_3->n_name[0] != '\0') {
  VAR_5 = VAR_2->resolve_symbol(VAR_3->n_name, &VAR_4);
  if (VAR_5 != 0) {
   VAR_6++;
   VAR_3->n_value = 0;
   VAR_3->n_type = 0;
  } else {
   VAR_3->n_value = VAR_4;
   VAR_3->n_type = VAR_0 | VAR_1;
  }
  VAR_3++;
 }
 return (VAR_6);
}
