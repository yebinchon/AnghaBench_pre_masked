
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static __inline void FUNC_2(struct nfsmount *VAR_0, int VAR_1,
    char *VAR_2, char **VAR_3, size_t *VAR_4)
{
 int VAR_5;

 if (*VAR_4 > FUNC_1(VAR_2) + 1) {

  VAR_5 = FUNC_0(*VAR_3, *VAR_4, "%s=%d", VAR_2, VAR_1);
  if (VAR_5 < *VAR_4) {
   *VAR_3 += VAR_5;
   *VAR_4 -= VAR_5;
  }
 }
}
