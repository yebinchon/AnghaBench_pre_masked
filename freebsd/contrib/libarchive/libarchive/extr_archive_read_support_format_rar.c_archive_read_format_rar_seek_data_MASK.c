
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rar {scalar_t__ compression_method; scalar_t__ offset_seek; scalar_t__ unp_size; unsigned int cursor; int main_flags; int file_flags; size_t nodes; int has_endarc_header; scalar_t__ offset; scalar_t__ bytes_unconsumed; TYPE_2__* dbo; scalar_t__ bytes_remaining; } ;
struct archive_read {int archive; int entry; TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ start_offset; scalar_t__ end_offset; scalar_t__ header_size; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__,int const) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct archive_read*,int ) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static int64_t
FUNC_4(struct archive_read *VAR_8, int64_t VAR_9,
    int VAR_10)
{
  int64_t VAR_11, VAR_12;
  unsigned int VAR_13;
  struct rar *VAR_14 = (struct rar *)(VAR_8->format->data);

  if (VAR_14->compression_method == VAR_4)
  {

    switch (VAR_10)
    {
      case 130:
        VAR_11 = VAR_14->offset_seek;
        break;
      case 129:
        VAR_11 = VAR_14->unp_size;
        break;
      case 128:
      default:
        VAR_11 = 0;
    }
    VAR_11 += VAR_9;
    if (VAR_11 < 0)
    {

      return -1;
    }
    else if (VAR_11 > VAR_14->unp_size)
    {




      VAR_14->offset_seek = VAR_11;
      VAR_11 = VAR_14->unp_size;
    }

    VAR_11 += VAR_14->dbo[0].start_offset;
    VAR_13 = 0;
    while (VAR_13 < VAR_14->cursor)
    {
      VAR_13++;
      VAR_11 += VAR_14->dbo[VAR_13].start_offset - VAR_14->dbo[VAR_13-1].end_offset;
    }
    if (VAR_14->main_flags & VAR_7)
    {

      while (1)
      {
        if (VAR_11 < VAR_14->dbo[VAR_14->cursor].start_offset &&
          VAR_14->file_flags & VAR_6)
        {

          if (VAR_14->cursor == 0)
          {
            FUNC_3(&VAR_8->archive, VAR_1,
              "Attempt to seek past beginning of RAR data block");
            return (VAR_2);
          }
          VAR_14->cursor--;
          VAR_11 -= VAR_14->dbo[VAR_14->cursor+1].start_offset -
            VAR_14->dbo[VAR_14->cursor].end_offset;
          if (VAR_11 < VAR_14->dbo[VAR_14->cursor].start_offset)
            continue;
          VAR_12 = FUNC_0(VAR_8, VAR_14->dbo[VAR_14->cursor].start_offset -
            VAR_14->dbo[VAR_14->cursor].header_size, 128);
          if (VAR_12 < (VAR_3))
            return VAR_12;
          VAR_12 = FUNC_2(VAR_8, VAR_8->entry);
          if (VAR_12 != (VAR_3))
          {
            FUNC_3(&VAR_8->archive, VAR_1,
              "Error during seek of RAR file");
            return (VAR_2);
          }
          VAR_14->cursor--;
          break;
        }
        else if (VAR_11 > VAR_14->dbo[VAR_14->cursor].end_offset &&
          VAR_14->file_flags & VAR_5)
        {

          VAR_14->cursor++;
          if (VAR_14->cursor < VAR_14->nodes &&
            VAR_11 > VAR_14->dbo[VAR_14->cursor].end_offset)
          {
            VAR_11 += VAR_14->dbo[VAR_14->cursor].start_offset -
              VAR_14->dbo[VAR_14->cursor-1].end_offset;
            continue;
          }
          VAR_14->cursor--;
          VAR_12 = FUNC_0(VAR_8, VAR_14->dbo[VAR_14->cursor].end_offset,
                                    128);
          if (VAR_12 < (VAR_3))
            return VAR_12;
          VAR_12 = FUNC_2(VAR_8, VAR_8->entry);
          if (VAR_12 == (VAR_0))
          {
            VAR_14->has_endarc_header = 1;
            VAR_12 = FUNC_2(VAR_8, VAR_8->entry);
          }
          if (VAR_12 != (VAR_3))
          {
            FUNC_3(&VAR_8->archive, VAR_1,
              "Error during seek of RAR file");
            return (VAR_2);
          }
          VAR_11 += VAR_14->dbo[VAR_14->cursor].start_offset -
            VAR_14->dbo[VAR_14->cursor-1].end_offset;
          continue;
        }
        break;
      }
    }

    VAR_12 = FUNC_0(VAR_8, VAR_11, 128);
    if (VAR_12 < (VAR_3))
      return VAR_12;
    VAR_14->bytes_remaining = VAR_14->dbo[VAR_14->cursor].end_offset - VAR_12;
    VAR_13 = VAR_14->cursor;
    while (VAR_13 > 0)
    {
      VAR_13--;
      VAR_12 -= VAR_14->dbo[VAR_13+1].start_offset - VAR_14->dbo[VAR_13].end_offset;
    }
    VAR_12 -= VAR_14->dbo[0].start_offset;


    FUNC_1(&VAR_8->archive);

    VAR_14->bytes_unconsumed = 0;
    VAR_14->offset = 0;





    if (VAR_12 == VAR_14->unp_size && VAR_14->offset_seek > VAR_14->unp_size)
      return VAR_14->offset_seek;


    VAR_14->offset_seek = VAR_12;
    return VAR_14->offset_seek;
  }
  else
  {
    FUNC_3(&VAR_8->archive, VAR_1,
      "Seeking of compressed RAR files is unsupported");
  }
  return (VAR_2);
}
