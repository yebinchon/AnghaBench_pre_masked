
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line_length; int * next_line; } ;
struct TYPE_3__ {int line_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned char* VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 unsigned char* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;

void
FUNC_5()
{
 unsigned char *VAR_9;
 unsigned char *VAR_10;
 int VAR_11;

 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3);
 VAR_3 = FUNC_2(VAR_2->line_length);
 VAR_9 = VAR_3;
 VAR_10 = VAR_5;
 VAR_11 = VAR_6;
 while (VAR_11 < VAR_2->line_length)
 {
  *VAR_9 = *VAR_10;
  VAR_9++;
  VAR_10++;
  VAR_11++;
 }
 VAR_4->line_length = 1 + VAR_11 - VAR_6;
 *VAR_9 = '\0';
 *VAR_5 = '\0';
 VAR_2->line_length = VAR_6;
 FUNC_4(VAR_8);
 if (VAR_2->next_line != ((void*)0))
 {
  FUNC_3(VAR_0);
  FUNC_0(VAR_0);
 }
 VAR_7 = VAR_1;
}
