
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {scalar_t__ robust_list; int * mq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pthread*,int *,int *,int ) ;

void
FUNC_1(struct pthread *VAR_7)
{

 FUNC_0(VAR_7, &VAR_7->mq[VAR_0],
     &VAR_7->mq[VAR_3], 0);
 FUNC_0(VAR_7, &VAR_7->mq[VAR_1],
     &VAR_7->mq[VAR_2], VAR_6);
 FUNC_0(VAR_7, &VAR_7->mq[VAR_4],
     &VAR_7->mq[VAR_5], VAR_6);
 VAR_7->robust_list = 0;
}
