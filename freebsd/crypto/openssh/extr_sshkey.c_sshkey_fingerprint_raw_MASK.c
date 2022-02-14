
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int,int *,size_t,int *,int ) ;
 int FUNC_5 (struct sshkey const*,int **,size_t*,int,int ) ;

int
FUNC_6(const struct sshkey *VAR_5, int VAR_6,
    u_char **VAR_7, size_t *VAR_8)
{
 u_char *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 size_t VAR_11 = 0;
 int VAR_12 = VAR_3;

 if (VAR_7 != ((void*)0))
  *VAR_7 = ((void*)0);
 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;
 if (FUNC_3(VAR_6) == 0) {
  VAR_12 = VAR_4;
  goto out;
 }
 if ((VAR_12 = FUNC_5(VAR_5, &VAR_9, &VAR_11, 1, VAR_0))
     != 0)
  goto out;
 if ((VAR_10 = FUNC_0(1, VAR_1)) == ((void*)0)) {
  VAR_12 = VAR_2;
  goto out;
 }
 if ((VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_11,
     VAR_10, VAR_1)) != 0)
  goto out;

 if (VAR_7 != ((void*)0)) {
  *VAR_7 = VAR_10;
  VAR_10 = ((void*)0);
 }
 if (VAR_8 != ((void*)0))
  *VAR_8 = FUNC_3(VAR_6);
 VAR_12 = 0;
 out:
 FUNC_2(VAR_10);
 if (VAR_9 != ((void*)0)) {
  FUNC_1(VAR_9, VAR_11);
  FUNC_2(VAR_9);
 }
 return VAR_12;
}
