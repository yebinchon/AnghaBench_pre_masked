
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char* const*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, char * const *VAR_1)
{

 if (VAR_0 < 2) {
  FUNC_1("usage:\traid5 [-fv] [-s stripesize] [-n name] drives\n");
  return;
 }
 FUNC_0(VAR_0, VAR_1, "raid5");
}
