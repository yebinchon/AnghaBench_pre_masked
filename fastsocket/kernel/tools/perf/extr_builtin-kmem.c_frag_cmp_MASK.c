
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_stat {int bytes_alloc; int bytes_req; } ;


 double FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct alloc_stat *VAR_0, struct alloc_stat *VAR_1)
{
 double VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0->bytes_req, VAR_0->bytes_alloc);
 VAR_3 = FUNC_0(VAR_1->bytes_req, VAR_1->bytes_alloc);

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 return 0;
}
