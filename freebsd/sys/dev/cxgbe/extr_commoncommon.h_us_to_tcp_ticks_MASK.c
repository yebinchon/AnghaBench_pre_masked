
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct TYPE_5__ {int tre; } ;
struct TYPE_4__ {int cclk; } ;
struct TYPE_6__ {TYPE_2__ tp; TYPE_1__ vpd; } ;
struct adapter {TYPE_3__ params; } ;



__attribute__((used)) static inline u_int FUNC_0(const struct adapter *VAR_0, u_long VAR_1)
{

 return (VAR_1 * VAR_0->params.vpd.cclk / 1000 >> VAR_0->params.tp.tre);
}
