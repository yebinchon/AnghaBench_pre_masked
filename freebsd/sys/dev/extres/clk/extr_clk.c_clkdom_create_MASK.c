
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkdom {int ofw_mapper; int clknode_list; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct clkdom*,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct clkdom* FUNC_5 (int,int ,int) ;

struct clkdom *
FUNC_6(device_t VAR_8)
{
 struct clkdom *VAR_9;

 VAR_9 = FUNC_5(sizeof(struct clkdom), VAR_2, VAR_3 | VAR_4);
 VAR_9->dev = VAR_8;
 FUNC_2(&VAR_9->clknode_list);




 FUNC_0(FUNC_3(VAR_8),
   FUNC_1(FUNC_4(VAR_8)),
   VAR_5, "clocks",
   VAR_1 | VAR_0,
      VAR_9, 0, VAR_6,
      "A",
      "Clock list for the domain");

 return (VAR_9);
}
