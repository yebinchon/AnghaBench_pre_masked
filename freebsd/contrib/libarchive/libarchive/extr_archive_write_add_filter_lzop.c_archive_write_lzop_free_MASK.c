
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_lzop {int pdata; struct write_lzop* work_buffer; struct write_lzop* compressed; struct write_lzop* uncompressed; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct write_lzop*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_filter *VAR_1)
{
 struct write_lzop *VAR_2 = (struct write_lzop *)VAR_1->data;






 FUNC_0(VAR_2->pdata);

 FUNC_1(VAR_2);
 return (VAR_0);
}
