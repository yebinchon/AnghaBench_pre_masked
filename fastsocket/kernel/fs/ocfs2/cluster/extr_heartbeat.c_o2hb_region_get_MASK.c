
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int hr_item; } ;


 int VAR_0 ;
 struct o2hb_region* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2)
{
 int VAR_3 = 0;
 struct o2hb_region *VAR_4;

 FUNC_4(&VAR_1);

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  VAR_3 = -VAR_0;
 FUNC_5(&VAR_1);

 if (VAR_3)
  goto out;

 VAR_3 = FUNC_2();
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_1(&VAR_4->hr_item);
 if (VAR_3)
  FUNC_3();

out:
 return VAR_3;
}
