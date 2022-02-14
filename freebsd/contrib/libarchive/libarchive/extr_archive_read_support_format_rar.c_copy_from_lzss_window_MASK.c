
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * window; } ;
struct rar {void* unp_buffer; int unp_buffer_size; size_t unp_offset; TYPE_2__ lzss; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int int64_t ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,int *,int) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_4, const void **VAR_5,
                        int64_t VAR_6, int VAR_7)
{
  int VAR_8, VAR_9;
  struct rar *VAR_10 = (struct rar *)(VAR_4->format->data);

  if (!VAR_10->unp_buffer)
  {
    if ((VAR_10->unp_buffer = FUNC_3(VAR_10->unp_buffer_size)) == ((void*)0))
    {
      FUNC_0(&VAR_4->archive, VAR_3,
                        "Unable to allocate memory for uncompressed data.");
      return (VAR_1);
    }
  }

  VAR_8 = FUNC_1(&VAR_10->lzss, VAR_6);
  if(VAR_8 + VAR_7 <= FUNC_2(&VAR_10->lzss)) {
    FUNC_4(&VAR_10->unp_buffer[VAR_10->unp_offset], &VAR_10->lzss.window[VAR_8],
           VAR_7);
  } else if (VAR_7 <= FUNC_2(&VAR_10->lzss)) {
    VAR_9 = FUNC_2(&VAR_10->lzss) - VAR_8;
    if (VAR_9 < 0) {
      FUNC_0(&VAR_4->archive, VAR_0,
                        "Bad RAR file data");
      return (VAR_1);
    }
    if (VAR_9 < VAR_7) {
      FUNC_4(&VAR_10->unp_buffer[VAR_10->unp_offset],
             &VAR_10->lzss.window[VAR_8], VAR_9);
      FUNC_4(&VAR_10->unp_buffer[VAR_10->unp_offset + VAR_9],
             &VAR_10->lzss.window[0], VAR_7 - VAR_9);
    } else {
      FUNC_4(&VAR_10->unp_buffer[VAR_10->unp_offset],
             &VAR_10->lzss.window[VAR_8], VAR_7);
    }
  } else {
      FUNC_0(&VAR_4->archive, VAR_0,
                        "Bad RAR file data");
      return (VAR_1);
  }
  VAR_10->unp_offset += VAR_7;
  if (VAR_10->unp_offset >= VAR_10->unp_buffer_size)
    *VAR_5 = VAR_10->unp_buffer;
  else
    *VAR_5 = ((void*)0);
  return (VAR_2);
}
