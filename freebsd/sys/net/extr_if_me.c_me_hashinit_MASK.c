
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me_list {int dummy; } ;


 int FUNC_0 (struct me_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct me_list* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static struct me_list *
FUNC_2(void)
{
 struct me_list *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(struct me_list) * VAR_0,
     VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(&VAR_3[VAR_4]);

 return (VAR_3);
}
