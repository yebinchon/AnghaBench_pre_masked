
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varray_type ;
typedef union parameter_info {int dummy; } parameter_info ;
typedef int tree ;
struct ipa_replace_map {int dummy; } ;
struct cgraph_node {struct cgraph_edge* callers; struct cgraph_node* next; } ;
struct cgraph_edge {struct cgraph_edge* next_caller; } ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,struct ipa_replace_map*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int,struct cgraph_edge*) ;
 int VAR_1 ;
 struct cgraph_node* FUNC_8 (struct cgraph_node*,int,int ) ;
 char* FUNC_9 (struct cgraph_node*) ;
 struct cgraph_node* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (scalar_t__,char*,char*) ;
 int VAR_4 ;
 int FUNC_11 (struct cgraph_node*) ;
 int FUNC_12 (struct cgraph_node*,int) ;
 int FUNC_13 (struct cgraph_node*,struct cgraph_node*) ;
 union parameter_info* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct cgraph_node*,int) ;
 scalar_t__ FUNC_17 (struct cgraph_node*) ;
 int FUNC_18 (struct cgraph_node*,int,union parameter_info*,int) ;
 struct ipa_replace_map* FUNC_19 (int,int ,union parameter_info*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_23 (void)
{
  struct cgraph_node *VAR_6, *VAR_7 = ((void*)0);
  int VAR_8, VAR_9;
  union parameter_info *VAR_10;
  FUNC_4(VAR_1,VAR_4) *VAR_5;
  varray_type VAR_11;
  struct cgraph_edge *VAR_12;
  int VAR_13, VAR_14;
  tree VAR_15;
  enum cvalue_type VAR_16;
  struct ipa_replace_map *VAR_17;

  for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next)
    {


      if (FUNC_17 (VAR_6))
 continue;
      VAR_9 = 0;
      VAR_14 = FUNC_11 (VAR_6);
      for (VAR_8 = 0; VAR_8 < VAR_14; VAR_8++)
 {
   VAR_16 = FUNC_15 (FUNC_16 (VAR_6, VAR_8));
   if (FUNC_20 (VAR_16))
     VAR_9++;
 }
      if (VAR_9 == 0)
 continue;
      FUNC_2 (VAR_11, VAR_9, "replace_trees");
      for (VAR_8 = 0; VAR_8 < VAR_14; VAR_8++)
 {
   VAR_16 = FUNC_15 (FUNC_16 (VAR_6, VAR_8));
   if (FUNC_20 (VAR_16))
     {
       VAR_10 = FUNC_14 (FUNC_16 (VAR_6, VAR_8));
       VAR_15 = FUNC_12 (VAR_6, VAR_8);
       VAR_17 =
  FUNC_19 (VAR_16, VAR_15, VAR_10);
       FUNC_3 (VAR_11, VAR_17);
     }
 }

      VAR_13 = 0;
      for (VAR_12 = VAR_6->callers; VAR_12 != ((void*)0); VAR_12 = VAR_12->next_caller)
 VAR_13++;
      VAR_5 = FUNC_5 (VAR_1, VAR_4, VAR_13);
      for (VAR_12 = VAR_6->callers; VAR_12 != ((void*)0); VAR_12 = VAR_12->next_caller)
 FUNC_7 (VAR_1, VAR_5, VAR_12);


      VAR_7 =
 FUNC_8 (VAR_6, VAR_5, VAR_11);
      FUNC_6 (VAR_1, VAR_4, VAR_5);
      FUNC_1 (VAR_11);
      if (VAR_7 == ((void*)0))
 continue;
      if (VAR_3)
 FUNC_10 (VAR_3, "versioned function %s\n",
   FUNC_9 (VAR_6));
      FUNC_13 (VAR_6, VAR_7);
      for (VAR_8 = 0; VAR_8 < VAR_14; VAR_8++)
 {
   VAR_16 = FUNC_15 (FUNC_16 (VAR_6, VAR_8));
   if (FUNC_20 (VAR_16))
     {
       VAR_10 = FUNC_14 (FUNC_16 (VAR_6, VAR_8));
       VAR_15 = FUNC_12 (VAR_6, VAR_8);
       if (VAR_16 != VAR_0
    && !FUNC_0 (VAR_15))
  FUNC_18 (VAR_7, VAR_8, VAR_10, VAR_16);
     }
 }
    }
  FUNC_21 ();
  FUNC_22 ();
}
