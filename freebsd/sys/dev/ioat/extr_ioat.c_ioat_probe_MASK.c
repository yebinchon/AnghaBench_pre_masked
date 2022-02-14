
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct _pcsid {scalar_t__ type; int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (struct _pcsid*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct _pcsid* VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct _pcsid *VAR_3;
 u_int32_t VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 for (VAR_3 = VAR_1; VAR_3 < &VAR_1[FUNC_1(VAR_1)]; VAR_3++) {
  if (VAR_3->type == VAR_4) {
   FUNC_0(VAR_2, VAR_3->desc);
   return (0);
  }
 }
 return (VAR_0);
}
