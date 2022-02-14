
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int sz; int buf; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_0, size_t VAR_1)
{

 VAR_0->sz = VAR_0->sz > VAR_1/2 ? 2 * VAR_0->sz : VAR_1;
 VAR_0->buf = FUNC_0(VAR_0->buf, VAR_0->sz);
}
