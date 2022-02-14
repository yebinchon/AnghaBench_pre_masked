
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rar {scalar_t__ has_encrypted_entries; int found_first_header; unsigned long main_flags; char encryptver; int reserved2; int reserved1; } ;
struct TYPE_4__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_2__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 unsigned int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;


 char* VAR_9 ;


 void* FUNC_0 (struct archive_read*,size_t,size_t*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (struct archive_entry*,int) ;
 int FUNC_3 (struct archive_entry*,int) ;
 unsigned long FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 unsigned long FUNC_7 (unsigned long,unsigned char const*,unsigned int) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (struct archive_read*,struct archive_entry*,char) ;
 int FUNC_11 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_12(struct archive_read *VAR_10,
                                    struct archive_entry *VAR_11)
{
  const void *VAR_12;
  const char *VAR_13;
  struct rar *VAR_14;
  size_t VAR_15;
  char VAR_16;
  int VAR_17;
  unsigned VAR_18;
  unsigned long VAR_19;

  VAR_10->archive.archive_format = VAR_3;
  if (VAR_10->archive.archive_format_name == ((void*)0))
    VAR_10->archive.archive_format_name = "RAR";

  VAR_14 = (struct rar *)(VAR_10->format->data);
  if (VAR_14->has_encrypted_entries == VAR_4) {
   VAR_14->has_encrypted_entries = 0;
  }




  if ((VAR_12 = FUNC_0(VAR_10, 7, ((void*)0))) == ((void*)0))
    return (VAR_0);

  VAR_13 = VAR_12;
  if (VAR_14->found_first_header == 0 &&
     ((VAR_13[0] == 'M' && VAR_13[1] == 'Z') || FUNC_8(VAR_13, "\x7F\x45LF", 4) == 0)) {

    VAR_17 = FUNC_11(VAR_10);
    if (VAR_17 < VAR_5)
      return (VAR_17);
  }
  VAR_14->found_first_header = 1;

  while (1)
  {
    unsigned long VAR_20;

    if ((VAR_12 = FUNC_0(VAR_10, 7, ((void*)0))) == ((void*)0))
      return (VAR_2);
    VAR_13 = VAR_12;

    VAR_16 = VAR_13[2];
    switch(VAR_16)
    {
    case 132:
      if (FUNC_8(VAR_13, VAR_9, 7) != 0) {
        FUNC_6(&VAR_10->archive, VAR_1,
          "Invalid marker header");
        return (VAR_2);
      }
      FUNC_1(VAR_10, 7);
      break;

    case 133:
      VAR_14->main_flags = FUNC_4(VAR_13 + 3);
      VAR_15 = FUNC_4(VAR_13 + 5);
      if (VAR_15 < 7 + sizeof(VAR_14->reserved1) + sizeof(VAR_14->reserved2)) {
        FUNC_6(&VAR_10->archive, VAR_1,
          "Invalid header size");
        return (VAR_2);
      }
      if ((VAR_12 = FUNC_0(VAR_10, VAR_15, ((void*)0))) == ((void*)0))
        return (VAR_2);
      VAR_13 = VAR_12;
      FUNC_9(VAR_14->reserved1, VAR_13 + 7, sizeof(VAR_14->reserved1));
      FUNC_9(VAR_14->reserved2, VAR_13 + 7 + sizeof(VAR_14->reserved1),
             sizeof(VAR_14->reserved2));
      if (VAR_14->main_flags & VAR_7) {
        if (VAR_15 < 7 + sizeof(VAR_14->reserved1) + sizeof(VAR_14->reserved2)+1) {
          FUNC_6(&VAR_10->archive, VAR_1,
            "Invalid header size");
          return (VAR_2);
        }
        VAR_14->encryptver = *(VAR_13 + 7 + sizeof(VAR_14->reserved1) +
                            sizeof(VAR_14->reserved2));
      }



      if (VAR_14->main_flags & VAR_8)
      {
        FUNC_3(VAR_11, 1);
        FUNC_2(VAR_11, 1);
        VAR_14->has_encrypted_entries = 1;
         FUNC_6(&VAR_10->archive, VAR_1,
                          "RAR encryption support unavailable.");
        return (VAR_2);
      }

      VAR_20 = FUNC_7(0, (const unsigned char *)VAR_13 + 2, (unsigned)VAR_15 - 2);
      if ((VAR_20 & 0xffff) != FUNC_4(VAR_13)) {
        FUNC_6(&VAR_10->archive, VAR_1,
          "Header CRC error");
        return (VAR_2);
      }
      FUNC_1(VAR_10, VAR_15);
      break;

    case 134:
      return FUNC_10(VAR_10, VAR_11, VAR_16);

    case 136:
    case 137:
    case 128:
    case 130:
    case 129:
    case 135:
      VAR_18 = FUNC_4(VAR_13 + 3);
      VAR_15 = FUNC_4(VAR_13 + 5);
      if (VAR_15 < 7) {
        FUNC_6(&VAR_10->archive, VAR_1,
          "Invalid header size too small");
        return (VAR_2);
      }
      if (VAR_18 & VAR_6)
      {
        if (VAR_15 < 7 + 4) {
          FUNC_6(&VAR_10->archive, VAR_1,
            "Invalid header size too small");
          return (VAR_2);
        }
        if ((VAR_12 = FUNC_0(VAR_10, VAR_15, ((void*)0))) == ((void*)0))
          return (VAR_2);
        VAR_13 = VAR_12;
        VAR_15 += FUNC_5(VAR_13 + 7);
      }


      VAR_19 = FUNC_4(VAR_13);
      FUNC_1(VAR_10, 2);
      VAR_15 -= 2;


      VAR_20 = 0;
      while (VAR_15 > 0) {
       size_t VAR_21 = VAR_15;
       ssize_t VAR_22;
       if (VAR_21 > 32 * 1024) {
        VAR_21 = 32 * 1024;
       }
       if ((VAR_12 = FUNC_0(VAR_10, VAR_21, &VAR_22)) == ((void*)0)) {
        return (VAR_2);
       }
       VAR_13 = VAR_12;
       VAR_20 = FUNC_7(VAR_20, (const unsigned char *)VAR_13, (unsigned)VAR_22);
       FUNC_1(VAR_10, VAR_22);
       VAR_15 -= VAR_22;
      }
      if ((VAR_20 & 0xffff) != VAR_19) {
       FUNC_6(&VAR_10->archive, VAR_1,
    "Header CRC error");
       return (VAR_2);
      }
      if (VAR_16 == 135)
       return (VAR_0);
      break;

    case 131:
      if ((VAR_17 = FUNC_10(VAR_10, VAR_11, VAR_16)) < VAR_5)
        return VAR_17;
      break;

    default:
      FUNC_6(&VAR_10->archive, VAR_1,
                        "Bad RAR file");
      return (VAR_2);
    }
  }
}
