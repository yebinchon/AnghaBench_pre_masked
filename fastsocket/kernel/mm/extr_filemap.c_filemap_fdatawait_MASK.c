
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int host; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct address_space*,int ,int) ;

int FUNC_2(struct address_space *VAR_1)
{
 loff_t VAR_2 = FUNC_0(VAR_1->host);

 if (VAR_2 == 0)
  return 0;

 return FUNC_1(VAR_1, 0,
    (VAR_2 - 1) >> VAR_0);
}
