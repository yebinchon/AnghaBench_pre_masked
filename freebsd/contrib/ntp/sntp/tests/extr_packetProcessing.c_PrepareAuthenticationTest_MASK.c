
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_3__ {int key_id; int key_len; int key_seq; int typen; int * next; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ,void const*,int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ FUNC_5 (char const*) ;

void
FUNC_6(
 int VAR_3,
 int VAR_4,
 const char * VAR_5,
 const void * VAR_6
 )
{
 char VAR_7[25];
 FUNC_4(VAR_7, 25, "%d", VAR_3);
 FUNC_0("-a", VAR_7);

 VAR_0 = 1;
 VAR_1 = FUNC_2(sizeof(struct key));
 VAR_1->next = ((void*)0);
 VAR_1->key_id = VAR_3;
 VAR_1->key_len = VAR_4;
 FUNC_3(VAR_1->typen, VAR_5, FUNC_5(VAR_5) + 1);

 FUNC_1(VAR_4 < sizeof(VAR_1->key_seq));

 FUNC_3(VAR_1->key_seq, VAR_6, VAR_1->key_len);
 VAR_2 = 1;
}
