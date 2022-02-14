
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {struct fdescmount* mnt_data; } ;
struct fdescmount {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fdescmount*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mount*,int,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_6, int VAR_7)
{
 struct fdescmount *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = 0;
 VAR_8 = VAR_6->mnt_data;
 if (VAR_7 & VAR_2) {

  FUNC_1(&VAR_5);
  VAR_8->flags |= VAR_0;
  FUNC_2(&VAR_5);
  VAR_10 |= VAR_1;
 }
 if ((VAR_9 = FUNC_3(VAR_6, 1, VAR_10, VAR_4)) != 0)
  return (VAR_9);




 VAR_6->mnt_data = ((void*)0);
 FUNC_0(VAR_8, VAR_3);
 return (0);
}
