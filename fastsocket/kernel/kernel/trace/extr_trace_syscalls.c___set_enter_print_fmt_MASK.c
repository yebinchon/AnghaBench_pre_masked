
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_metadata {int nb_args; char** args; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char*,...) ;

__attribute__((used)) static
int FUNC_1(struct syscall_metadata *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;




 VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0), "\"");
 for (VAR_4 = 0; VAR_4 < VAR_1->nb_args; VAR_4++) {
  VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0), "%s: 0x%%0%zulx%s",
    VAR_1->args[VAR_4], sizeof(unsigned long),
    VAR_4 == VAR_1->nb_args - 1 ? "" : ", ");
 }
 VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0), "\"");

 for (VAR_4 = 0; VAR_4 < VAR_1->nb_args; VAR_4++) {
  VAR_5 += FUNC_0(VAR_2 + VAR_5, (VAR_3 ? VAR_3 - VAR_5 : 0),
    ", ((unsigned long)(REC->%s))", VAR_1->args[VAR_4]);
 }




 return VAR_5;
}
