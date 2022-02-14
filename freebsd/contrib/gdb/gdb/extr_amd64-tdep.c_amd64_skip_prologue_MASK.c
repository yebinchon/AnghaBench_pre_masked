
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_frame_cache {scalar_t__ frameless_p; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,int,struct amd64_frame_cache*) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_0)
{
  struct amd64_frame_cache VAR_1;
  CORE_ADDR VAR_2;

  VAR_2 = FUNC_0 (VAR_0, 0xffffffffffffffff, &VAR_1);
  if (VAR_1.frameless_p)
    return VAR_0;

  return VAR_2;
}
