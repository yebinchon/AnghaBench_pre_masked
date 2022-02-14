
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_measure_rule_entry {int list; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,struct ima_measure_rule_entry*) ;
 int FUNC_2 (int ,int *,int *,char const*,char*,int,int) ;
 int FUNC_3 (struct ima_measure_rule_entry*) ;
 struct ima_measure_rule_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char**,char*) ;

ssize_t FUNC_10(char *VAR_8)
{
 const char *VAR_9 = "update_policy";
 char *VAR_10;
 struct ima_measure_rule_entry *VAR_11;
 ssize_t VAR_12, VAR_13;
 int VAR_14 = 0;


 if (VAR_4 != &VAR_6) {
  FUNC_2(VAR_0, ((void*)0),
        ((void*)0), VAR_9, "already exists",
        -VAR_1, VAR_14);
  return -VAR_1;
 }

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_2(VAR_0, ((void*)0),
        ((void*)0), VAR_9, "-ENOMEM", -VAR_2, VAR_14);
  return -VAR_2;
 }

 FUNC_0(&VAR_11->list);

 VAR_10 = FUNC_9(&VAR_8, "\n");
 VAR_13 = FUNC_8(VAR_10) + 1;

 if (*VAR_10 == '#') {
  FUNC_3(VAR_11);
  return VAR_13;
 }

 VAR_12 = FUNC_1(VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_11);
  FUNC_2(VAR_0, ((void*)0),
        ((void*)0), VAR_9, "invalid policy", VAR_12,
        VAR_14);
  return VAR_12;
 }

 FUNC_6(&VAR_5);
 FUNC_5(&VAR_11->list, &VAR_7);
 FUNC_7(&VAR_5);

 return VAR_13;
}
