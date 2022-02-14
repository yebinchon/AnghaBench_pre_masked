
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rar_br {int dummy; } ;
struct rar {scalar_t__ filterstart; int output_last_match; int lastlength; int lastoffset; int start_new_block; int start_new_table; int* oldoffset; int numlowoffsetrepeats; int lastlowoffset; scalar_t__ valid; int lowoffsetcode; int offsetcode; int lengthcode; int lzss; int maincode; scalar_t__ is_ppmd_block; struct rar_br br; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int offsetbits ;
typedef int offsetbases ;
typedef int lengthbits ;
typedef int lengthbases ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct rar*,int) ;
 int FUNC_2 (struct rar*,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct rar_br*,unsigned char const) ;
 int FUNC_6 (struct rar_br*,unsigned char const) ;
 int FUNC_7 (struct archive_read*,struct rar_br*,unsigned char const) ;
 int FUNC_8 (struct archive_read*,int *) ;

__attribute__((used)) static int64_t
FUNC_9(struct archive_read *VAR_5, int64_t VAR_6)
{
  static const unsigned char VAR_7[] =
    { 0, 1, 2, 3, 4, 5, 6,
        7, 8, 10, 12, 14, 16, 20,
       24, 28, 32, 40, 48, 56, 64,
       80, 96, 112, 128, 160, 192, 224 };
  static const unsigned char VAR_8[] =
    { 0, 0, 0, 0, 0, 0, 0,
      0, 1, 1, 1, 1, 2, 2,
      2, 2, 3, 3, 3, 3, 4,
      4, 4, 4, 5, 5, 5, 5 };
  static const unsigned int VAR_9[] =
    { 0, 1, 2, 3, 4, 6,
            8, 12, 16, 24, 32, 48,
           64, 96, 128, 192, 256, 384,
          512, 768, 1024, 1536, 2048, 3072,
         4096, 6144, 8192, 12288, 16384, 24576,
        32768, 49152, 65536, 98304, 131072, 196608,
       262144, 327680, 393216, 458752, 524288, 589824,
       655360, 720896, 786432, 851968, 917504, 983040,
      1048576, 1310720, 1572864, 1835008, 2097152, 2359296,
      2621440, 2883584, 3145728, 3407872, 3670016, 3932160 };
  static const unsigned char VAR_10[] =
    { 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4,
       5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10,
      11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16,
      16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
      18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18 };
  static const unsigned char VAR_11[] =
    { 0, 4, 8, 16, 32, 64, 128, 192 };
  static const unsigned char VAR_12[] =
    { 2, 2, 3, 4, 5, 6, 6, 6 };

  int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  unsigned char VAR_21;
  struct rar *VAR_22 = (struct rar *)(VAR_5->format->data);
  struct rar_br *VAR_23 = &(VAR_22->br);

  if (VAR_22->filterstart < VAR_6)
    VAR_6 = VAR_22->filterstart;

  while (1)
  {
    if (VAR_22->output_last_match &&
      FUNC_3(&VAR_22->lzss) + VAR_22->lastlength <= VAR_6)
    {
      FUNC_2(VAR_22, VAR_22->lastoffset, VAR_22->lastlength);
      VAR_22->output_last_match = 0;
    }

    if(VAR_22->is_ppmd_block || VAR_22->output_last_match ||
      FUNC_3(&VAR_22->lzss) >= VAR_6)
      return FUNC_3(&VAR_22->lzss);

    if ((VAR_13 = FUNC_8(VAR_5, &VAR_22->maincode)) < 0)
      return (VAR_3);
    VAR_22->output_last_match = 0;

    if (VAR_13 < 256)
    {
      FUNC_1(VAR_22, VAR_13);
      continue;
    }
    else if (VAR_13 == 256)
    {
      if (!FUNC_7(VAR_5, VAR_23, 1))
        goto truncated_data;
      VAR_21 = !FUNC_5(VAR_23, 1);
      FUNC_6(VAR_23, 1);

      if(VAR_21)
      {
        VAR_22->start_new_block = 1;
        if (!FUNC_7(VAR_5, VAR_23, 1))
          goto truncated_data;
        VAR_22->start_new_table = FUNC_5(VAR_23, 1);
        FUNC_6(VAR_23, 1);
        return FUNC_3(&VAR_22->lzss);
      }
      else
      {
        if (FUNC_4(VAR_5) != VAR_4)
          return (VAR_3);
        continue;
      }
    }
    else if(VAR_13==257)
    {
      FUNC_0(&VAR_5->archive, VAR_1,
                        "Parsing filters is unsupported.");
      return (VAR_2);
    }
    else if(VAR_13==258)
    {
      if(VAR_22->lastlength == 0)
        continue;

      VAR_14 = VAR_22->lastoffset;
      VAR_15 = VAR_22->lastlength;
    }
    else if (VAR_13 <= 262)
    {
      VAR_16 = VAR_13 - 259;
      VAR_14 = VAR_22->oldoffset[VAR_16];

      if ((VAR_17 = FUNC_8(VAR_5, &VAR_22->lengthcode)) < 0)
        goto bad_data;
      if (VAR_17 > (int)(sizeof(VAR_7)/sizeof(VAR_7[0])))
        goto bad_data;
      if (VAR_17 > (int)(sizeof(VAR_8)/sizeof(VAR_8[0])))
        goto bad_data;
      VAR_15 = VAR_7[VAR_17] + 2;
      if (VAR_8[VAR_17] > 0) {
        if (!FUNC_7(VAR_5, VAR_23, VAR_8[VAR_17]))
          goto truncated_data;
        VAR_15 += FUNC_5(VAR_23, VAR_8[VAR_17]);
        FUNC_6(VAR_23, VAR_8[VAR_17]);
      }

      for (VAR_18 = VAR_16; VAR_18 > 0; VAR_18--)
        VAR_22->oldoffset[VAR_18] = VAR_22->oldoffset[VAR_18-1];
      VAR_22->oldoffset[0] = VAR_14;
    }
    else if(VAR_13<=270)
    {
      VAR_14 = VAR_11[VAR_13-263] + 1;
      if(VAR_12[VAR_13-263] > 0) {
        if (!FUNC_7(VAR_5, VAR_23, VAR_12[VAR_13-263]))
          goto truncated_data;
        VAR_14 += FUNC_5(VAR_23, VAR_12[VAR_13-263]);
        FUNC_6(VAR_23, VAR_12[VAR_13-263]);
      }

      VAR_15 = 2;

      for(VAR_18 = 3; VAR_18 > 0; VAR_18--)
        VAR_22->oldoffset[VAR_18] = VAR_22->oldoffset[VAR_18-1];
      VAR_22->oldoffset[0] = VAR_14;
    }
    else
    {
      if (VAR_13-271 > (int)(sizeof(VAR_7)/sizeof(VAR_7[0])))
        goto bad_data;
      if (VAR_13-271 > (int)(sizeof(VAR_8)/sizeof(VAR_8[0])))
        goto bad_data;
      VAR_15 = VAR_7[VAR_13-271]+3;
      if(VAR_8[VAR_13-271] > 0) {
        if (!FUNC_7(VAR_5, VAR_23, VAR_8[VAR_13-271]))
          goto truncated_data;
        VAR_15 += FUNC_5(VAR_23, VAR_8[VAR_13-271]);
        FUNC_6(VAR_23, VAR_8[VAR_13-271]);
      }

      if ((VAR_19 = FUNC_8(VAR_5, &VAR_22->offsetcode)) < 0)
        goto bad_data;
      if (VAR_19 > (int)(sizeof(VAR_9)/sizeof(VAR_9[0])))
        goto bad_data;
      if (VAR_19 > (int)(sizeof(VAR_10)/sizeof(VAR_10[0])))
        goto bad_data;
      VAR_14 = VAR_9[VAR_19]+1;
      if(VAR_10[VAR_19] > 0)
      {
        if(VAR_19 > 9)
        {
          if(VAR_10[VAR_19] > 4) {
            if (!FUNC_7(VAR_5, VAR_23, VAR_10[VAR_19] - 4))
              goto truncated_data;
            VAR_14 += FUNC_5(VAR_23, VAR_10[VAR_19] - 4) << 4;
            FUNC_6(VAR_23, VAR_10[VAR_19] - 4);
   }

          if(VAR_22->numlowoffsetrepeats > 0)
          {
            VAR_22->numlowoffsetrepeats--;
            VAR_14 += VAR_22->lastlowoffset;
          }
          else
          {
            if ((VAR_20 =
              FUNC_8(VAR_5, &VAR_22->lowoffsetcode)) < 0)
              return (VAR_3);
            if(VAR_20 == 16)
            {
              VAR_22->numlowoffsetrepeats = 15;
              VAR_14 += VAR_22->lastlowoffset;
            }
            else
            {
              VAR_14 += VAR_20;
              VAR_22->lastlowoffset = VAR_20;
            }
          }
        }
        else {
          if (!FUNC_7(VAR_5, VAR_23, VAR_10[VAR_19]))
            goto truncated_data;
          VAR_14 += FUNC_5(VAR_23, VAR_10[VAR_19]);
          FUNC_6(VAR_23, VAR_10[VAR_19]);
        }
      }

      if (VAR_14 >= 0x40000)
        VAR_15++;
      if (VAR_14 >= 0x2000)
        VAR_15++;

      for(VAR_18 = 3; VAR_18 > 0; VAR_18--)
        VAR_22->oldoffset[VAR_18] = VAR_22->oldoffset[VAR_18-1];
      VAR_22->oldoffset[0] = VAR_14;
    }

    VAR_22->lastoffset = VAR_14;
    VAR_22->lastlength = VAR_15;
    VAR_22->output_last_match = 1;
  }
truncated_data:
  FUNC_0(&VAR_5->archive, VAR_0,
                    "Truncated RAR file data");
  VAR_22->valid = 0;
  return (VAR_3);
bad_data:
  FUNC_0(&VAR_5->archive, VAR_0,
                    "Bad RAR file data");
  return (VAR_3);
}
