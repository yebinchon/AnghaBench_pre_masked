
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {long kn_id; scalar_t__ kn_data; } ;


 long VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_1, long VAR_2)
{

 if (VAR_2 & VAR_0) {
  VAR_2 &= ~VAR_0;

  if (VAR_1->kn_id == VAR_2)
   VAR_1->kn_data++;
 }
 return (VAR_1->kn_data != 0);
}
