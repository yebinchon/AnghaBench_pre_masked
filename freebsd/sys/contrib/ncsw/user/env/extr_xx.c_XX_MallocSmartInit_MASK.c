
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(void)
{
 int VAR_7;

 VAR_7 = VAR_1;
 FUNC_1(&VAR_5);

 if (VAR_6)
  goto out;


 VAR_6 = FUNC_0(VAR_2, VAR_3,
     VAR_4, 0, 0xFFFFFFFFFull, VAR_2, 0);
 if (!VAR_6) {
  VAR_7 = VAR_0;
  goto out;
 }

out:
 FUNC_2(&VAR_5);
 return (VAR_7);
}
