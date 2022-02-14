
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rar_br {int dummy; } ;
struct rar {scalar_t__ valid; struct rar_br br; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_4__ {struct archive_read* a; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_2__ IByteIn ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct rar_br*,int) ;
 int FUNC_2 (struct rar_br*,int) ;
 int FUNC_3 (struct archive_read*,struct rar_br*,int) ;

__attribute__((used)) static Byte
FUNC_4(void *VAR_1)
{
  struct archive_read *VAR_2 = ((IByteIn*)VAR_1)->a;
  struct rar *VAR_3 = (struct rar *)(VAR_2->format->data);
  struct rar_br *VAR_4 = &(VAR_3->br);
  Byte VAR_5;
  if (!FUNC_3(VAR_2, VAR_4, 8))
  {
    FUNC_0(&VAR_2->archive, VAR_0,
                      "Truncated RAR file data");
    VAR_3->valid = 0;
    return 0;
  }
  VAR_5 = FUNC_1(VAR_4, 8);
  FUNC_2(VAR_4, 8);
  return VAR_5;
}
