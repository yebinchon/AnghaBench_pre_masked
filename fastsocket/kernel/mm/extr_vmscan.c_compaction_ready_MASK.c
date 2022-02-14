
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int present_pages; } ;
struct scan_control {unsigned long order; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct zone*) ;
 int FUNC_1 (struct zone*,unsigned long) ;
 unsigned long FUNC_2 (struct zone*) ;
 int FUNC_3 (struct zone*) ;
 unsigned long FUNC_4 (int ,int) ;
 int FUNC_5 (struct zone*,int ,unsigned long,int ,int ) ;

__attribute__((used)) static inline bool FUNC_6(struct zone *VAR_2, struct scan_control *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 bool VAR_6;


 if (VAR_3->order <= VAR_1)
  return 0;







 VAR_4 = FUNC_4(FUNC_3(VAR_2),
  (VAR_2->present_pages + VAR_0-1) /
   VAR_0);
 VAR_5 = FUNC_2(VAR_2) + VAR_4 + (2UL << VAR_3->order);
 VAR_6 = FUNC_5(VAR_2, 0, VAR_5, 0, 0);





 if (FUNC_0(VAR_2))
  return VAR_6;


 if (!FUNC_1(VAR_2, VAR_3->order))
  return 0;

 return VAR_6;
}
