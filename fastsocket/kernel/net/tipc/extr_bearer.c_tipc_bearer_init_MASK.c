
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media {int dummy; } ;
struct bearer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 int VAR_7;

 FUNC_2(&VAR_6);
 VAR_5 = FUNC_0(VAR_2, sizeof(struct bearer), VAR_1);
 VAR_4 = FUNC_0(VAR_3, sizeof(struct media), VAR_1);
 if (VAR_5 && VAR_4) {
  VAR_7 = 0;
 } else {
  FUNC_1(VAR_5);
  FUNC_1(VAR_4);
  VAR_5 = ((void*)0);
  VAR_4 = ((void*)0);
  VAR_7 = -VAR_0;
 }
 FUNC_3(&VAR_6);
 return VAR_7;
}
