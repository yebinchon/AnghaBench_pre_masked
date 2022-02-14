
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (void*,int const*,size_t) ;
 int FUNC_1 (struct sshbuf*,size_t) ;
 int * FUNC_2 (struct sshbuf*) ;

int
FUNC_3(struct sshbuf *VAR_0, void *VAR_1, size_t VAR_2)
{
 const u_char *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_0, VAR_2)) < 0)
  return VAR_4;
 if (VAR_1 != ((void*)0) && VAR_2 != 0)
  FUNC_0(VAR_1, VAR_3, VAR_2);
 return 0;
}
