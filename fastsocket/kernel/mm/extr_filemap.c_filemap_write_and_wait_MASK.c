
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {scalar_t__ nrpages; } ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*) ;
 int FUNC_1 (struct address_space*) ;

int FUNC_2(struct address_space *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->nrpages) {
  VAR_2 = FUNC_1(VAR_1);






  if (VAR_2 != -VAR_0) {
   int VAR_3 = FUNC_0(VAR_1);
   if (!VAR_2)
    VAR_2 = VAR_3;
  }
 }
 return VAR_2;
}
