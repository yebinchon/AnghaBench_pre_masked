
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int refcount; size_t max_size; size_t size; size_t off; scalar_t__ readonly; } ;


 scalar_t__ FUNC_0 (struct sshbuf const*) ;

size_t
FUNC_1(const struct sshbuf *VAR_0)
{
 if (FUNC_0(VAR_0) != 0 || VAR_0->readonly || VAR_0->refcount > 1)
  return 0;
 return VAR_0->max_size - (VAR_0->size - VAR_0->off);
}
