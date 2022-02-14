
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int line_length; } ;
struct TYPE_4__ {int line_length; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned char* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int ,unsigned char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned char* VAR_4 ;
 int VAR_5 ;
 unsigned char* FUNC_3 (int,TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_4()
{
 unsigned char *VAR_8;
 unsigned char *VAR_9;
 int VAR_10;

 if (VAR_3->line_length == 0)
  return;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 VAR_4 = FUNC_3(VAR_3->line_length, VAR_1, VAR_5);
 VAR_1->line_length += VAR_3->line_length - 1;
 VAR_8 = VAR_4;
 VAR_9 = VAR_2;
 VAR_10 = 1;
 while (VAR_10 < VAR_3->line_length)
 {
  VAR_10++;
  *VAR_8 = *VAR_9;
  VAR_8++;
  VAR_9++;
 }
 *VAR_8 = '\0';
 FUNC_0(VAR_7, VAR_6,VAR_4,VAR_5,VAR_1->line_length);
}
