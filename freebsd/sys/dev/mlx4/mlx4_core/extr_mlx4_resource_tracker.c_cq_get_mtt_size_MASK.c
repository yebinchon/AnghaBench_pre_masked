
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cq_context {int log_page_size; int logsize_usrpage; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_cq_context *VAR_0)
{
 int VAR_1 = (FUNC_0(VAR_0->logsize_usrpage) >> 24) & 0x1f;
 int VAR_2 = (VAR_0->log_page_size & 0x3f) + 12;

 if (VAR_1 + 5 < VAR_2)
  return 1;

 return 1 << (VAR_1 + 5 - VAR_2);
}
