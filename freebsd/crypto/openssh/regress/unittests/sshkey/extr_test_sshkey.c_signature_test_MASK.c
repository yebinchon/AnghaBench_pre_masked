
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct sshkey*,int**,size_t*,int const*,size_t,char const*,int ) ;
 int FUNC_6 (struct sshkey*,int*,size_t,int const*,size_t,int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct sshkey *VAR_0, struct sshkey *VAR_1, const char *VAR_2,
    const u_char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 u_char *VAR_6;

 FUNC_0(FUNC_5(VAR_0, &VAR_6, &VAR_5, VAR_3, VAR_4, VAR_2, 0), 0);
 FUNC_3(VAR_5, 8);
 FUNC_2(VAR_6, ((void*)0));
 FUNC_0(FUNC_6(VAR_0, VAR_6, VAR_5, VAR_3, VAR_4, ((void*)0), 0), 0);
 FUNC_1(FUNC_6(VAR_1, VAR_6, VAR_5, VAR_3, VAR_4, ((void*)0), 0), 0);

 VAR_6[VAR_5 - 5] ^= 0x10;
 FUNC_1(FUNC_6(VAR_0, VAR_6, VAR_5, VAR_3, VAR_4, ((void*)0), 0), 0);
 FUNC_4(VAR_6);
}
