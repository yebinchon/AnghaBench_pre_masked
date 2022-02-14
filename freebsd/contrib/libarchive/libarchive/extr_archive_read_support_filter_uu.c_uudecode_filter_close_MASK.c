
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uudecode {struct uudecode* out_buff; struct uudecode* in_buff; } ;
struct archive_read_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct uudecode*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter *VAR_1)
{
 struct uudecode *VAR_2;

 VAR_2 = (struct uudecode *)VAR_1->data;
 FUNC_0(VAR_2->in_buff);
 FUNC_0(VAR_2->out_buff);
 FUNC_0(VAR_2);

 return (VAR_0);
}
