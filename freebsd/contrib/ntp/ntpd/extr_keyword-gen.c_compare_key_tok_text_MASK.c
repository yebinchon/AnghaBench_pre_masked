
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_tok {int key; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(
 const void *VAR_0,
 const void *VAR_1
 )
{
 const struct key_tok *VAR_2 = VAR_0;
 const struct key_tok *VAR_3 = VAR_1;

 return FUNC_0(VAR_2->key, VAR_3->key);
}
