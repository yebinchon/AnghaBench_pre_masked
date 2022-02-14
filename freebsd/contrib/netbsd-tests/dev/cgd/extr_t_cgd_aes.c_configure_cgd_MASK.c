
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgd_ioctl {char const* ci_disk; char const* ci_alg; char const* ci_ivmethod; int ci_keylen; char const* ci_key; int ci_blocksize; } ;
typedef int ci ;


 int VAR_0 ;
 int FUNC_0 (struct cgd_ioctl*,int ,int) ;
 int FUNC_1 (int,int ,struct cgd_ioctl*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct cgd_ioctl VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ci_disk = VAR_2;
 VAR_7.ci_alg = VAR_3;
 VAR_7.ci_ivmethod = VAR_4;
 VAR_7.ci_keylen = 8 * VAR_6 - 8;
 VAR_7.ci_key = VAR_5;
 VAR_7.ci_blocksize = 128;

 return FUNC_1(VAR_1, VAR_0, &VAR_7);
}
