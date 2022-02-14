
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int refcount; size_t max_size; size_t size; size_t off; scalar_t__ readonly; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sshbuf const*) ;

int
FUNC_2(const struct sshbuf *VAR_2, size_t VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2)) != 0)
  return VAR_4;
 if (VAR_2->readonly || VAR_2->refcount > 1)
  return VAR_0;
 FUNC_0("check");

 if (VAR_3 > VAR_2->max_size || VAR_2->max_size - VAR_3 < VAR_2->size - VAR_2->off)
  return VAR_1;
 return 0;
}
