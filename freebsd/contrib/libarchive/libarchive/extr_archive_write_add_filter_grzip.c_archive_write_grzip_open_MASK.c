
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_grzip {int pdata; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int FUNC_0 (struct archive_write_filter*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_0)
{
 struct write_grzip *VAR_1 = (struct write_grzip *)VAR_0->data;

 return FUNC_0(VAR_0, VAR_1->pdata, "grzip");
}
