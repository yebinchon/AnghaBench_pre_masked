
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(int VAR_1)
{
 FUNC_1(VAR_0, "eloop: could not process SIGINT or SIGTERM in "
     "two seconds. Looks like there\n"
     "is a bug that ends up in a busy loop that "
     "prevents clean shutdown.\n"
     "Killing program forcefully.\n");
 FUNC_0(1);
}
