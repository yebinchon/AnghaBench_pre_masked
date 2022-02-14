
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct archive_string {int dummy; } ;
typedef int sec ;
typedef int nanos ;
typedef int int64_t ;


 int FUNC_0 (struct archive_string*,char const*,char*) ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct archive_string *VAR_0, const char *VAR_1,
    int64_t VAR_2, unsigned long VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6;




 char VAR_7[1 + 3*sizeof(VAR_2) + 1 + 3*sizeof(VAR_3)];

 VAR_7[sizeof(VAR_7) - 1] = 0;
 VAR_6 = VAR_7 + sizeof(VAR_7) - 1;


 for (VAR_4 = 0, VAR_5 = 10; VAR_5 > 0 && VAR_4 == 0; VAR_5--) {
  VAR_4 = VAR_3 % 10;
  VAR_3 /= 10;
 }


 if (VAR_5 > 0) {
  while (VAR_5 > 0) {
   *--VAR_6 = "0123456789"[VAR_4];
   VAR_4 = VAR_3 % 10;
   VAR_3 /= 10;
   VAR_5--;
  }
  *--VAR_6 = '.';
 }
 VAR_6 = FUNC_1(VAR_6, VAR_2);

 FUNC_0(VAR_0, VAR_1, VAR_6);
}
