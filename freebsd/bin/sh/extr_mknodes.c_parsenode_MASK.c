
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str {scalar_t__ nfields; int done; void* tag; } ;


 int VAR_0 ;
 struct str* VAR_1 ;
 int FUNC_0 (char*) ;
 char* VAR_2 ;
 int FUNC_1 (char*) ;
 void** VAR_3 ;
 struct str** VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_2 (char*) ;
 struct str* VAR_7 ;
 scalar_t__ FUNC_3 (void*,char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 struct str *VAR_10;

 if (VAR_1 && VAR_1->nfields > 0)
  VAR_1->done = 1;
 FUNC_1(VAR_8);
 if (! FUNC_1(VAR_9))
  FUNC_0("Tag expected");
 if (*VAR_2 != '\0')
  FUNC_0("Garbage at end of line");
 VAR_3[VAR_6] = FUNC_2(VAR_8);
 for (VAR_10 = VAR_7 ; VAR_10 < VAR_7 + VAR_5 ; VAR_10++) {
  if (FUNC_3(VAR_10->tag, VAR_9) == 0)
   break;
 }
 if (VAR_10 >= VAR_7 + VAR_5) {
  VAR_10->tag = FUNC_2(VAR_9);
  VAR_10->nfields = 0;
  VAR_1 = VAR_10;
  VAR_5++;
 }
 VAR_4[VAR_6] = VAR_10;
 VAR_6++;
}
