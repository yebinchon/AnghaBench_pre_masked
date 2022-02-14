
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_key {int user; struct data_key* key; } ;


 int FUNC_0 (struct data_key*) ;

__attribute__((used)) static void FUNC_1(struct data_key *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->user--;
 if (VAR_0->user > 1)
  return;

 FUNC_0(VAR_0->key);
 FUNC_0(VAR_0);
}
