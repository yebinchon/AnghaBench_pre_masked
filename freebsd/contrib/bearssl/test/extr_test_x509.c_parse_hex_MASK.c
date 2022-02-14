
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,long) ;
 int VAR_1 ;
 unsigned char* FUNC_2 (size_t) ;

__attribute__((used)) static unsigned char *
FUNC_3(const char *VAR_2, long VAR_3, const char *VAR_4, size_t *VAR_5)
{
 unsigned char *VAR_6;

 VAR_6 = ((void*)0);
 for (;;) {
  size_t VAR_7, VAR_8;
  int VAR_9, VAR_10;

  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;
  for (VAR_7 = 0; VAR_4[VAR_7]; VAR_7 ++) {
   int VAR_11;

   VAR_11 = VAR_4[VAR_7];
   if (VAR_11 >= '0' && VAR_11 <= '9') {
    VAR_11 -= '0';
   } else if (VAR_11 >= 'A' && VAR_11 <= 'F') {
    VAR_11 -= 'A' - 10;
   } else if (VAR_11 >= 'a' && VAR_11 <= 'f') {
    VAR_11 -= 'a' - 10;
   } else if (VAR_11 == ' ' || VAR_11 == ':') {
    continue;
   } else {
    FUNC_1(VAR_1, "invalid hexadecimal character"
     " in '%s' (line %ld)\n",
     VAR_2, VAR_3);
    FUNC_0(VAR_0);
   }
   if (VAR_10) {
    if (VAR_6 != ((void*)0)) {
     VAR_6[VAR_8] = (VAR_9 << 4) + VAR_11;
    }
    VAR_8 ++;
   } else {
    VAR_9 = VAR_11;
   }
   VAR_10 = !VAR_10;
  }
  if (VAR_10) {
   FUNC_1(VAR_1, "invalid hexadecimal value (partial"
    " byte) in '%s' (line %ld)\n",
    VAR_2, VAR_3);
   FUNC_0(VAR_0);
  }
  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_2(VAR_8);
  } else {
   *VAR_5 = VAR_8;
   return VAR_6;
  }
 }
}
