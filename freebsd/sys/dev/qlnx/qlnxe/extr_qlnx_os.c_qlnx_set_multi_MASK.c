
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ifnet {int dummy; } ;
struct TYPE_7__ {struct ifnet* ifp; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ifnet*,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(qlnx_host_t *VAR_3, uint32_t VAR_4)
{
 uint8_t VAR_5[VAR_1 * VAR_0];
 struct ifnet *VAR_6 = VAR_3->ifp;
 u_int VAR_7;

 if (FUNC_4(VAR_3) == 0)
  return (0);

 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_5);

 FUNC_0(VAR_3);
 FUNC_3(VAR_3, VAR_5, VAR_7, VAR_4);
 FUNC_1(VAR_3);

 return (0);
}
