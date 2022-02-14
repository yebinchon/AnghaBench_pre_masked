
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct program_filter {int description; struct program_filter* out_buf; } ;
struct archive_read_filter {scalar_t__ data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive_read_filter*,struct program_filter*) ;
 int FUNC_2 (struct program_filter*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read_filter *VAR_0)
{
 struct program_filter *VAR_1;
 int VAR_2;

 VAR_1 = (struct program_filter *)VAR_0->data;
 VAR_2 = FUNC_1(VAR_0, VAR_1);


 FUNC_2(VAR_1->out_buf);
 FUNC_0(&VAR_1->description);
 FUNC_2(VAR_1);

 return (VAR_2);
}
