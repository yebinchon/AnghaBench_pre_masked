
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {scalar_t__ server; scalar_t__ client; } ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (struct tls_connection*) ;
 int FUNC_4 (scalar_t__,char const*,int const*,size_t,int,int *,int) ;
 int FUNC_5 (scalar_t__,char const*,int const*,size_t,int,int *,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, struct tls_connection *VAR_1,
         const char *VAR_2, const u8 *VAR_3,
         size_t VAR_4, int VAR_5,
         int VAR_6, u8 *VAR_7, size_t VAR_8)
{
 int VAR_9 = -1, VAR_10 = 0;
 u8 *VAR_11 = ((void*)0);
 u8 *VAR_12 = VAR_7;

 if (VAR_6) {
  VAR_10 = FUNC_3(VAR_1);
  if (VAR_10 < 0)
   return -1;
  VAR_11 = FUNC_1(VAR_10 + VAR_8);
  if (!VAR_11)
   return -1;
  VAR_12 = VAR_11;
 }
 if (VAR_9 == 0 && VAR_6)
  FUNC_2(VAR_7, VAR_12 + VAR_10, VAR_8);
 FUNC_0(VAR_11, VAR_10);

 return VAR_9;
}
