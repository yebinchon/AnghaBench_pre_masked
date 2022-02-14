
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct sbuf {int dummy; } ;
struct field_desc {char* name; unsigned long long width; int start; } ;
typedef int buf ;


 int FUNC_0 (struct sbuf*,char*,...) ;
 int FUNC_1 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct sbuf *VAR_0, uint64_t VAR_1, const struct field_desc *VAR_2)
{
 char VAR_3[32];
 int VAR_4 = 0;

 while (VAR_2->name) {
  uint64_t VAR_5 = (1ULL << VAR_2->width) - 1;
  int VAR_6 = FUNC_1(VAR_3, sizeof(VAR_3), "%s: %ju", VAR_2->name,
      ((uintmax_t)VAR_1 >> VAR_2->start) & VAR_5);

  if (VAR_4 + VAR_6 >= 79) {
   VAR_4 = 8;
   FUNC_0(VAR_0, "\n        ");
  }
  FUNC_0(VAR_0, "%s ", VAR_3);
  VAR_4 += VAR_6 + 1;
  VAR_2++;
 }
 FUNC_0(VAR_0, "\n");
}
