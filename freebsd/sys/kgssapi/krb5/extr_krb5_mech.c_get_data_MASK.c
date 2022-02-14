
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct krb5_data {size_t kd_length; int kd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ,size_t) ;
 size_t FUNC_1 (int const**,size_t*) ;
 int FUNC_2 (size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_3(const uint8_t **VAR_2, size_t *VAR_3, struct krb5_data *VAR_4)
{
 size_t VAR_5 = FUNC_1(VAR_2, VAR_3);

 VAR_4->kd_length = VAR_5;
 VAR_4->kd_data = FUNC_2(VAR_5, VAR_0, VAR_1);

 if (*VAR_3 < VAR_5)
  VAR_5 = *VAR_3;
 FUNC_0(*VAR_2, VAR_4->kd_data, VAR_5);
 (*VAR_2) += VAR_5;
 (*VAR_3) -= VAR_5;
}
