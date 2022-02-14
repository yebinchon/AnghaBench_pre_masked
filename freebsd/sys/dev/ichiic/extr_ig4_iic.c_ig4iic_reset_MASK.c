
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int last_slave; int slave_valid; int call_lock; } ;
typedef TYPE_1__ ig4iic_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5(device_t VAR_1, u_char VAR_2, u_char VAR_3, u_char *VAR_4)
{
 ig4iic_softc_t *VAR_5 = FUNC_0(VAR_1);
 bool VAR_6;

 VAR_6 = FUNC_4(&VAR_5->call_lock) != 0;
 if (!VAR_6)
  FUNC_3(&VAR_5->call_lock);


 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_5->last_slave << 1;
 FUNC_1(VAR_5, VAR_3 >> 1);
 if (VAR_3 == VAR_0)
  VAR_5->slave_valid = 0;

 if (!VAR_6)
  FUNC_2(&VAR_5->call_lock);
 return (0);
}
