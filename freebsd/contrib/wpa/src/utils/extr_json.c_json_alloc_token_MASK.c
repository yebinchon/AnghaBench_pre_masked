
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct json_token* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static struct json_token * FUNC_2(unsigned int *VAR_2)
{
 (*VAR_2)++;
 if (*VAR_2 > VAR_0) {
  FUNC_1(VAR_1, "JSON: Maximum token limit exceeded");
  return ((void*)0);
 }
 return FUNC_0(sizeof(struct json_token));
}
