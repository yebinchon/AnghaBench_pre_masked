
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static __inline void FUNC_3(struct nfsmount *VAR_0, int VAR_1,
    char *VAR_2, char **VAR_3, size_t *VAR_4)
{
 int VAR_5;

 if (VAR_1 != 0 && *VAR_4 > FUNC_2(VAR_2)) {
  VAR_5 = FUNC_1(*VAR_3, *VAR_4, "%s", VAR_2);
  if (VAR_5 != FUNC_2(VAR_2))
   FUNC_0("EEK!!\n");
  *VAR_3 += VAR_5;
  *VAR_4 -= VAR_5;
 }
}
