
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p; } ;
struct TYPE_7__ {int next_in; } ;
struct rar {int ppmd_eod; int dictionary_size; scalar_t__ offset; scalar_t__ unp_size; size_t unp_offset; void* unp_buffer; int offset_outgoing; scalar_t__ crc_calculated; scalar_t__ file_crc; int entry_eof; size_t bytes_uncopied; size_t unp_buffer_size; int start_new_table; int ppmd_escape; int filterstart; TYPE_1__ range_dec; int ppmd7_context; scalar_t__ is_ppmd_block; TYPE_3__ br; int valid; } ;
struct archive_read {int archive; TYPE_2__* format; } ;
typedef int int64_t ;
struct TYPE_8__ {int (* Ppmd7_DecodeSymbol ) (int *,int *) ;} ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read*,void const**,int,int) ;
 void* FUNC_2 (scalar_t__,void const*,unsigned int) ;
 int FUNC_3 (struct archive_read*,int) ;
 int FUNC_4 (struct rar*,int) ;
 int FUNC_5 (struct rar*,int,int) ;
 int FUNC_6 (struct archive_read*) ;
 int FUNC_7 (struct archive_read*,TYPE_3__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_9, const void **VAR_10, size_t *VAR_11,
               int64_t *VAR_12)
{
  struct rar *VAR_13;
  int64_t VAR_14, VAR_15, VAR_16;
  size_t VAR_17;
  int VAR_18 = (VAR_5), VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

  VAR_13 = (struct rar *)(VAR_9->format->data);

  do {
    if (!VAR_13->valid)
      return (VAR_4);
    if (VAR_13->ppmd_eod ||
       (VAR_13->dictionary_size && VAR_13->offset >= VAR_13->unp_size))
    {
      if (VAR_13->unp_offset > 0) {



        *VAR_10 = VAR_13->unp_buffer;
        *VAR_11 = VAR_13->unp_offset;
        *VAR_12 = VAR_13->offset_outgoing;
        VAR_13->offset_outgoing += *VAR_11;

        VAR_13->crc_calculated = FUNC_2(VAR_13->crc_calculated, *VAR_10,
          (unsigned)*VAR_11);
        VAR_13->unp_offset = 0;
        return (VAR_5);
      }
      *VAR_10 = ((void*)0);
      *VAR_11 = 0;
      *VAR_12 = VAR_13->offset;
      if (VAR_13->file_crc != VAR_13->crc_calculated) {
        FUNC_0(&VAR_9->archive, VAR_1,
                          "File CRC error");
        return (VAR_4);
      }
      VAR_13->entry_eof = 1;
      return (VAR_0);
    }

    if (!VAR_13->is_ppmd_block && VAR_13->dictionary_size && VAR_13->bytes_uncopied > 0)
    {
      if (VAR_13->bytes_uncopied > (VAR_13->unp_buffer_size - VAR_13->unp_offset))
        VAR_17 = VAR_13->unp_buffer_size - VAR_13->unp_offset;
      else
        VAR_17 = (size_t)VAR_13->bytes_uncopied;
      VAR_18 = FUNC_1(VAR_9, VAR_10, VAR_13->offset, (int)VAR_17);
      if (VAR_18 != VAR_5)
        return (VAR_18);
      VAR_13->offset += VAR_17;
      VAR_13->bytes_uncopied -= VAR_17;
      if (*VAR_10 != ((void*)0)) {
        VAR_13->unp_offset = 0;
        *VAR_11 = VAR_13->unp_buffer_size;
        *VAR_12 = VAR_13->offset_outgoing;
        VAR_13->offset_outgoing += *VAR_11;

        VAR_13->crc_calculated = FUNC_2(VAR_13->crc_calculated, *VAR_10,
          (unsigned)*VAR_11);
        return (VAR_18);
      }
      continue;
    }

    if (!VAR_13->br.next_in &&
      (VAR_18 = FUNC_7(VAR_9, &(VAR_13->br))) < VAR_6)
      return (VAR_18);
    if (VAR_13->start_new_table && ((VAR_18 = FUNC_6(VAR_9)) < (VAR_6)))
      return (VAR_18);

    if (VAR_13->is_ppmd_block)
    {
      if ((VAR_19 = VAR_8.Ppmd7_DecodeSymbol(
        &VAR_13->ppmd7_context, &VAR_13->range_dec.p)) < 0)
      {
        FUNC_0(&VAR_9->archive, VAR_1,
                          "Invalid symbol");
        return (VAR_4);
      }
      if(VAR_19 != VAR_13->ppmd_escape)
      {
        FUNC_4(VAR_13, VAR_19);
        VAR_13->bytes_uncopied++;
      }
      else
      {
        if ((VAR_20 = VAR_8.Ppmd7_DecodeSymbol(
          &VAR_13->ppmd7_context, &VAR_13->range_dec.p)) < 0)
        {
          FUNC_0(&VAR_9->archive, VAR_1,
                            "Invalid symbol");
          return (VAR_4);
        }

        switch(VAR_20)
        {
          case 0:
            VAR_13->start_new_table = 1;
            return FUNC_13(VAR_9, VAR_10, VAR_11, VAR_12);

          case 2:
            VAR_13->ppmd_eod = 1;
            continue;

          case 3:
            FUNC_0(&VAR_9->archive, VAR_2,
                              "Parsing filters is unsupported.");
            return (VAR_3);

          case 4:
            VAR_21 = 0;
            for (VAR_23 = 2; VAR_23 >= 0; VAR_23--)
            {
              if ((VAR_20 = VAR_8.Ppmd7_DecodeSymbol(
                &VAR_13->ppmd7_context, &VAR_13->range_dec.p)) < 0)
              {
                FUNC_0(&VAR_9->archive, VAR_1,
                                  "Invalid symbol");
                return (VAR_4);
              }
              VAR_21 |= VAR_20 << (VAR_23 * 8);
            }
            if ((VAR_22 = VAR_8.Ppmd7_DecodeSymbol(
              &VAR_13->ppmd7_context, &VAR_13->range_dec.p)) < 0)
            {
              FUNC_0(&VAR_9->archive, VAR_1,
                                "Invalid symbol");
              return (VAR_4);
            }
            FUNC_5(VAR_13, VAR_21 + 2, VAR_22 + 32);
            VAR_13->bytes_uncopied += VAR_22 + 32;
            break;

          case 5:
            if ((VAR_22 = VAR_8.Ppmd7_DecodeSymbol(
              &VAR_13->ppmd7_context, &VAR_13->range_dec.p)) < 0)
            {
              FUNC_0(&VAR_9->archive, VAR_1,
                                "Invalid symbol");
              return (VAR_4);
            }
            FUNC_5(VAR_13, 1, VAR_22 + 4);
            VAR_13->bytes_uncopied += VAR_22 + 4;
            break;

         default:
           FUNC_4(VAR_13, VAR_19);
           VAR_13->bytes_uncopied++;
        }
      }
    }
    else
    {
      VAR_14 = VAR_13->offset;
      VAR_15 = VAR_14 + VAR_13->dictionary_size;
      VAR_13->filterstart = VAR_7;

      if ((VAR_16 = FUNC_3(VAR_9, VAR_15)) < 0)
        return ((int)VAR_16);

      VAR_13->bytes_uncopied = VAR_16 - VAR_14;
      if (VAR_13->bytes_uncopied == 0) {




          FUNC_0(&VAR_9->archive, VAR_1,
                            "Internal error extracting RAR file");
          return (VAR_4);
      }
    }
    if (VAR_13->bytes_uncopied > (VAR_13->unp_buffer_size - VAR_13->unp_offset))
      VAR_17 = VAR_13->unp_buffer_size - VAR_13->unp_offset;
    else
      VAR_17 = (size_t)VAR_13->bytes_uncopied;
    VAR_18 = FUNC_1(VAR_9, VAR_10, VAR_13->offset, (int)VAR_17);
    if (VAR_18 != VAR_5)
      return (VAR_18);
    VAR_13->offset += VAR_17;
    VAR_13->bytes_uncopied -= VAR_17;




  } while (*VAR_10 == ((void*)0));

  VAR_13->unp_offset = 0;
  *VAR_11 = VAR_13->unp_buffer_size;
  *VAR_12 = VAR_13->offset_outgoing;
  VAR_13->offset_outgoing += *VAR_11;

  VAR_13->crc_calculated = FUNC_2(VAR_13->crc_calculated, *VAR_10, (unsigned)*VAR_11);
  return VAR_18;
}
