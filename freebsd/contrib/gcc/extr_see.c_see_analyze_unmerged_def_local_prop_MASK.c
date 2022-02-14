
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_register_properties {int bitmap_index; int regno; } ;
struct see_ref_s {void* insn; } ;
struct see_pre_extension_expr {int bitmap_index; int regno; } ;
typedef void* rtx ;
typedef struct see_register_properties* htab_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int * VAR_2 ;
 int FUNC_4 (struct see_register_properties*) ;
 scalar_t__ FUNC_5 (struct see_register_properties*,struct see_register_properties*,int ) ;
 struct see_register_properties** VAR_3 ;
 void* FUNC_6 (void*,int) ;
 struct see_register_properties* FUNC_7 (void*,int ) ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_8 (void **VAR_5, void *VAR_6)
{
  rtx VAR_7 = *VAR_5;
  struct see_ref_s *VAR_8 = (struct see_ref_s *) VAR_6;
  rtx VAR_9 = VAR_8->insn;
  struct see_pre_extension_expr *VAR_10;
  int VAR_11;
  int VAR_12 = FUNC_0 (VAR_9);
  htab_t VAR_13;
  struct see_register_properties *VAR_14, **VAR_15;
  struct see_register_properties VAR_16;
  rtx VAR_17 = FUNC_6 (VAR_7, 1);

  VAR_10 = FUNC_7 (VAR_7, VAR_0);

  FUNC_4 (VAR_10);

  VAR_13 = VAR_3[VAR_12];
  FUNC_4 (VAR_13);
  VAR_16.regno = FUNC_1 (VAR_17);
  VAR_15 =
    (struct see_register_properties **) FUNC_5 (VAR_13,
       &VAR_16, VAR_1);
  VAR_14 = *VAR_15;
  FUNC_4 (VAR_14);

  VAR_11 = VAR_10->bitmap_index;


  FUNC_2 (VAR_4[VAR_12], VAR_11);

  FUNC_3 (VAR_2[VAR_12], VAR_11);

  return 1;
}
