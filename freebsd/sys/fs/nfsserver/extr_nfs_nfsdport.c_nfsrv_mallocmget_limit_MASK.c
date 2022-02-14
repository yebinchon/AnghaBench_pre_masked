
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

int
FUNC_1(void)
{
 static int VAR_1 = 0;
 static int VAR_2 = 1;

 if (VAR_0 && (VAR_2++ % 1000) == 0) {
  if ((VAR_1++ % 100) == 0)
   FUNC_0("nfsd: malloc/mget near limit\n");
  return (1);
 }
 return (0);
}
