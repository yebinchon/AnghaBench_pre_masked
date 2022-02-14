
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ nhpftids; scalar_t__ hpftid_base; scalar_t__ hpftid_end; } ;
struct adapter {TYPE_1__ tids; } ;



__attribute__((used)) static inline int FUNC_0(const struct adapter *VAR_0, u_int VAR_1)
{

 return (VAR_0->tids.nhpftids > 0 && VAR_1 >= VAR_0->tids.hpftid_base &&
     VAR_1 <= VAR_0->tids.hpftid_end);
}
