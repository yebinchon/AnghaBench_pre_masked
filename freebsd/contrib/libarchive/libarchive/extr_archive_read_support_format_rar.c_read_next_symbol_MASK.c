
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rar_br {int dummy; } ;
struct rar {scalar_t__ valid; struct rar_br br; } ;
struct huffman_code {int tablesize; TYPE_3__* tree; TYPE_2__* table; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_6__ {int* branches; } ;
struct TYPE_5__ {int length; int value; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (struct archive_read*,struct huffman_code*) ;
 void* FUNC_2 (struct rar_br*,int) ;
 int FUNC_3 (struct rar_br*,int) ;
 int FUNC_4 (struct archive_read*,struct rar_br*,int) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_2, struct huffman_code *VAR_3)
{
  unsigned char VAR_4;
  unsigned int VAR_5;
  int VAR_6, VAR_7, VAR_8;
  struct rar *VAR_9;
  struct rar_br *VAR_10;

  if (!VAR_3->table)
  {
    if (FUNC_1(VAR_2, VAR_3) != (VAR_1))
      return -1;
  }

  VAR_9 = (struct rar *)(VAR_2->format->data);
  VAR_10 = &(VAR_9->br);


  if (!FUNC_4(VAR_2, VAR_10, VAR_3->tablesize)) {
    FUNC_0(&VAR_2->archive, VAR_0,
                      "Truncated RAR file data");
    VAR_9->valid = 0;
    return -1;
  }
  VAR_5 = FUNC_2(VAR_10, VAR_3->tablesize);

  VAR_6 = VAR_3->table[VAR_5].length;
  VAR_7 = VAR_3->table[VAR_5].value;

  if (VAR_6 < 0)
  {
    FUNC_0(&VAR_2->archive, VAR_0,
                      "Invalid prefix code in bitstream");
    return -1;
  }

  if (VAR_6 <= VAR_3->tablesize)
  {

    FUNC_3(VAR_10, VAR_6);
    return VAR_7;
  }


  FUNC_3(VAR_10, VAR_3->tablesize);

  VAR_8 = VAR_7;
  while (!(VAR_3->tree[VAR_8].branches[0] ==
    VAR_3->tree[VAR_8].branches[1]))
  {
    if (!FUNC_4(VAR_2, VAR_10, 1)) {
      FUNC_0(&VAR_2->archive, VAR_0,
                        "Truncated RAR file data");
      VAR_9->valid = 0;
      return -1;
    }
    VAR_4 = FUNC_2(VAR_10, 1);
    FUNC_3(VAR_10, 1);

    if (VAR_3->tree[VAR_8].branches[VAR_4] < 0)
    {
      FUNC_0(&VAR_2->archive, VAR_0,
                        "Invalid prefix code in bitstream");
      return -1;
    }
    VAR_8 = VAR_3->tree[VAR_8].branches[VAR_4];
  }

  return VAR_3->tree[VAR_8].branches[0];
}
