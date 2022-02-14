
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {scalar_t__ changed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct eap_sm *VAR_2)
{
 int VAR_3 = 0;
 do {
  VAR_2->changed = VAR_1;
  FUNC_0(VAR_0);
  if (VAR_2->changed)
   VAR_3 = 1;
 } while (VAR_2->changed);
 return VAR_3;
}
