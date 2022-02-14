
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {struct ifnet* ifp; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int,int ) ;

__attribute__((used)) static void
FUNC_2(qla_host_t *VAR_3, uint32_t VAR_4)
{
 uint8_t VAR_5[VAR_1 * VAR_0];
 struct ifnet *VAR_6 = VAR_3->ifp;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_5);
 FUNC_1(VAR_3, VAR_5, VAR_7, VAR_4);

 return;
}
