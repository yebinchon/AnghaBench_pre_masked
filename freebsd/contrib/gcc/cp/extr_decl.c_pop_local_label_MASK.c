
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct named_label_entry {int label_decl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void**) ;
 void** FUNC_1 (int ,struct named_label_entry*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (tree VAR_2, tree VAR_3)
{
  struct named_label_entry VAR_4;
  void **VAR_5;

  FUNC_2 (VAR_2, VAR_3);

  VAR_4.label_decl = VAR_2;
  VAR_5 = FUNC_1 (VAR_1, &VAR_4, VAR_0);
  FUNC_0 (VAR_1, VAR_5);
}
