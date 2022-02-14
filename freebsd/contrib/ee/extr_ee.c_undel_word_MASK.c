
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_length; int line_length; } ;


 TYPE_1__* VAR_0 ;
 unsigned char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned char*,int,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 unsigned char* VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_3 (int,TYPE_1__*,int) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4()
{
 int VAR_7;
 int VAR_8;
 unsigned char *VAR_9;
 unsigned char *VAR_10;
 unsigned char *VAR_11;
 unsigned char *VAR_12;




 if ((VAR_0->max_length - (VAR_0->line_length + VAR_2)) < 5)
  VAR_3 = FUNC_3(VAR_2, VAR_0, VAR_4);
 VAR_11 = VAR_10 = FUNC_2(VAR_0->line_length + VAR_2);
 VAR_12 = VAR_1;
 VAR_7 = 1;



 while (VAR_7 <= VAR_2)
 {
  VAR_7++;
  *VAR_11 = *VAR_12;
  VAR_11++;
  VAR_12++;
 }
 VAR_9 = VAR_3;
 VAR_8 = VAR_4;




 while (VAR_8 < VAR_0->line_length)
 {
  VAR_7++;
  VAR_8++;
  *VAR_11 = *VAR_9;
  VAR_11++;
  VAR_9++;
 }
 VAR_0->line_length += VAR_2;
 VAR_9 = VAR_3;
 *VAR_11 = '\0';
 VAR_11 = VAR_10;
 VAR_8 = 1;



 while (VAR_8 < VAR_7)
 {
  VAR_8++;
  *VAR_9 = *VAR_11;
  VAR_11++;
  VAR_9++;
 }
 *VAR_9 = '\0';
 FUNC_1(VAR_10);
 FUNC_0(VAR_6, VAR_5, VAR_3, VAR_4, VAR_0->line_length);
}
