
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32_t ;
typedef int bool_t ;
struct TYPE_3__ {char* in_base; char* in_boundry; int in_size; int (* readit ) (int ,char*,int) ;char* in_finger; int tcp_handle; scalar_t__ nonblock; } ;
typedef TYPE_1__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static bool_t
FUNC_1(RECSTREAM *VAR_3)
{
 char *VAR_4;
 u_int32_t VAR_5;
 int VAR_6;

 if (VAR_3->nonblock)
  return VAR_1;

 VAR_4 = VAR_3->in_base;
 VAR_5 = (u_int32_t)((u_long)VAR_3->in_boundry % VAR_0);
 VAR_4 += VAR_5;
 VAR_6 = (u_int32_t)(VAR_3->in_size - VAR_5);
 if ((VAR_6 = (*(VAR_3->readit))(VAR_3->tcp_handle, VAR_4, VAR_6)) == -1)
  return (VAR_1);
 VAR_3->in_finger = VAR_4;
 VAR_4 += VAR_6;
 VAR_3->in_boundry = VAR_4;
 return (VAR_2);
}
