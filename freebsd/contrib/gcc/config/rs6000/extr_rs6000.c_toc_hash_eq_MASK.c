
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toc_hash_struct {scalar_t__ key_mode; int key; } ;
typedef int rtx ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  rtx VAR_2 = ((const struct toc_hash_struct *) VAR_0)->key;
  rtx VAR_3 = ((const struct toc_hash_struct *) VAR_1)->key;

  if (((const struct toc_hash_struct *) VAR_0)->key_mode
      != ((const struct toc_hash_struct *) VAR_1)->key_mode)
    return 0;

  return FUNC_0 (VAR_2, VAR_3);
}
