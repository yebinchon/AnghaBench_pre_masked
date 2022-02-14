
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flex_array {int element_size; unsigned int total_nr_elements; int * parts; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct flex_array*) ;
 struct flex_array* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ,int ) ;

struct flex_array *FUNC_4(int VAR_4, unsigned int VAR_5,
     gfp_t VAR_6)
{
 struct flex_array *VAR_7;
 int VAR_8 = VAR_2 *
    FUNC_0(VAR_4);


 if (VAR_5 > VAR_8)
  return ((void*)0);
 VAR_7 = FUNC_2(sizeof(struct flex_array), VAR_6);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->element_size = VAR_4;
 VAR_7->total_nr_elements = VAR_5;
 if (FUNC_1(VAR_7) && !(VAR_6 & VAR_3))
  FUNC_3(&VAR_7->parts[0], VAR_1,
      VAR_0);
 return VAR_7;
}
