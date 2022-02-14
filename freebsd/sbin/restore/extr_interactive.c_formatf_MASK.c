
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct afile {int fnum; int len; char prefix; char postfix; char* fname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct afile *VAR_3, int VAR_4)
{
 struct afile *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_7 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 VAR_8 = VAR_0;
 VAR_6 = &VAR_3[VAR_4];
 for (VAR_5 = &VAR_3[0]; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_8 < VAR_5->fnum)
   VAR_8 = VAR_5->fnum;
  if (VAR_7 < VAR_5->len)
   VAR_7 = VAR_5->len;
  if (VAR_5->prefix != ' ')
   VAR_9 = 1;
  if (VAR_5->postfix != ' ')
   VAR_10 = 1;
 }
 if (VAR_9)
  VAR_7++;
 if (VAR_10)
  VAR_7++;
 if (VAR_2) {
  for (VAR_14 = 0, VAR_11 = VAR_8; VAR_11 > 0; VAR_11 /= 10)
   VAR_14++;
  VAR_7 += VAR_14 + 1;
 }
 VAR_7++;
 VAR_15 = 81 / VAR_7;
 if (VAR_15 == 0)
  VAR_15 = 1;
 VAR_16 = FUNC_1(VAR_4, VAR_15);
 for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
   VAR_5 = &VAR_3[VAR_12 * VAR_16 + VAR_11];
   if (VAR_2) {
    FUNC_0(VAR_1, "%*jd ",
        VAR_14, (uintmax_t)VAR_5->fnum);
    VAR_5->len += VAR_14 + 1;
   }
   if (VAR_9) {
    FUNC_2(VAR_5->prefix, VAR_1);
    VAR_5->len++;
   }
   FUNC_0(VAR_1, "%s", VAR_5->fname);
   if (VAR_10) {
    FUNC_2(VAR_5->postfix, VAR_1);
    VAR_5->len++;
   }
   if (VAR_5 + VAR_16 >= VAR_6) {
    FUNC_0(VAR_1, "\n");
    break;
   }
   for (VAR_13 = VAR_5->len; VAR_13 < VAR_7; VAR_13++)
    FUNC_2(' ', VAR_1);
  }
 }
}
