
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int lastId; } ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_0, int VAR_1)
{
 if (VAR_1 < 0) {


  VAR_1 = FUNC_0() & 0xff;
  if (VAR_1 != VAR_0->lastId)
   return VAR_1;
 }
 return (VAR_1 + 1) & 0xff;
}
