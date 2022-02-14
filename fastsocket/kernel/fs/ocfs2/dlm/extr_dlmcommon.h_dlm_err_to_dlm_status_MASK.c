
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,int *) ;

__attribute__((used)) static inline enum dlm_status FUNC_1(int VAR_9)
{
 enum dlm_status VAR_10;
 if (VAR_9 == -VAR_7)
  VAR_10 = VAR_4;
 else if (VAR_9 == -VAR_8 || FUNC_0(VAR_9, ((void*)0)))
  VAR_10 = VAR_3;
 else if (VAR_9 == -VAR_5)
  VAR_10 = VAR_1;
 else if (VAR_9 == -VAR_6)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_0;
 return VAR_10;
}
