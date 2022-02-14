
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_4__ {int * value; scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int * FUNC_1 (scalar_t__,int ,int ) ;

void
FUNC_2(const gss_buffer_t VAR_2, gss_buffer_t VAR_3)
{
 VAR_3->length = VAR_2->length;
 if (VAR_2->length) {
  VAR_3->value = FUNC_1(VAR_2->length, VAR_0, VAR_1);
  FUNC_0(VAR_2->value, VAR_3->value, VAR_2->length);
 } else {
  VAR_3->value = ((void*)0);
 }
}
