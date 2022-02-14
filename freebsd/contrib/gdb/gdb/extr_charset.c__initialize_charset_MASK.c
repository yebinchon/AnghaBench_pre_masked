
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tlist ;
struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,int *,char*,int *) ;
 int FUNC_2 (struct cmd_list_element*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_17 ;
 int FUNC_8 (struct cmd_list_element*,int ) ;
 int FUNC_9 (int ) ;
 int VAR_18 ;
 int FUNC_10 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (char*,int,int ,int ,int ,int ) ;
 int FUNC_12 (char*,char*,int*) ;
 int VAR_23 ;
 int VAR_24 ;

void
FUNC_13 (void)
{
  struct cmd_list_element *VAR_25;
  FUNC_5 (FUNC_11 ("ASCII", 1,
                                    VAR_0, 0,
                                    VAR_1, 0));
  FUNC_5 (FUNC_4 ("ISO-8859-1"));
  FUNC_5 (FUNC_3 ("EBCDIC-US"));
  FUNC_5 (FUNC_3 ("IBM1047"));
  FUNC_6 ();

  {
    struct { char *from; char *to; int *table; } VAR_26[] = {
      { "ASCII", "ISO-8859-1", &VAR_4 },
      { "ASCII", "EBCDIC-US", &VAR_2 },
      { "ASCII", "IBM1047", &VAR_3 },
      { "ISO-8859-1", "ASCII", &VAR_14 },
      { "ISO-8859-1", "EBCDIC-US", &VAR_15 },
      { "ISO-8859-1", "IBM1047", &VAR_16 },
      { "EBCDIC-US", "ASCII", &VAR_6 },
      { "EBCDIC-US", "ISO-8859-1", &VAR_8 },
      { "EBCDIC-US", "IBM1047", &VAR_7 },
      { "IBM1047", "ASCII", &VAR_11 },
      { "IBM1047", "ISO-8859-1", &VAR_13 },
      { "IBM1047", "EBCDIC-US", &VAR_12 }
    };

    int VAR_27;

    for (VAR_27 = 0; VAR_27 < (sizeof (VAR_26) / sizeof (VAR_26[0])); VAR_27++)
      FUNC_7 (FUNC_12 (VAR_26[VAR_27].from,
                                                      VAR_26[VAR_27].to,
                                                      VAR_26[VAR_27].table));
  }

  FUNC_9 (VAR_10);
  FUNC_10 (VAR_24);

  VAR_25 = FUNC_1 ("charset",
         VAR_5,
         VAR_9,
         &VAR_10,
                              "Set the host and target character sets.\n"
                              "The `host character set' is the one used by the system GDB is running on.\n"
                              "The `target character set' is the one used by the program being debugged.\n"
                              "You may only use supersets of ASCII for your host character set; GDB does\n"
                              "not support any others.\n"
                              "To see a list of the character sets GDB supports, type `set charset <TAB>'.",
         &VAR_20);



  FUNC_8 (VAR_25, VAR_17);

  FUNC_0 ("charset", VAR_5, VAR_21,
    "Show the host and target character sets.\n"
    "The `host character set' is the one used by the system GDB is running on.\n"
    "The `target character set' is the one used by the program being debugged.\n"
    "You may only use supersets of ASCII for your host character set; GDB does\n"
    "not support any others.\n"
    "To see a list of the character sets GDB supports, type `set charset <TAB>'.",
    &VAR_22);


  VAR_25 = FUNC_1 ("host-charset",
         VAR_5,
         VAR_9,
         &VAR_10,
         "Set the host character set.\n"
         "The `host character set' is the one used by the system GDB is running on.\n"
         "You may only use supersets of ASCII for your host character set; GDB does\n"
         "not support any others.\n"
         "To see a list of the character sets GDB supports, type `set host-charset <TAB>'.",
         &VAR_20);

  FUNC_8 (VAR_25, VAR_18);

  FUNC_2 (VAR_25, &VAR_22);



  VAR_25 = FUNC_1 ("target-charset",
         VAR_5,
         VAR_23,
         &VAR_24,
         "Set the target character set.\n"
         "The `target character set' is the one used by the program being debugged.\n"
         "GDB translates characters and strings between the host and target\n"
         "character sets as needed.\n"
         "To see a list of the character sets GDB supports, type `set target-charset'<TAB>",
         &VAR_20);

  FUNC_8 (VAR_25, VAR_19);
  FUNC_2 (VAR_25, &VAR_22);
}
