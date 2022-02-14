
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned char*,int,int) ;
 int VAR_6 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int) ;
 unsigned char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_3()
{
 int VAR_12;
 int VAR_13;
 unsigned char *VAR_14;
 unsigned char *VAR_15;
 unsigned char VAR_16[3];

 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4);
 VAR_4 = FUNC_2(VAR_2->line_length);
 VAR_16[0] = VAR_3[0];
 VAR_16[1] = VAR_3[1];
 VAR_16[2] = VAR_3[2];
 VAR_15 = VAR_7;
 VAR_14 = VAR_4;
 VAR_12 = VAR_8;
 while ((VAR_12 < VAR_2->line_length) &&
    ((*VAR_15 != ' ') && (*VAR_15 != '\t')))
 {
  VAR_12++;
  *VAR_14 = *VAR_15;
  VAR_14++;
  VAR_15++;
 }
 while ((VAR_12 < VAR_2->line_length) &&
    ((*VAR_15 == ' ') || (*VAR_15 == '\t')))
 {
  VAR_12++;
  *VAR_14 = *VAR_15;
  VAR_14++;
  VAR_15++;
 }
 *VAR_14 = '\0';
 VAR_5 = VAR_13 = VAR_14 - VAR_4;
 VAR_14 = VAR_7;
 while (VAR_12 < VAR_2->line_length)
 {
  VAR_12++;
  *VAR_14 = *VAR_15;
  VAR_14++;
  VAR_15++;
 }
 VAR_2->line_length -= VAR_13;
 *VAR_14 = '\0';
 FUNC_0(VAR_10, VAR_9,VAR_7,VAR_8,VAR_2->line_length);
 VAR_3[0] = VAR_16[0];
 VAR_3[1] = VAR_16[1];
 VAR_3[2] = VAR_16[2];
 VAR_11 = VAR_1;
 VAR_6 = VAR_0;
}
