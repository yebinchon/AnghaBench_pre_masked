
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rar_br {scalar_t__ cache_avail; int * next_in; int avail_in; } ;
struct rar {scalar_t__ bytes_remaining; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read*,struct rar_br*) ;
 int * FUNC_2 (struct archive_read*,int,int *) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_3, struct rar_br *VAR_4)
{
  struct rar *VAR_5 = (struct rar *)(VAR_3->format->data);

  if (VAR_5->bytes_remaining > 0) {
    VAR_4->next_in = FUNC_2(VAR_3, 1, &(VAR_4->avail_in));
    if (VAR_4->next_in == ((void*)0)) {
      FUNC_0(&VAR_3->archive,
          VAR_0,
          "Truncated RAR file data");
      return (VAR_1);
    }
    if (VAR_4->cache_avail == 0)
      (void)FUNC_1(VAR_3, VAR_4);
  }
  return (VAR_2);
}
