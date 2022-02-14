
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 struct socket_info* FUNC_0 (int) ;
 int FUNC_1 (int,int,void*) ;
 int FUNC_2 (struct socket_info*,int *,int ,int *,int ) ;

int FUNC_3(int VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7;
 struct socket_info *VAR_8 = FUNC_0(VAR_4);
 int VAR_9;

 if (!VAR_8) {
  return FUNC_1(VAR_4, VAR_5, VAR_6);
 }

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);

 switch (VAR_5) {
 case 128:
  VAR_9 = *((int *)VAR_6);
  if (VAR_7 == -1 && VAR_3 != VAR_0 && VAR_3 != VAR_1) {
   FUNC_2(VAR_8, ((void*)0), VAR_2, ((void*)0), 0);
  } else if (VAR_9 == 0) {
   FUNC_2(VAR_8, ((void*)0), VAR_2, ((void*)0), 0);
  }
  break;
 }

 return VAR_7;
}
