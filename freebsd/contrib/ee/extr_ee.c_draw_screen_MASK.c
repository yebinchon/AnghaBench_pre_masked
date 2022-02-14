
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text {unsigned char* line; struct text* next_line; int line_length; } ;


 struct text* VAR_0 ;
 int FUNC_0 (int,int ,unsigned char*,int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,scalar_t__) ;

void
FUNC_3()
{
 struct text *VAR_6;
 unsigned char *VAR_7;
 int VAR_8;

 VAR_6 = VAR_0;
 VAR_8 = VAR_4;
 FUNC_1(VAR_5);
 while ((VAR_6 != ((void*)0)) && (VAR_8 <= VAR_2))
 {
  VAR_7 = VAR_6->line;
  FUNC_0(VAR_8, 0, VAR_7, 1, VAR_6->line_length);
  VAR_8++;
  VAR_6 = VAR_6->next_line;
 }
 FUNC_2(VAR_5, VAR_8, 0);
 FUNC_2(VAR_5, VAR_4, (VAR_3 - VAR_1));
}
