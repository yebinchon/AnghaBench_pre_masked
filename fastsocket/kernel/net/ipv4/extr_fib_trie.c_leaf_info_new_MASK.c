
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct leaf_info {int plen; int falh; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct leaf_info* FUNC_1 (int,int ) ;

__attribute__((used)) static struct leaf_info *FUNC_2(int VAR_1)
{
 struct leaf_info *VAR_2 = FUNC_1(sizeof(struct leaf_info), VAR_0);
 if (VAR_2) {
  VAR_2->plen = VAR_1;
  FUNC_0(&VAR_2->falh);
 }
 return VAR_2;
}
