
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* create ) (struct net*,struct socket*,int,int) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct socket*,int) ;
 struct net VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct net*,struct socket*,int,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_7, struct socket *VAR_8, int VAR_9,
     int VAR_10)
{
 int VAR_11;

 if (VAR_7 != &VAR_6)
  return -VAR_1;

 if (VAR_9 < 0 || VAR_9 >= VAR_0)
  return -VAR_2;

 if (!VAR_4[VAR_9])
  FUNC_4("bt-proto-%d", VAR_9);

 VAR_11 = -VAR_3;

 FUNC_2(&VAR_5);

 if (VAR_4[VAR_9] && FUNC_6(VAR_4[VAR_9]->owner)) {
  VAR_11 = VAR_4[VAR_9]->create(VAR_7, VAR_8, VAR_9, VAR_10);
  FUNC_0(VAR_8, VAR_9);
  FUNC_1(VAR_4[VAR_9]->owner);
 }

 FUNC_3(&VAR_5);

 return VAR_11;
}
