
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_name {size_t ip_len; int * ip; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct x509_name *VAR_1,
           const u8 *VAR_2, size_t VAR_3)
{

 FUNC_2(VAR_0, "X509: altName - iPAddress", VAR_2, VAR_3);
 FUNC_0(VAR_1->ip);
 VAR_1->ip = FUNC_1(VAR_2, VAR_3);
 if (VAR_1->ip == ((void*)0))
  return -1;
 VAR_1->ip_len = VAR_3;
 return 0;
}
