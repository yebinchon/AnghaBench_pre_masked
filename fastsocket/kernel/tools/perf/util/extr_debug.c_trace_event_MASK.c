
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char const*,char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

void FUNC_3(union perf_event *VAR_3)
{
 unsigned char *VAR_4 = (void *)VAR_3;
 const char *VAR_5 = VAR_0;
 int VAR_6, VAR_7;

 if (!VAR_1)
  return;

 FUNC_2(".");
 FUNC_0(VAR_2, VAR_5, "\n. ... raw event: size %d bytes\n",
        VAR_3->header.size);

 for (VAR_6 = 0; VAR_6 < VAR_3->header.size; VAR_6++) {
  if ((VAR_6 & 15) == 0) {
   FUNC_2(".");
   FUNC_0(VAR_2, VAR_5, "  %04x: ", VAR_6);
  }

  FUNC_0(VAR_2, VAR_5, " %02x", VAR_4[VAR_6]);

  if (((VAR_6 & 15) == 15) || VAR_6 == VAR_3->header.size-1) {
   FUNC_0(VAR_2, VAR_5, "  ");
   for (VAR_7 = 0; VAR_7 < 15-(VAR_6 & 15); VAR_7++)
    FUNC_0(VAR_2, VAR_5, "   ");
   for (VAR_7 = VAR_6 & ~15; VAR_7 <= VAR_6; VAR_7++) {
    FUNC_0(VAR_2, VAR_5, "%c",
           FUNC_1(VAR_4[VAR_7]) ?
           VAR_4[VAR_7] : '.');
   }
   FUNC_0(VAR_2, VAR_5, "\n");
  }
 }
 FUNC_2(".\n");
}
