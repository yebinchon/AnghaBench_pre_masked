
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct archive_string {char* s; int length; } ;
typedef int num ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct archive_string*,char*) ;
 int FUNC_4 (struct archive_string*,char const*) ;
 int FUNC_5 (struct archive_string*) ;
 int FUNC_6 (struct archive_string*) ;
 int FUNC_7 (struct archive_string*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (struct archive_string*) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,int,int) ;
 int FUNC_11 (char*) ;

int
FUNC_12(const char *VAR_8)
{
        static const char VAR_9[] = {
  '0', '1', '2', '3', '4', '5', '6', '7',
  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
  'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
  'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
  'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
  'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
  'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
  'u', 'v', 'w', 'x', 'y', 'z'
        };
 struct archive_string VAR_10;
 struct stat VAR_11;
 int VAR_12;
 char *VAR_13, *VAR_14;

 VAR_12 = -1;
 FUNC_6(&VAR_10);
 if (VAR_8 == ((void*)0)) {
  if (FUNC_8(&VAR_10) != VAR_0)
   goto exit_tmpfile;
 } else
  FUNC_4(&VAR_10, VAR_8);
 if (VAR_10.s[VAR_10.length-1] == '/') {
  VAR_10.s[VAR_10.length-1] = '\0';
  VAR_10.length --;
 }
 if (FUNC_9(VAR_10.s, &VAR_11) < 0)
  goto exit_tmpfile;
 if (!FUNC_0(VAR_11.st_mode)) {
  VAR_7 = VAR_2;
  goto exit_tmpfile;
 }
 FUNC_3(&VAR_10, "/libarchive_");
 VAR_13 = VAR_10.s + FUNC_7(&VAR_10);
 FUNC_3(&VAR_10, "XXXXXXXXXX");
 VAR_14 = VAR_10.s + FUNC_7(&VAR_10);

 do {
  char *VAR_15;

  VAR_15 = VAR_13;
  FUNC_2(VAR_15, VAR_14 - VAR_15);
  while (VAR_15 < VAR_14) {
   int VAR_16 = *((unsigned char *)VAR_15) % sizeof(VAR_9);
   *VAR_15++ = VAR_9[VAR_16];
  }
  VAR_12 = FUNC_10(VAR_10.s, VAR_4 | VAR_5 | VAR_6 | VAR_3,
     0600);
 } while (VAR_12 < 0 && VAR_7 == VAR_1);
 if (VAR_12 < 0)
  goto exit_tmpfile;
 FUNC_1(VAR_12);
 FUNC_11(VAR_10.s);
exit_tmpfile:
 FUNC_5(&VAR_10);
 return (VAR_12);
}
