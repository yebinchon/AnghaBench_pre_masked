
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int pe_fd; } ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int ,char*,size_t) ;

int
FUNC_2(PE *VAR_2, size_t VAR_3)
{
 char VAR_4[128];
 size_t VAR_5;

 FUNC_0(VAR_4, 0, sizeof(VAR_4));
 for (; VAR_3 > 0; VAR_3 -= VAR_5) {
  VAR_5 = VAR_3 > sizeof(VAR_4) ? sizeof(VAR_4) : VAR_3;
  if (FUNC_1(VAR_2->pe_fd, VAR_4, VAR_5) != (ssize_t) VAR_5) {
   VAR_1 = VAR_0;
   return (-1);
  }
 }

 return (0);
}
