
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_priv_d {scalar_t__* np_qfirst; scalar_t__* np_qlast; } ;


 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct netmap_priv_d *VAR_1)
{
 return (VAR_1->np_qfirst[VAR_0] != VAR_1->np_qlast[VAR_0]);
}
