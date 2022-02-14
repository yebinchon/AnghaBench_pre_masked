
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct _pcsid {scalar_t__ type; scalar_t__ desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct _pcsid* VAR_2 ;

__attribute__((used)) static int
FUNC_2 (device_t VAR_3)
{
 u_int32_t VAR_4 = FUNC_1(VAR_3);
 struct _pcsid *VAR_5 = VAR_2;

 while (VAR_5->type && VAR_5->type != VAR_4)
  ++VAR_5;

 if (VAR_5->desc)
 {
  FUNC_0(VAR_3, VAR_5->desc);
  return (VAR_0);
 }
 else
  return (VAR_1);
}
