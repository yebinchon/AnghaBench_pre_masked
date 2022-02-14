
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout {void (* c_func ) (void*) ;scalar_t__ timeout; void* c_arg; } ;


 int FUNC_0 (int *,struct callout*,int ) ;
 int FUNC_1 (struct callout*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;

void
FUNC_4(struct callout *VAR_4, int VAR_5,
    void (*VAR_6) (void *), void *VAR_7)
{
 FUNC_1(VAR_4);

 VAR_4->c_func = VAR_6;
 VAR_4->c_arg = VAR_7;
 VAR_4->timeout = VAR_3 + VAR_5;

 FUNC_2(&VAR_2);
 FUNC_0(&VAR_1, VAR_4, VAR_0);
 FUNC_3(&VAR_2);
}
