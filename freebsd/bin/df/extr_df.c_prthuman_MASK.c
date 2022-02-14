
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_blocks; int f_bsize; int f_bavail; } ;
typedef int int64_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(const struct statfs *VAR_0, int64_t VAR_1)
{

 FUNC_0("  {:blocks/%6s}", VAR_0->f_blocks * VAR_0->f_bsize);
 FUNC_0("  {:used/%6s}", VAR_1 * VAR_0->f_bsize);
 FUNC_0("  {:available/%6s}", VAR_0->f_bavail * VAR_0->f_bsize);
}
