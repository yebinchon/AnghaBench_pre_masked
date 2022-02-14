
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int d_aliases; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct disk* FUNC_1 (int,int) ;

struct disk *
FUNC_2(void)
{
 struct disk *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct disk), VAR_0 | VAR_1);
 FUNC_0(&VAR_2->d_aliases);
 return (VAR_2);
}
