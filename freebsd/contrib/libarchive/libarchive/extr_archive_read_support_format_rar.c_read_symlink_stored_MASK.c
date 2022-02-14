
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rar {scalar_t__ packed_size; } ;
struct archive_string_conv {int dummy; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct archive_entry*,char const*,size_t,struct archive_string_conv*) ;
 int FUNC_2 (int *,scalar_t__,char*,...) ;
 int FUNC_3 (struct archive_string_conv*) ;
 scalar_t__ VAR_5 ;
 void* FUNC_4 (struct archive_read*,size_t,int *) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_6, struct archive_entry *VAR_7,
                    struct archive_string_conv *VAR_8)
{
  const void *VAR_9;
  const char *VAR_10;
  struct rar *VAR_11;
  int VAR_12 = (VAR_2);

  VAR_11 = (struct rar *)(VAR_6->format->data);
  if ((VAR_9 = FUNC_4(VAR_6, (size_t)VAR_11->packed_size, ((void*)0))) == ((void*)0))
    return (VAR_1);
  VAR_10 = VAR_9;

  if (FUNC_1(VAR_7,
      VAR_10, (size_t)VAR_11->packed_size, VAR_8))
  {
    if (VAR_5 == VAR_4)
    {
      FUNC_2(&VAR_6->archive, VAR_4,
                        "Can't allocate memory for link");
      return (VAR_1);
    }
    FUNC_2(&VAR_6->archive, VAR_0,
                      "link cannot be converted from %s to current locale.",
                      FUNC_3(VAR_8));
    VAR_12 = (VAR_3);
  }
  FUNC_0(VAR_6, VAR_11->packed_size);
  return VAR_12;
}
