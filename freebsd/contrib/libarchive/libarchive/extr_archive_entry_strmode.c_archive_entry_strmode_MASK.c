
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {char* strmode; } ;
typedef int mode_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int * FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (char*,char*) ;

const char *
FUNC_5(struct archive_entry *VAR_3)
{
 static const mode_t VAR_4[] =
     { 0400, 0200, 0100, 0040, 0020, 0010, 0004, 0002, 0001 };
 char *VAR_5 = VAR_3->strmode;
 mode_t VAR_6;
 int VAR_7;


 FUNC_4(VAR_5, "?rwxrwxrwx ");

 VAR_6 = FUNC_3(VAR_3);
 switch (FUNC_1(VAR_3)) {
 case 129: VAR_5[0] = '-'; break;
 case 134: VAR_5[0] = 'b'; break;
 case 133: VAR_5[0] = 'c'; break;
 case 132: VAR_5[0] = 'd'; break;
 case 130: VAR_5[0] = 'l'; break;
 case 128: VAR_5[0] = 's'; break;
 case 131: VAR_5[0] = 'p'; break;
 default:
  if (FUNC_2(VAR_3) != ((void*)0)) {
   VAR_5[0] = 'h';
   break;
  }
 }

 for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
  if (!(VAR_6 & VAR_4[VAR_7]))
   VAR_5[VAR_7+1] = '-';

 if (VAR_6 & VAR_1) {
  if (VAR_6 & 0100) VAR_5[3] = 's';
  else VAR_5[3] = 'S';
 }
 if (VAR_6 & VAR_0) {
  if (VAR_6 & 0010) VAR_5[6] = 's';
  else VAR_5[6] = 'S';
 }
 if (VAR_6 & VAR_2) {
  if (VAR_6 & 0001) VAR_5[9] = 't';
  else VAR_5[9] = 'T';
 }
 if (FUNC_0(VAR_3) != 0)
  VAR_5[10] = '+';

 return (VAR_5);
}
