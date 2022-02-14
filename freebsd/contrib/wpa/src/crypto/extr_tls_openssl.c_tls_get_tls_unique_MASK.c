
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; scalar_t__ server; } ;


 size_t FUNC_0 (int ,int *,size_t) ;
 size_t FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct tls_connection *VAR_0, u8 *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0->ssl);
 if ((VAR_0->server && !VAR_4) || (!VAR_0->server && VAR_4))
  VAR_3 = FUNC_1(VAR_0->ssl, VAR_1, VAR_2);
 else
  VAR_3 = FUNC_0(VAR_0->ssl, VAR_1, VAR_2);

 if (VAR_3 == 0 || VAR_3 > VAR_2)
  return -1;

 return VAR_3;
}
