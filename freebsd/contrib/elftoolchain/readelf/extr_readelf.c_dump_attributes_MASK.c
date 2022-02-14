
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char* uintmax_t ;
typedef char uint8_t ;
typedef scalar_t__ uint64_t ;
struct section {scalar_t__ type; int scn; } ;
struct TYPE_4__ {scalar_t__ e_machine; } ;
struct readelf {size_t shnum; size_t (* dw_decode ) (char**,int) ;TYPE_1__ ehdr; struct section* sl; } ;
struct TYPE_5__ {int d_size; char* d_buf; } ;
typedef TYPE_2__ Elf_Data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char**,char*) ;
 int FUNC_1 (struct readelf*,char*,char*) ;
 int FUNC_2 (struct readelf*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char*) ;
 size_t FUNC_10 (char**,int) ;
 size_t FUNC_11 (char**,int) ;
 char* FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static void
FUNC_14(struct readelf *VAR_6)
{
 struct section *VAR_7;
 Elf_Data *VAR_8;
 uint8_t *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;
 uint64_t VAR_16;
 int VAR_17, VAR_18, VAR_19;

 for (VAR_18 = 0; (size_t) VAR_18 < VAR_6->shnum; VAR_18++) {
  VAR_7 = &VAR_6->sl[VAR_18];
  if (VAR_7->type != VAR_4 &&
      (VAR_6->ehdr.e_machine != VAR_0 || VAR_7->type != VAR_5 + 3))
   continue;
  (void) FUNC_5();
  if ((VAR_8 = FUNC_6(VAR_7->scn, ((void*)0))) == ((void*)0)) {
   VAR_19 = FUNC_5();
   if (VAR_19 != 0)
    FUNC_13("elf_rawdata failed: %s",
        FUNC_4(VAR_19));
   continue;
  }
  if (VAR_8->d_size <= 0)
   continue;
  VAR_9 = VAR_8->d_buf;
  VAR_10 = VAR_9 + VAR_8->d_size;
  if (*VAR_9 != 'A') {
   FUNC_7("Unknown Attribute Section Format: %c\n",
       (char) *VAR_9);
   continue;
  }
  VAR_12 = VAR_8->d_size - 1;
  VAR_9++;
  while (VAR_12 > 0) {
   if (VAR_12 < 4) {
    FUNC_13("truncated attribute section length");
    return;
   }
   VAR_13 = VAR_6->dw_decode(&VAR_9, 4);
   if (VAR_13 > VAR_12) {
    FUNC_13("invalid attribute section length");
    return;
   }
   VAR_12 -= VAR_13;
   VAR_14 = FUNC_9((char *) VAR_9) + 1;
   if (VAR_14 + 4 > VAR_13) {
    FUNC_13("invalid attribute section name");
    return;
   }
   FUNC_7("Attribute Section: %s\n", (char *) VAR_9);
   VAR_9 += VAR_14;
   VAR_13 -= VAR_14 + 4;
   while (VAR_13 > 0) {
    VAR_11 = VAR_9;
    VAR_17 = *VAR_9++;
    VAR_15 = VAR_6->dw_decode(&VAR_9, 4);
    if (VAR_15 > VAR_13) {
     FUNC_13("invalid attribute sub-section"
         " length");
     return;
    }
    VAR_13 -= VAR_15;
    FUNC_7("%s", FUNC_12(VAR_17));
    if (VAR_17 == 2 || VAR_17 == 3) {
     FUNC_8(':');
     for (;;) {
      VAR_16 = FUNC_0(&VAR_9, VAR_10);
      if (VAR_16 == 0)
       break;
      FUNC_7(" %ju", (uintmax_t) VAR_16);
     }
    }
    FUNC_8('\n');
    if (VAR_6->ehdr.e_machine == VAR_0 &&
        VAR_7->type == VAR_5 + 3)
     FUNC_1(VAR_6, VAR_9, VAR_11 + VAR_15);
    else if (VAR_6->ehdr.e_machine == VAR_1 ||
        VAR_6->ehdr.e_machine == VAR_2)
     FUNC_2(VAR_6, VAR_9,
         VAR_11 + VAR_15);
    else if (VAR_6->ehdr.e_machine == VAR_3)
     FUNC_3(VAR_9, VAR_11 + VAR_15);
    VAR_9 = VAR_11 + VAR_15;
   }
  }
 }
}
