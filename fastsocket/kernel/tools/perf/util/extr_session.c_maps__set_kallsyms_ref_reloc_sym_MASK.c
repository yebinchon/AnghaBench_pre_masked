
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ref_reloc_sym {int addr; int * name; } ;
struct map {int dummy; } ;
struct kmap {struct ref_reloc_sym* ref_reloc_sym; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ref_reloc_sym*) ;
 struct kmap* FUNC_1 (struct map*) ;
 char* FUNC_2 (int *,char) ;
 int * FUNC_3 (char const*) ;
 struct ref_reloc_sym* FUNC_4 (int) ;

int FUNC_5(struct map **VAR_2,
         const char *VAR_3, u64 VAR_4)
{
 char *VAR_5;
 enum map_type VAR_6;
 struct ref_reloc_sym *VAR_7;

 VAR_7 = FUNC_4(sizeof(struct ref_reloc_sym));
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->name = FUNC_3(VAR_3);
 if (VAR_7->name == ((void*)0)) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_7->name, ']');
 if (VAR_5)
  *VAR_5 = '\0';

 VAR_7->addr = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  struct kmap *VAR_8 = FUNC_1(VAR_2[VAR_6]);
  VAR_8->ref_reloc_sym = VAR_7;
 }

 return 0;
}
