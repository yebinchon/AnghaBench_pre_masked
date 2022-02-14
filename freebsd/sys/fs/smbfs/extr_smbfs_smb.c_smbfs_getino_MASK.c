
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct smbnode {long n_ino; } ;
typedef int MD5_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static long
FUNC_4(struct smbnode *VAR_0, const char *VAR_1, int VAR_2)
{
 u_int32_t VAR_3;

 VAR_3 = VAR_0->n_ino + FUNC_3(VAR_1, VAR_2);
 if (VAR_3 <= 2)
  VAR_3 += 3;
 return VAR_3;
}
