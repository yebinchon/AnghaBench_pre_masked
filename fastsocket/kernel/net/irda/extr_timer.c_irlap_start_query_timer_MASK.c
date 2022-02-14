
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irlap_cb {int query_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(struct irlap_cb *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 VAR_8 = ((VAR_4 * VAR_0 / 1000) * (VAR_6 - VAR_7)
     + VAR_2 + VAR_1);




 FUNC_0( &VAR_5->query_timer, VAR_8, (void *) VAR_5,
     VAR_3);
}
