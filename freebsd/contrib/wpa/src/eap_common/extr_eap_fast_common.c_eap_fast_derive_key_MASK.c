
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int dummy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (void*,struct tls_connection*,int *,size_t) ;

u8 * FUNC_3(void *VAR_0, struct tls_connection *VAR_1, size_t VAR_2)
{
 u8 *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2)) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
