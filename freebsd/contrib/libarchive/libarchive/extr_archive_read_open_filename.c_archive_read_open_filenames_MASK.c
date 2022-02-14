
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; } ;
struct read_file_data {size_t block_size; int fd; int filename_type; scalar_t__ use_lseek; scalar_t__ st_mode; int * buffer; TYPE_1__ filename; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive*) ;
 scalar_t__ FUNC_1 (struct archive*,struct read_file_data*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,int ) ;
 int FUNC_4 (struct archive*,int ) ;
 int FUNC_5 (struct archive*,int ) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*,int ) ;
 int FUNC_8 (struct archive*,int ) ;
 int FUNC_9 (struct archive*,int ,char*) ;
 scalar_t__ FUNC_10 (int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,char const*) ;
 scalar_t__ FUNC_12 (char const*) ;

int
FUNC_13(struct archive *VAR_11, const char **VAR_12,
    size_t VAR_13)
{
 struct read_file_data *VAR_14;
 const char *VAR_15 = ((void*)0);
 if (VAR_12)
  VAR_15 = *(VAR_12++);

 FUNC_0(VAR_11);
 do
 {
  if (VAR_15 == ((void*)0))
   VAR_15 = "";
  VAR_14 = (struct read_file_data *)FUNC_10(1,
   sizeof(*VAR_14) + FUNC_12(VAR_15));
  if (VAR_14 == ((void*)0))
   goto no_memory;
  FUNC_11(VAR_14->filename.m, VAR_15);
  VAR_14->block_size = VAR_13;
  VAR_14->fd = -1;
  VAR_14->buffer = ((void*)0);
  VAR_14->st_mode = VAR_14->use_lseek = 0;
  if (VAR_15 == ((void*)0) || VAR_15[0] == '\0') {
   VAR_14->filename_type = VAR_4;
  } else
   VAR_14->filename_type = VAR_3;
  if (FUNC_1(VAR_11, VAR_14) != (VAR_1))
   return (VAR_0);
  if (VAR_12 == ((void*)0))
   break;
  VAR_15 = *(VAR_12++);
 } while (VAR_15 != ((void*)0) && VAR_15[0] != '\0');
 FUNC_4(VAR_11, VAR_6);
 FUNC_5(VAR_11, VAR_7);
 FUNC_7(VAR_11, VAR_9);
 FUNC_3(VAR_11, VAR_5);
 FUNC_8(VAR_11, VAR_10);
 FUNC_6(VAR_11, VAR_8);

 return (FUNC_2(VAR_11));
no_memory:
 FUNC_9(VAR_11, VAR_2, "No memory");
 return (VAR_0);
}
