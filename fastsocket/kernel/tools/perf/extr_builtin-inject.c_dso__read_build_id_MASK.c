
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int has_build_id; int build_id; int long_name; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dso *VAR_0)
{
 if (VAR_0->has_build_id)
  return 0;

 if (FUNC_0(VAR_0->long_name, VAR_0->build_id,
        sizeof(VAR_0->build_id)) > 0) {
  VAR_0->has_build_id = 1;
  return 0;
 }

 return -1;
}
