
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct krb5_address {int ka_addr; int ka_type; } ;


 int FUNC_0 (int const**,size_t*,int *) ;
 int FUNC_1 (int const**,size_t*) ;

__attribute__((used)) static void
FUNC_2(const uint8_t **VAR_0, size_t *VAR_1, struct krb5_address *VAR_2)
{

 VAR_2->ka_type = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1, &VAR_2->ka_addr);
}
