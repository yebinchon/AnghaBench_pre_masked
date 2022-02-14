
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct krb5_msg_order {int km_length; int km_jitter_window; int * km_elem; } ;



__attribute__((used)) static void
FUNC_0(struct krb5_msg_order *VAR_0, uint32_t VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0->km_length < VAR_0->km_jitter_window)
  VAR_0->km_length++;

 for (VAR_3 = VAR_0->km_length - 1; VAR_3 > VAR_2; VAR_3--)
  VAR_0->km_elem[VAR_3] = VAR_0->km_elem[VAR_3 - 1];
 VAR_0->km_elem[VAR_2] = VAR_1;
}
