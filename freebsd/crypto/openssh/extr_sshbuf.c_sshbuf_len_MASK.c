
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {size_t size; size_t off; } ;


 scalar_t__ FUNC_0 (struct sshbuf const*) ;

size_t
FUNC_1(const struct sshbuf *VAR_0)
{
 if (FUNC_0(VAR_0) != 0)
  return 0;
 return VAR_0->size - VAR_0->off;
}
