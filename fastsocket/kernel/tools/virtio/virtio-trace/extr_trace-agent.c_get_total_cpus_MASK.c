
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3 = (int)FUNC_2(VAR_2);

 if (VAR_3 <= 0) {
  FUNC_1("Could not read cpus\n");
  goto error;
 } else if (VAR_3 > VAR_1) {
  FUNC_1("Exceed max cpus(%d)\n", (int)VAR_1);
  goto error;
 }

 return VAR_3;

error:
 FUNC_0(VAR_0);
}
