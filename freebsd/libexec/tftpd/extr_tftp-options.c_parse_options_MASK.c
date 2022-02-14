
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {char* o_request; int * o_type; scalar_t__ (* o_handler ) (int) ;int rfc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (char) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*,...) ;
 char FUNC_6 (char) ;

int
FUNC_7(int VAR_9, char *VAR_10, uint16_t VAR_11)
{
 int VAR_12, VAR_13;
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17;

 if (!VAR_8) return (0);


 VAR_15 = VAR_10;
 VAR_13 = 0;
 while (VAR_11 > 0) {
  VAR_16 = VAR_15;
  VAR_12 = FUNC_0(VAR_9, VAR_15, VAR_11);
  VAR_15 += VAR_12;

  VAR_17 = VAR_15;
  VAR_12 = FUNC_0(VAR_9, VAR_15, VAR_11);
  VAR_15 += VAR_12;


  if (*VAR_16 == '\0') break;

  if (VAR_5&VAR_0)
   FUNC_5(VAR_1,
       "option: '%s' value: '%s'", VAR_16, VAR_17);

  for (VAR_14 = VAR_16; *VAR_14; VAR_14++)
   if (FUNC_1(*VAR_14))
    *VAR_14 = FUNC_6(*VAR_14);
  for (VAR_12 = 0; VAR_6[VAR_12].o_type != ((void*)0); VAR_12++) {
   if (FUNC_2(VAR_16, VAR_6[VAR_12].o_type) == 0) {
    if (!VAR_4)
     VAR_6[VAR_12].o_request = VAR_17;
    if (!VAR_7 && !VAR_6[VAR_12].rfc) {
     FUNC_5(VAR_2,
         "Option '%s' with value '%s' found "
         "but it is not an RFC option",
         VAR_16, VAR_17);
     continue;
    }
    if (VAR_6[VAR_12].o_handler)
     VAR_13 +=
         (VAR_6[VAR_12].o_handler)(VAR_9);
    break;
   }
  }
  if (VAR_6[VAR_12].o_type == ((void*)0))
   FUNC_5(VAR_3,
       "Unknown option: '%s'", VAR_16);

  VAR_11 -= FUNC_3(VAR_16) + FUNC_3(VAR_17) + 2;
 }

 return (VAR_13);
}
