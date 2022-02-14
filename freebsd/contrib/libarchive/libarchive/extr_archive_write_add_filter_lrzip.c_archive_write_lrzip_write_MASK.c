
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_lrzip {int pdata; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int FUNC_0 (struct archive_write_filter*,int ,void const*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_0,
    const void *VAR_1, size_t VAR_2)
{
 struct write_lrzip *VAR_3 = (struct write_lrzip *)VAR_0->data;

 return FUNC_0(VAR_0, VAR_3->pdata, VAR_1, VAR_2);
}
