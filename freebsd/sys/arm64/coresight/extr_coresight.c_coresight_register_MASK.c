
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coresight_device {int dev_type; int pdata; int node; int dev; } ;
struct coresight_desc {int dev_type; int pdata; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct coresight_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct coresight_device* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct coresight_desc *VAR_6)
{
 struct coresight_device *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct coresight_device),
     VAR_0, VAR_1 | VAR_2);
 VAR_7->dev = VAR_6->dev;
 VAR_7->node = FUNC_4(VAR_6->dev);
 VAR_7->pdata = VAR_6->pdata;
 VAR_7->dev_type = VAR_6->dev_type;

 FUNC_2(&VAR_4);
 FUNC_0(&VAR_3, VAR_7, VAR_5);
 FUNC_3(&VAR_4);

 return (0);
}
