
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_aka_data {int error_code; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1)
{
 struct eap_aka_data *VAR_2 = VAR_1;
 int VAR_3;

 if (!VAR_2)
  return VAR_0;

 VAR_3 = VAR_2->error_code;


 VAR_2->error_code = VAR_0;

 return VAR_3;
}
