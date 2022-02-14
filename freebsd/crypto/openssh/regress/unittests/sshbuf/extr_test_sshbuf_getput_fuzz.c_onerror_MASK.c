
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzz {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fuzz*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 FUNC_0(VAR_0, "Failed during fuzz:\n");
 FUNC_1((struct fuzz *)VAR_1);
}
