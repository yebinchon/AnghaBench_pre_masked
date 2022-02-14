
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int * session; } ;


 int FUNC_0 (int *,int ,char const*,int ,int ,int *,size_t,char*) ;
 int FUNC_1 (int *,int ,char const*,size_t,char const*,size_t,char*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(void *VAR_0, struct tls_connection *VAR_1,
         const char *VAR_2, const u8 *VAR_3,
         size_t VAR_4, u8 *VAR_5, size_t VAR_6)
{
 if (VAR_1 == ((void*)0) || VAR_1->session == ((void*)0))
  return -1;






 if (VAR_3)
  return -1;
 return FUNC_0(VAR_1->session, FUNC_2(VAR_2), VAR_2,
     0 , 0, ((void*)0), VAR_6,
     (char *) VAR_5);

}
