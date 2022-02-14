
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_data {int * kd_data; scalar_t__ kd_length; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct krb5_data *VAR_1)
{
 if (VAR_1->kd_data) {
  FUNC_0(VAR_1->kd_data, VAR_0);
  VAR_1->kd_length = 0;
  VAR_1->kd_data = ((void*)0);
 }
}
