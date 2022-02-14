
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbdr {int rbdr_task; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbdr*,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, int VAR_3)
{
 struct rbdr *VAR_4;
 int VAR_5;

 VAR_4 = (struct rbdr *)VAR_2;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5 != 0) {




  FUNC_1(VAR_1, &VAR_4->rbdr_task);
 }
}
