
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_default {struct label_default* ld_labels; struct label_default* ld_name; } ;


 struct label_default* FUNC_0 (int *) ;
 int FUNC_1 (struct label_default*,int ) ;
 int FUNC_2 (struct label_default*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct label_default *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_0))) {
  FUNC_2(VAR_2->ld_name);
  FUNC_2(VAR_2->ld_labels);
  FUNC_1(VAR_2, VAR_1);
  FUNC_2(VAR_2);
 }
}
