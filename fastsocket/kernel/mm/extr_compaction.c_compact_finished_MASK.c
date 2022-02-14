
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* free_area; } ;
struct compact_control {scalar_t__ free_pfn; scalar_t__ migrate_pfn; int order; size_t migratetype; } ;
struct TYPE_2__ {scalar_t__ nr_free; int * free_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct zone*) ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (struct zone*) ;
 unsigned int VAR_5 ;
 int FUNC_5 (struct zone*,int,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct zone *VAR_6,
       struct compact_control *VAR_7)
{
 unsigned int VAR_8;
 unsigned long VAR_9;

 if (FUNC_2(VAR_4))
  return VAR_2;


 if (VAR_7->free_pfn <= VAR_7->migrate_pfn) {





  if (!FUNC_1())
   FUNC_0(VAR_6);

  return VAR_0;
 }





 if (VAR_7->order == -1)
  return VAR_1;


 VAR_9 = FUNC_4(VAR_6);
 VAR_9 += (1 << VAR_7->order);

 if (!FUNC_5(VAR_6, VAR_7->order, VAR_9, 0, 0))
  return VAR_1;


 for (VAR_8 = VAR_7->order; VAR_8 < VAR_3; VAR_8++) {

  if (!FUNC_3(&VAR_6->free_area[VAR_8].free_list[VAR_7->migratetype]))
   return VAR_2;


  if (VAR_8 >= VAR_5 && VAR_6->free_area[VAR_8].nr_free)
   return VAR_2;
 }

 return VAR_1;
}
