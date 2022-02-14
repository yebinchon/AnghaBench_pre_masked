
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_block {int * sect; } ;
typedef int section ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 void** FUNC_2 (int ,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct object_block *
FUNC_3 (section *VAR_2)
{
  struct object_block *VAR_3;
  void **VAR_4;

  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_4 = FUNC_2 (VAR_1, VAR_2,
       FUNC_1 (VAR_2), VAR_0);
  VAR_3 = (struct object_block *) *VAR_4;
  if (VAR_3 == ((void*)0))
    {
      VAR_3 = (struct object_block *)
 FUNC_0 (sizeof (struct object_block));
      VAR_3->sect = VAR_2;
      *VAR_4 = VAR_3;
    }
  return VAR_3;
}
