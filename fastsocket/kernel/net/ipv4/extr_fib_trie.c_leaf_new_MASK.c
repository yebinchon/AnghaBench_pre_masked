
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct leaf {int list; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct leaf* FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct leaf *FUNC_2(void)
{
 struct leaf *VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3) {
  VAR_3->parent = VAR_1;
  FUNC_0(&VAR_3->list);
 }
 return VAR_3;
}
