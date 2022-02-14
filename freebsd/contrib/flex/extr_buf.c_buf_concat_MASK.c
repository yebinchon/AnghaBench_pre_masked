
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Buf {int nelts; int elts; } ;


 int FUNC_0 (struct Buf*,int ,int ) ;

struct Buf *FUNC_1(struct Buf* VAR_0, const struct Buf* VAR_1)
{
    FUNC_0(VAR_0, VAR_1->elts, VAR_1->nelts);
    return VAR_0;
}
