
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tlsv1_client {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct tlsv1_client *VAR_6, u16 VAR_7)
{
 return (((VAR_6->flags & VAR_0) &&
   VAR_7 == VAR_3) ||
  ((VAR_6->flags & VAR_1) &&
   VAR_7 == VAR_4) ||
  ((VAR_6->flags & VAR_2) &&
   VAR_7 == VAR_5));
}
