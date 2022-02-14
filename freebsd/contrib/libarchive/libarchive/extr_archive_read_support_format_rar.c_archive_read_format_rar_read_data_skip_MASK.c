
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rar {scalar_t__ bytes_unconsumed; scalar_t__ bytes_remaining; int main_flags; int file_flags; } ;
struct archive_read {int entry; TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct archive_read*,int ) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_5)
{
  struct rar *VAR_6;
  int64_t VAR_7;
  int VAR_8;

  VAR_6 = (struct rar *)(VAR_5->format->data);

  if (VAR_6->bytes_unconsumed > 0) {

      FUNC_0(VAR_5, VAR_6->bytes_unconsumed);
      VAR_6->bytes_unconsumed = 0;
  }

  if (VAR_6->bytes_remaining > 0) {
    VAR_7 = FUNC_0(VAR_5, VAR_6->bytes_remaining);
    if (VAR_7 < 0)
      return (VAR_1);
  }




  if (VAR_6->main_flags & VAR_4 && VAR_6->file_flags & VAR_3)
  {
    VAR_8 = FUNC_1(VAR_5, VAR_5->entry);
    if (VAR_8 == (VAR_0))
      VAR_8 = FUNC_1(VAR_5, VAR_5->entry);
    if (VAR_8 != (VAR_2))
      return VAR_8;
    return FUNC_2(VAR_5);
  }

  return (VAR_2);
}
