
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int max; int * swap_map; } ;
typedef int pgoff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct swap_info_struct** VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

int FUNC_5(swp_entry_t VAR_4, unsigned long *VAR_5)
{
 struct swap_info_struct *VAR_6;
 int VAR_7 = VAR_1;
 pgoff_t VAR_8, VAR_9;
 pgoff_t VAR_10, VAR_11;
 int VAR_12 = 0;

 if (!VAR_7)
  return 0;

 VAR_6 = VAR_2[FUNC_4(VAR_4)];
 VAR_8 = FUNC_3(VAR_4);
 VAR_10 = (VAR_8 >> VAR_7) << VAR_7;
 VAR_11 = VAR_10 + (1 << VAR_7);
 if (!VAR_10)
  VAR_10++;

 FUNC_0(&VAR_3);
 if (VAR_11 > VAR_6->max)
  VAR_11 = VAR_6->max;


 for (VAR_9 = VAR_8; ++VAR_9 < VAR_11; VAR_12++) {

  if (!VAR_6->swap_map[VAR_9])
   break;
  if (FUNC_2(VAR_6->swap_map[VAR_9]) == VAR_0)
   break;
 }

 for (VAR_9 = VAR_8; --VAR_9 >= VAR_10; VAR_12++) {

  if (!VAR_6->swap_map[VAR_9])
   break;
  if (FUNC_2(VAR_6->swap_map[VAR_9]) == VAR_0)
   break;
 }
 FUNC_1(&VAR_3);





 *VAR_5 = ++VAR_9;
 return VAR_12? ++VAR_12: 0;
}
