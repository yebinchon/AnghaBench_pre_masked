
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmemstream {scalar_t__ len; scalar_t__ offset; scalar_t__* sizep; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct wmemstream *VAR_0)
{

 FUNC_0(VAR_0->len >= 0 && VAR_0->offset >= 0);
 *VAR_0->sizep = VAR_0->len < VAR_0->offset ? VAR_0->len : VAR_0->offset;
}
