
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int key_id; int key_len; int key_seq; int typen; } ;


 int FUNC_0 (struct key,struct key) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

bool
FUNC_3(
 int VAR_0,
 int VAR_1,
 const char * VAR_2,
 const char * VAR_3,
 struct key VAR_4
 )
{
 struct key VAR_5;

 VAR_5.key_id = VAR_0;
 VAR_5.key_len = VAR_1;
 FUNC_2(VAR_5.typen, VAR_2, sizeof(VAR_5.typen));
 FUNC_1(VAR_5.key_seq, VAR_3, VAR_1);

 return FUNC_0(VAR_5, VAR_4);
}
