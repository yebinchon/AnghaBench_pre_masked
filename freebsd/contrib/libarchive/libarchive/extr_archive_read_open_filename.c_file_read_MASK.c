
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int w; int m; } ;
struct read_file_data {void* buffer; scalar_t__ filename_type; TYPE_1__ filename; int block_size; int fd; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct archive*,scalar_t__,char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,void*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive *VAR_4, void *VAR_5, const void **VAR_6)
{
 struct read_file_data *VAR_7 = (struct read_file_data *)VAR_5;
 ssize_t VAR_8;
 *VAR_6 = VAR_7->buffer;
 for (;;) {
  VAR_8 = FUNC_1(VAR_7->fd, VAR_7->buffer, VAR_7->block_size);
  if (VAR_8 < 0) {
   if (VAR_3 == VAR_0)
    continue;
   else if (VAR_7->filename_type == VAR_2)
    FUNC_0(VAR_4, VAR_3,
        "Error reading stdin");
   else if (VAR_7->filename_type == VAR_1)
    FUNC_0(VAR_4, VAR_3,
        "Error reading '%s'", VAR_7->filename.m);
   else
    FUNC_0(VAR_4, VAR_3,
        "Error reading '%S'", VAR_7->filename.w);
  }
  return (VAR_8);
 }
}
