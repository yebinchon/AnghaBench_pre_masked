
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t ;
struct TYPE_3__ {int ibe_interp_argcnt; int ibe_interp_length; int ibe_interpreter; } ;
typedef TYPE_1__ imgact_binmisc_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_3(char *VAR_4, imgact_binmisc_entry_t *VAR_5)
{
 uint32_t VAR_6 = 0, VAR_7 = 1;
 char VAR_8[VAR_0];
 char *VAR_9, *VAR_10;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));





 VAR_9 = VAR_4; VAR_10 = VAR_8;
 while (*VAR_9 != '\0') {
  if (*VAR_9 == ' ' || *VAR_9 == '\t') {
   if (++VAR_6 >= VAR_0)
    break;
   *VAR_10++ = ' ';
   VAR_7++;
   while (*VAR_9 == ' ' || *VAR_9 == '\t')
    VAR_9++;
   continue;
  } else {
   *VAR_10++ = *VAR_9++;
   VAR_6++;
  }
 }
 *VAR_10 = '\0';
 VAR_6++;

 VAR_5->ibe_interpreter = FUNC_0(VAR_6, VAR_1, VAR_2|VAR_3);


 FUNC_1(VAR_5->ibe_interpreter, VAR_8, VAR_6);
 VAR_5->ibe_interp_argcnt = VAR_7;
 VAR_5->ibe_interp_length = VAR_6;
}
