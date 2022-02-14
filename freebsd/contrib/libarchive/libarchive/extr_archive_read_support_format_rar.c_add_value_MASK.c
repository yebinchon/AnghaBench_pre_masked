
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct huffman_code {int maxlength; int minlength; TYPE_1__* tree; int numentries; int * table; } ;
struct archive_read {int archive; } ;
struct TYPE_2__ {int* branches; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct huffman_code*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_4, struct huffman_code *VAR_5, int VAR_6,
          int VAR_7, int VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

  FUNC_1(VAR_5->table);
  VAR_5->table = ((void*)0);

  if(VAR_8 > VAR_5->maxlength)
    VAR_5->maxlength = VAR_8;
  if(VAR_8 < VAR_5->minlength)
    VAR_5->minlength = VAR_8;

  VAR_9 = -1;
  if (VAR_9 == 0 || (VAR_9 >= 0
    && (((VAR_7 >> (VAR_9 - 1)) & 3) == 0
    || ((VAR_7 >> (VAR_9 - 1)) & 3) == 3)))
  {
    FUNC_0(&VAR_4->archive, VAR_0,
                      "Invalid repeat position");
    return (VAR_1);
  }

  VAR_10 = 0;
  for (VAR_11 = VAR_8 - 1; VAR_11 >= 0; VAR_11--)
  {
    VAR_12 = (VAR_7 >> VAR_11) & 1;


    if (VAR_5->tree[VAR_10].branches[0] ==
      VAR_5->tree[VAR_10].branches[1])
    {
      FUNC_0(&VAR_4->archive, VAR_0,
                        "Prefix found");
      return (VAR_1);
    }

    if (VAR_11 == VAR_9)
    {

      if (!(VAR_5->tree[VAR_10].branches[VAR_12] < 0))
      {
        FUNC_0(&VAR_4->archive, VAR_0,
                          "Invalid repeating code");
        return (VAR_1);
      }

      if ((VAR_13 = FUNC_2(VAR_5)) < 0) {
        FUNC_0(&VAR_4->archive, VAR_3,
                          "Unable to allocate memory for node data.");
        return (VAR_1);
      }
      if ((VAR_14 = FUNC_2(VAR_5)) < 0) {
        FUNC_0(&VAR_4->archive, VAR_3,
                          "Unable to allocate memory for node data.");
        return (VAR_1);
      }


      VAR_5->tree[VAR_10].branches[VAR_12] = VAR_13;
      VAR_5->tree[VAR_13].branches[VAR_12] = VAR_13;
      VAR_5->tree[VAR_13].branches[VAR_12^1] = VAR_14;
      VAR_10 = VAR_14;

      VAR_11++;
    }
    else
    {

      if (VAR_5->tree[VAR_10].branches[VAR_12] < 0)
      {
        if (FUNC_2(VAR_5) < 0) {
          FUNC_0(&VAR_4->archive, VAR_3,
                            "Unable to allocate memory for node data.");
          return (VAR_1);
        }
        VAR_5->tree[VAR_10].branches[VAR_12] = VAR_5->numentries++;
      }


      VAR_10 = VAR_5->tree[VAR_10].branches[VAR_12];
    }
  }

  if (!(VAR_5->tree[VAR_10].branches[0] == -1
    && VAR_5->tree[VAR_10].branches[1] == -2))
  {
    FUNC_0(&VAR_4->archive, VAR_0,
                      "Prefix found");
    return (VAR_1);
  }


  VAR_5->tree[VAR_10].branches[0] = VAR_6;
  VAR_5->tree[VAR_10].branches[1] = VAR_6;

  return (VAR_2);
}
