
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef TYPE_1__* device_t ;
struct TYPE_3__ {scalar_t__ parent; } ;


 int FUNC_0 (scalar_t__,int,int,int) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, int VAR_2, enum intr_trigger VAR_3,
    enum intr_polarity VAR_4)
{


 if (VAR_1->parent)
  return (FUNC_0(VAR_1->parent, VAR_2, VAR_3, VAR_4));
 return (VAR_0);
}
