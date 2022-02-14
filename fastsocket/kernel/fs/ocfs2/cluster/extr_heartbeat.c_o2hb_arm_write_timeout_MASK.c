
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_write_timeout_work; int hr_last_timeout_start; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct o2hb_region *VAR_2)
{
 FUNC_1(0, "Queue write timeout for %u ms\n", VAR_0);

 FUNC_0(&VAR_2->hr_write_timeout_work);
 VAR_2->hr_last_timeout_start = VAR_1;
 FUNC_3(&VAR_2->hr_write_timeout_work,
         FUNC_2(VAR_0));
}
