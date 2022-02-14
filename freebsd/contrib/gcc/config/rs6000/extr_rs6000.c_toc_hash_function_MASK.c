
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toc_hash_struct {int key_mode; int key; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned
FUNC_1 (const void *VAR_0)
{
  const struct toc_hash_struct *VAR_1 =
    (const struct toc_hash_struct *) VAR_0;
  return FUNC_0 (VAR_1->key) ^ VAR_1->key_mode;
}
