
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct huffman_table_entry {int length; int value; } ;
struct huffman_code {int numentries; TYPE_1__* tree; } ;
struct archive_read {int archive; } ;
struct TYPE_2__ {int* branches; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_3, struct huffman_code *VAR_4, int VAR_5,
                   struct huffman_table_entry *VAR_6, int VAR_7,
                   int VAR_8)
{
  int VAR_9, VAR_10, VAR_11 = (VAR_2);

  if (!VAR_4->tree)
  {
    FUNC_0(&VAR_3->archive, VAR_0,
                      "Huffman tree was not created.");
    return (VAR_1);
  }
  if (VAR_5 < 0 || VAR_5 >= VAR_4->numentries)
  {
    FUNC_0(&VAR_3->archive, VAR_0,
                      "Invalid location to Huffman tree specified.");
    return (VAR_1);
  }

  VAR_9 = 1 << (VAR_8 - VAR_7);

  if (VAR_4->tree[VAR_5].branches[0] ==
    VAR_4->tree[VAR_5].branches[1])
  {
    for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {
      VAR_6[VAR_10].length = VAR_7;
      VAR_6[VAR_10].value = VAR_4->tree[VAR_5].branches[0];
    }
  }
  else if (VAR_5 < 0)
  {
    for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
      VAR_6[VAR_10].length = -1;
  }
  else
  {
    if(VAR_7 == VAR_8)
    {
      VAR_6[0].length = VAR_8 + 1;
      VAR_6[0].value = VAR_5;
    }
    else
    {
      VAR_11 |= FUNC_1(VAR_3, VAR_4, VAR_4->tree[VAR_5].branches[0], VAR_6,
                                VAR_7 + 1, VAR_8);
      VAR_11 |= FUNC_1(VAR_3, VAR_4, VAR_4->tree[VAR_5].branches[1],
                         VAR_6 + VAR_9 / 2, VAR_7 + 1, VAR_8);
    }
  }
  return VAR_11;
}
