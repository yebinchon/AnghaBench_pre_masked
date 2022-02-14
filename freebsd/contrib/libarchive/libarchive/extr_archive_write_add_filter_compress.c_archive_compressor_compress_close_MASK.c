
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {struct private_data* compressed; int compressed_offset; int cur_code; } ;
struct archive_write_filter {int next_filter; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct private_data*,int ) ;
 int FUNC_2 (struct private_data*) ;
 int FUNC_3 (struct archive_write_filter*,int ) ;
 int FUNC_4 (struct archive_write_filter*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write_filter *VAR_1)
{
 struct private_data *VAR_2 = (struct private_data *)VAR_1->data;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_2->cur_code);
 if (VAR_3 != VAR_0)
  goto cleanup;
 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 != VAR_0)
  goto cleanup;


 VAR_3 = FUNC_1(VAR_1->next_filter,
     VAR_2->compressed, VAR_2->compressed_offset);
cleanup:
 VAR_4 = FUNC_0(VAR_1->next_filter);
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;
 FUNC_2(VAR_2->compressed);
 FUNC_2(VAR_2);
 return (VAR_3);
}
