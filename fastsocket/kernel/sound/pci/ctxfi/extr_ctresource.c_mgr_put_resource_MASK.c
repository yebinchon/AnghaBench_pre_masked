
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc_mgr {unsigned int avail; int rscs; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;

int FUNC_1(struct rsc_mgr *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_0->rscs, VAR_1, VAR_2);
 VAR_0->avail += VAR_1;

 return 0;
}
