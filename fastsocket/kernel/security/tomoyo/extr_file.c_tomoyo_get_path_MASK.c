
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {int name; } ;
struct tomoyo_path_info_with_data {struct tomoyo_path_info head; int body; } ;
struct path {int dummy; } ;


 struct tomoyo_path_info_with_data* FUNC_0 (int) ;
 int FUNC_1 (struct tomoyo_path_info*) ;
 int FUNC_2 (struct tomoyo_path_info_with_data*) ;
 int FUNC_3 (struct path*,int ,int) ;

__attribute__((used)) static struct tomoyo_path_info *FUNC_4(struct path *VAR_0)
{
 int VAR_1;
 struct tomoyo_path_info_with_data *VAR_2 = FUNC_0(sizeof(*VAR_2));

 if (!VAR_2)
  return ((void*)0);

 VAR_1 = FUNC_3(VAR_0, VAR_2->body,
        sizeof(VAR_2->body) - 2);
 if (!VAR_1) {
  VAR_2->head.name = VAR_2->body;
  FUNC_1(&VAR_2->head);
  return &VAR_2->head;
 }
 FUNC_2(VAR_2);
 return ((void*)0);
}
