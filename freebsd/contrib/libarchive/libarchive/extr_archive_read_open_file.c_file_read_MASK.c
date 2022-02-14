
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_FILE_data {void* buffer; size_t block_size; int f; } ;
struct archive {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct archive*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (void*,int,size_t,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive *VAR_1, void *VAR_2, const void **VAR_3)
{
 struct read_FILE_data *VAR_4 = (struct read_FILE_data *)VAR_2;
 size_t VAR_5;

 *VAR_3 = VAR_4->buffer;
 VAR_5 = FUNC_2(VAR_4->buffer, 1, VAR_4->block_size, VAR_4->f);
 if (VAR_5 < VAR_4->block_size && FUNC_1(VAR_4->f)) {
  FUNC_0(VAR_1, VAR_0, "Error reading file");
 }
 return (VAR_5);
}
