
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman_code {int numentries; int maxlength; int minlength; scalar_t__ numallocatedentries; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct huffman_code*,int,int,int) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct huffman_code*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_5, struct huffman_code *VAR_6,
            unsigned char *VAR_7, int VAR_8, char VAR_9)
{
  int VAR_10, VAR_11, VAR_12 = 0, VAR_13 = VAR_8;

  VAR_6->numentries = 0;
  VAR_6->numallocatedentries = 0;
  if (FUNC_2(VAR_6) < 0) {
    FUNC_1(&VAR_5->archive, VAR_2,
                      "Unable to allocate memory for node data.");
    return (VAR_0);
  }
  VAR_6->numentries = 1;
  VAR_6->minlength = VAR_3;
  VAR_6->maxlength = VAR_4;
  VAR_12 = 0;
  for(VAR_10 = 1; VAR_10 <= VAR_9; VAR_10++)
  {
    for(VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
      if (VAR_7[VAR_11] != VAR_10) continue;
      if (FUNC_0(VAR_5, VAR_6, VAR_11, VAR_12, VAR_10) != VAR_1)
        return (VAR_0);
      VAR_12++;
      if (--VAR_13 <= 0) { break; break; }
    }
    VAR_12 <<= 1;
  }
  return (VAR_1);
}
