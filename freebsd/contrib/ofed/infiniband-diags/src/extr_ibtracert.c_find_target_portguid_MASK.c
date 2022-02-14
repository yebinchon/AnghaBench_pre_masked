
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ib_portid_t ;
struct TYPE_3__ {int portguid; } ;
typedef TYPE_1__ Port ;
typedef int Node ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static uint64_t FUNC_2(ib_portid_t * VAR_0)
{
 Node VAR_1;
 Port VAR_2;

 if (FUNC_1(&VAR_1, &VAR_2, VAR_0) < 0) {
  FUNC_0("can't find to port\n");
  return -1;
 }

 return VAR_2.portguid;
}
