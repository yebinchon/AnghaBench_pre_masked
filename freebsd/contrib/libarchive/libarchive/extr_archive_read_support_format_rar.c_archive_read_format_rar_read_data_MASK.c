
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rar {scalar_t__ has_encrypted_entries; scalar_t__ bytes_unconsumed; scalar_t__ offset_seek; scalar_t__ unp_size; scalar_t__ offset; int compression_method; int start_new_table; int ppmd_valid; int ppmd7_context; scalar_t__ entry_eof; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int (* Ppmd7_Free ) (int *) ;} ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;






 TYPE_2__ VAR_6 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct archive_read*,void const**,size_t*,scalar_t__*) ;
 int FUNC_3 (struct archive_read*,void const**,size_t*,scalar_t__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_7, const void **VAR_8,
                                  size_t *VAR_9, int64_t *VAR_10)
{
  struct rar *VAR_11 = (struct rar *)(VAR_7->format->data);
  int VAR_12;

  if (VAR_11->has_encrypted_entries == VAR_4) {
   VAR_11->has_encrypted_entries = 0;
  }

  if (VAR_11->bytes_unconsumed > 0) {

      FUNC_0(VAR_7, VAR_11->bytes_unconsumed);
      VAR_11->bytes_unconsumed = 0;
  }

  *VAR_8 = ((void*)0);
  if (VAR_11->entry_eof || VAR_11->offset_seek >= VAR_11->unp_size) {
    *VAR_9 = 0;
    *VAR_10 = VAR_11->offset;
    if (*VAR_10 < VAR_11->unp_size)
      *VAR_10 = VAR_11->unp_size;
    return (VAR_0);
  }

  switch (VAR_11->compression_method)
  {
  case 128:
    VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);
    break;

  case 131:
  case 132:
  case 129:
  case 130:
  case 133:
    VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_12 != VAR_3 && VAR_12 != VAR_5) {
      VAR_6.Ppmd7_Free(&VAR_11->ppmd7_context);
      VAR_11->start_new_table = 1;
      VAR_11->ppmd_valid = 0;
    }
    break;

  default:
    FUNC_1(&VAR_7->archive, VAR_1,
                      "Unsupported compression method for RAR file.");
    VAR_12 = VAR_2;
    break;
  }
  return (VAR_12);
}
