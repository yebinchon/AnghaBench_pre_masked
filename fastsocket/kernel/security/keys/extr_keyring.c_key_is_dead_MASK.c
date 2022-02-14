
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct key {scalar_t__ expiry; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct key *VAR_1, time_t VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->flags) ||
  (VAR_1->expiry > 0 && VAR_1->expiry <= VAR_2);
}
