
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_tok {scalar_t__ token; } ;



int
FUNC_0(
 const void *VAR_0,
 const void *VAR_1
 )
{
 const struct key_tok *VAR_2 = VAR_0;
 const struct key_tok *VAR_3 = VAR_1;

 if (VAR_2->token == VAR_3->token)
  return 0;

 if (VAR_2->token < VAR_3->token)
  return -1;
 else
  return 1;
}
