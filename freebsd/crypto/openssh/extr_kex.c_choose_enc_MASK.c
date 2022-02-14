
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshenc {char* name; int * cipher; int block_size; int key_len; int * key; int iv_len; int * iv; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,int *) ;

__attribute__((used)) static int
FUNC_6(struct sshenc *VAR_2, char *VAR_3, char *VAR_4)
{
 char *VAR_5 = FUNC_5(VAR_3, VAR_4, ((void*)0));

 if (VAR_5 == ((void*)0))
  return VAR_1;
 if ((VAR_2->cipher = FUNC_1(VAR_5)) == ((void*)0)) {
  FUNC_4(VAR_5);
  return VAR_0;
 }
 VAR_2->name = VAR_5;
 VAR_2->enabled = 0;
 VAR_2->iv = ((void*)0);
 VAR_2->iv_len = FUNC_2(VAR_2->cipher);
 VAR_2->key = ((void*)0);
 VAR_2->key_len = FUNC_3(VAR_2->cipher);
 VAR_2->block_size = FUNC_0(VAR_2->cipher);
 return 0;
}
