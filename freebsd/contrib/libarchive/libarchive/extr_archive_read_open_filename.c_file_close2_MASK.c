
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_file_data {int fd; scalar_t__ filename_type; int * buffer; int block_size; int st_mode; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct archive *VAR_2, void *VAR_3)
{
 struct read_file_data *VAR_4 = (struct read_file_data *)VAR_3;

 (void)VAR_2;


 if (VAR_4->fd >= 0) {
  if (!FUNC_2(VAR_4->st_mode)
      && !FUNC_1(VAR_4->st_mode)
      && !FUNC_0(VAR_4->st_mode)) {
   ssize_t VAR_5;
   do {
    VAR_5 = FUNC_5(VAR_4->fd, VAR_4->buffer,
        VAR_4->block_size);
   } while (VAR_5 > 0);
  }

  if (VAR_4->filename_type != VAR_1)
   FUNC_3(VAR_4->fd);
 }
 FUNC_4(VAR_4->buffer);
 VAR_4->buffer = ((void*)0);
 VAR_4->fd = -1;
 return (VAR_0);
}
