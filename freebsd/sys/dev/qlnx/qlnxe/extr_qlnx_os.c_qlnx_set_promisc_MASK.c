
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int filter; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(qlnx_host_t *VAR_2)
{
 int VAR_3 = 0;
 uint8_t VAR_4;

 if (FUNC_1(VAR_2) == 0)
  return (0);

 VAR_4 = VAR_2->filter;
 VAR_4 |= VAR_0;
 VAR_4 |= VAR_1;

 VAR_3 = FUNC_0(VAR_2, VAR_4);
 return (VAR_3);
}
