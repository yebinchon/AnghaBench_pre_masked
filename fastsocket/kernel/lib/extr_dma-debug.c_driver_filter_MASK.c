
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {scalar_t__ name; } ;
struct device {struct device_driver* driver; } ;


 scalar_t__ VAR_0 ;
 struct device_driver* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 struct device_driver* FUNC_0 (struct device_driver*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device_driver*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_6(struct device *VAR_4)
{
 struct device_driver *VAR_5;
 unsigned long VAR_6;
 bool VAR_7;


 if (FUNC_1(!VAR_2[0]))
  return 1;


 if (VAR_1 && VAR_4 && VAR_4->driver == VAR_1)
  return 1;


 if (!VAR_4)
  return 0;

 if (VAR_1 || !VAR_2[0])
  return 0;


 VAR_5 = FUNC_0(VAR_4->driver);
 if (!VAR_5)
  return 0;


 FUNC_3(&VAR_3, VAR_6);

 VAR_7 = 0;
 if (VAR_5->name &&
     FUNC_5(VAR_2, VAR_5->name, VAR_0 - 1) == 0) {
  VAR_1 = VAR_5;
  VAR_7 = 1;
 }

 FUNC_4(&VAR_3, VAR_6);
 FUNC_2(VAR_5);

 return VAR_7;
}
