
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct flex_array {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hlist_head*) ;
 struct flex_array* FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (struct flex_array*) ;
 scalar_t__ FUNC_3 (struct flex_array*,int) ;
 int FUNC_4 (struct flex_array*,int ,unsigned int,int ) ;

__attribute__((used)) static struct flex_array *FUNC_5(unsigned int VAR_1)
{
 struct flex_array *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_1(sizeof(struct hlist_head),
       VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_2, 0, VAR_1, VAR_0);
 if (VAR_4) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0((struct hlist_head *)
     FUNC_3(VAR_2, VAR_3));

 return VAR_2;
}
