
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{
 char VAR_3;
 struct pollfd VAR_4 = { .fd = VAR_2, .events = VAR_0 };


 if (FUNC_2(VAR_1, &VAR_3, 1) != 1)
  FUNC_0("CLIENT: ready write");


 if (FUNC_1(&VAR_4, 1, -1) != 1)
  FUNC_0("poll");
}
