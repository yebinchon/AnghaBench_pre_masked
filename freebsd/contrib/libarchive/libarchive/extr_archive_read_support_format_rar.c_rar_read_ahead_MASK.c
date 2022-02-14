
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rar {scalar_t__ bytes_remaining; int main_flags; int file_flags; int filename_must_match; int has_endarc_header; } ;
struct TYPE_4__ {scalar_t__ read_data_requested; scalar_t__ read_data_is_posix_read; } ;
struct archive_read {int entry; TYPE_2__ archive; TYPE_1__* format; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct archive_read*,size_t,scalar_t__*) ;
 int FUNC_1 (struct archive_read*,int ) ;

__attribute__((used)) static const void *
FUNC_2(struct archive_read *VAR_4, size_t VAR_5, ssize_t *VAR_6)
{
  struct rar *VAR_7 = (struct rar *)(VAR_4->format->data);
  const void *VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
  int VAR_9;
  if (VAR_6)
  {
    if (VAR_4->archive.read_data_is_posix_read && *VAR_6 > (ssize_t)VAR_4->archive.read_data_requested)
      *VAR_6 = VAR_4->archive.read_data_requested;
    if (*VAR_6 > VAR_7->bytes_remaining)
      *VAR_6 = (ssize_t)VAR_7->bytes_remaining;
    if (*VAR_6 < 0)
      return ((void*)0);
    else if (*VAR_6 == 0 && VAR_7->main_flags & VAR_3 &&
      VAR_7->file_flags & VAR_2)
    {
      VAR_7->filename_must_match = 1;
      VAR_9 = FUNC_1(VAR_4, VAR_4->entry);
      if (VAR_9 == (VAR_0))
      {
        VAR_7->has_endarc_header = 1;
        VAR_9 = FUNC_1(VAR_4, VAR_4->entry);
      }
      VAR_7->filename_must_match = 0;
      if (VAR_9 != (VAR_1))
        return ((void*)0);
      return FUNC_2(VAR_4, VAR_5, VAR_6);
    }
  }
  return VAR_8;
}
