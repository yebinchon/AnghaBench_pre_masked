
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int device_t ;
struct TYPE_4__ {int mutex; int smb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const) ;
 int FUNC_4 (int *) ;

int
FUNC_5(device_t VAR_0)
{
 const sc_p VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return (VAR_2);
 FUNC_1(VAR_0, VAR_1->smb);
 FUNC_3(VAR_1);
 FUNC_4(&VAR_1->mutex);

 return 0;
}
