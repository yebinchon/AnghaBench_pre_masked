
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,char,char**,struct context*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(char *VAR_5, struct context *VAR_6, gfp_t VAR_7)
{
 char *VAR_8, *VAR_9;
 int VAR_10;

 if (!VAR_4)
  return -VAR_0;



 VAR_8 = VAR_9 = FUNC_1(VAR_5, VAR_7);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
 } else {
  VAR_10 = FUNC_2(&VAR_3, ':', &VAR_8, VAR_6,
     ((void*)0), VAR_2);
  FUNC_0(VAR_9);
 }

 return VAR_10;
}
