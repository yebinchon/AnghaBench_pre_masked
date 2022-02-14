
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int size; int * d; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sshbuf*,size_t) ;

int
FUNC_2(struct sshbuf *VAR_0, size_t VAR_1, u_char **VAR_2)
{
 u_char *VAR_3;
 int VAR_4;

 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);

 FUNC_0(("reserve buf = %p len = %zu", VAR_0, VAR_1));
 if ((VAR_4 = FUNC_1(VAR_0, VAR_1)) != 0)
  return VAR_4;

 VAR_3 = VAR_0->d + VAR_0->size;
 VAR_0->size += VAR_1;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3;
 return 0;
}
