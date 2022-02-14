
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blake2s_xform_ctx {scalar_t__ klen; int state; int key; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct blake2s_xform_ctx *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_2->klen > 0)
  VAR_3 = FUNC_0(&VAR_2->state, VAR_0,
      VAR_2->key, VAR_2->klen);
 else
  VAR_3 = FUNC_1(&VAR_2->state, VAR_0);
 if (VAR_3 != 0)
  FUNC_2("blake2s_init_key: invalid arguments");
}
