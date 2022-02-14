
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundbus_driver {int (* probe ) (struct soundbus_dev*) ;} ;
struct soundbus_dev {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct soundbus_dev*) ;
 int FUNC_1 (struct soundbus_dev*) ;
 int FUNC_2 (struct soundbus_dev*) ;
 struct soundbus_dev* FUNC_3 (struct device*) ;
 struct soundbus_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 int VAR_2 = -VAR_0;
 struct soundbus_driver *VAR_3;
 struct soundbus_dev *VAR_4;

 VAR_3 = FUNC_4(VAR_1->driver);
 VAR_4 = FUNC_3(VAR_1);

 if (!VAR_3->probe)
  return VAR_2;

 FUNC_0(VAR_4);

 VAR_2 = VAR_3->probe(VAR_4);
 if (VAR_2)
  FUNC_1(VAR_4);

 return VAR_2;
}
