
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test__term {int (* check ) (struct list_head*) ;int str; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 struct list_head* FUNC_1 (int) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct list_head*,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct list_head*) ;

__attribute__((used)) static int FUNC_6(struct test__term *VAR_1)
{
 struct list_head *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_3(VAR_2, VAR_1->str);
 if (VAR_3) {
  FUNC_4("failed to parse terms '%s', err %d\n",
    VAR_1->str , VAR_3);
  return VAR_3;
 }

 VAR_3 = VAR_1->check(VAR_2);
 FUNC_2(VAR_2);

 return VAR_3;
}
