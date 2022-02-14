
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;

struct net_device *FUNC_2(char *VAR_4)
{
 struct net_device *VAR_5 = FUNC_0(&VAR_3, VAR_4);

 if (VAR_5 &&
     (!(VAR_5->flags & VAR_2) || (VAR_5->type != VAR_1



     )))
  FUNC_1(VAR_5);

 return VAR_5;
}
