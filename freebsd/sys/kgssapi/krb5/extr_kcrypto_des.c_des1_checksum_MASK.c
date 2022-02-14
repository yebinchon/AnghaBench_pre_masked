
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct krb5_key_state {int dummy; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct krb5_key_state const*,int ,char*,int ,int,int *,int ) ;
 int FUNC_3 (struct mbuf*,size_t,size_t,int ,int *) ;
 int FUNC_4 (struct mbuf*,size_t,size_t,char*) ;

__attribute__((used)) static void
FUNC_5(const struct krb5_key_state *VAR_2, int VAR_3,
    struct mbuf *VAR_4, size_t VAR_5, size_t VAR_6, size_t VAR_7)
{
 char VAR_8[16];
 MD5_CTX VAR_9;






 FUNC_1(&VAR_9);
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_1, &VAR_9);
 FUNC_0(VAR_8, &VAR_9);

 FUNC_2(VAR_2, 0, VAR_8, 0, 16, ((void*)0), VAR_0);
 FUNC_4(VAR_4, VAR_5 + VAR_6, VAR_7, VAR_8 + 8);
}
