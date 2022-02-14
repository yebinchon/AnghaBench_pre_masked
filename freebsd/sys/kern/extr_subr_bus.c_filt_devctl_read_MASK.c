
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_data; } ;
struct TYPE_2__ {scalar_t__ queued; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_1, long VAR_2)
{
 VAR_1->kn_data = VAR_0.queued;
 return (VAR_1->kn_data != 0);
}
