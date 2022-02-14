
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {scalar_t__ nrpages; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct address_space*,int,int,int ) ;
 int FUNC_1 (struct address_space*,int,int) ;

int FUNC_2(struct address_space *VAR_3,
     loff_t VAR_4, loff_t VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3->nrpages) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5,
       VAR_2);

  if (VAR_6 != -VAR_0) {
   int VAR_7 = FUNC_1(VAR_3,
      VAR_4 >> VAR_1,
      VAR_5 >> VAR_1);
   if (!VAR_6)
    VAR_6 = VAR_7;
  }
 }
 return VAR_6;
}
