
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {scalar_t__ off; scalar_t__ size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct sshbuf*) ;
 size_t FUNC_3 (struct sshbuf*) ;

int
FUNC_4(struct sshbuf *VAR_1, size_t VAR_2)
{
 int VAR_3;

 FUNC_0(("len = %zu", VAR_2));
 if ((VAR_3 = FUNC_2(VAR_1)) != 0)
  return VAR_3;
 if (VAR_2 == 0)
  return 0;
 if (VAR_2 > FUNC_3(VAR_1))
  return VAR_0;
 VAR_1->off += VAR_2;

 if (VAR_1->off == VAR_1->size)
  VAR_1->off = VAR_1->size = 0;
 FUNC_1("done");
 return 0;
}
