
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, int VAR_2)
{
 struct timespec VAR_3;

 FUNC_2(&VAR_3);
 FUNC_1(VAR_1, "%s at ", (VAR_2 & VAR_0) ? "read " : "write");
 FUNC_0(&VAR_3, 9);
 FUNC_3(": ");
}
