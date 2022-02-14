
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int counter; } ;
typedef TYPE_1__ atomic_t ;


 int FUNC_0 (TYPE_1__*,int,int const) ;

__attribute__((used)) static uint8_t
FUNC_1(atomic_t *VAR_0, const uint8_t *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_0->counter;

 while ((VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1[VAR_2])) != VAR_2)
  VAR_2 = VAR_3;

 return (VAR_2);
}
