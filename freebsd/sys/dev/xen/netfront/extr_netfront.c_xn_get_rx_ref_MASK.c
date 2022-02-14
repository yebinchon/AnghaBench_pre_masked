
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_rxq {scalar_t__* grant_ref; } ;
typedef scalar_t__ grant_ref_t ;
typedef int RING_IDX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline grant_ref_t
FUNC_2(struct netfront_rxq *VAR_1, RING_IDX VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);
 grant_ref_t VAR_4 = VAR_1->grant_ref[VAR_3];

 FUNC_0(VAR_4 != VAR_0, ("Invalid grant reference!\n"));
 VAR_1->grant_ref[VAR_3] = VAR_0;
 return (VAR_4);
}
