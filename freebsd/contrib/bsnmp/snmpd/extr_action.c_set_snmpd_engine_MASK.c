
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef size_t uint32_t ;
typedef int engine ;
struct TYPE_2__ {size_t engine_len; int* engine_id; int engine_boots; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*,int) ;
 scalar_t__ FUNC_4 (int *,char*,int*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

int
FUNC_7(void)
{
 FILE *VAR_5;
 uint32_t VAR_6;
 uint8_t *VAR_7, VAR_8[2 * VAR_1 + 2];
 uint8_t VAR_9[2 * VAR_1 + 2];

 if (VAR_2[0] == '\0')
  return (-1);

 VAR_7 = VAR_9;
 for (VAR_6 = 0; VAR_6 < VAR_4.engine_len; VAR_6++)
  VAR_7 += FUNC_5(VAR_7, "%.2x", VAR_4.engine_id[VAR_6]);
 *VAR_7++ = '\n';
 *VAR_7++ = '\0';

 if ((VAR_5 = FUNC_2(VAR_2, "r+")) != ((void*)0)) {
  if (FUNC_1(VAR_8, sizeof(VAR_8) - 1, VAR_5) == ((void*)0) ||
      FUNC_4(VAR_5, "%u", &VAR_4.engine_boots) <= 0) {
   FUNC_0(VAR_5);
   goto save_boots;
  }

  FUNC_0(VAR_5);
  if (FUNC_6(VAR_9, VAR_8) != 0)
   VAR_4.engine_boots = 1;
  else
   VAR_4.engine_boots++;
 } else if (VAR_3 != VAR_0)
  return (-1);

save_boots:
 if ((VAR_5 = FUNC_2(VAR_2, "w+")) == ((void*)0))
  return (-1);
 FUNC_3(VAR_5, "%s%u\n", VAR_9, VAR_4.engine_boots);
 FUNC_0(VAR_5);

 return (0);
}
