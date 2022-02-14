
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadedfile {long len; long maplen; char* buf; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,long*) ;
 struct loadedfile* FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*,int ) ;
 char* FUNC_9 (int *,long,int,int,int,int ) ;
 int FUNC_10 (char*,long) ;
 int FUNC_11 (char const*,int ) ;
 scalar_t__ FUNC_12 (int,char*,size_t) ;
 int FUNC_13 (int ) ;
 long FUNC_14 (int ) ;

__attribute__((used)) static struct loadedfile *
FUNC_15(const char *VAR_12, int VAR_13)
{
 struct loadedfile *VAR_14;



 ssize_t VAR_15;
 size_t VAR_16;

 VAR_14 = FUNC_7(VAR_12);

 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_13 == -1);
  VAR_13 = VAR_8;
 } else {
 }
 VAR_14->maplen = 0;
 VAR_14->len = 1024;
 VAR_14->buf = FUNC_2(VAR_14->len);

 VAR_16 = 0;
 while (1) {
  FUNC_1(VAR_16 <= VAR_14->len);
  if (VAR_16 == VAR_14->len) {
   if (VAR_14->len > VAR_7/2) {
    VAR_11 = VAR_0;
    FUNC_0("%s: file too large", VAR_12);
    FUNC_5(1);
   }
   VAR_14->len *= 2;
   VAR_14->buf = FUNC_3(VAR_14->buf, VAR_14->len);
  }
  FUNC_1(VAR_16 < VAR_14->len);
  VAR_15 = FUNC_12(VAR_13, VAR_14->buf + VAR_16, VAR_14->len - VAR_16);
  if (VAR_15 < 0) {
   FUNC_0("%s: read error: %s", VAR_12, FUNC_13(VAR_11));
   FUNC_5(1);
  }
  if (VAR_15 == 0) {
   break;
  }
  VAR_16 += VAR_15;
 }
 FUNC_1(VAR_16 <= VAR_14->len);
 VAR_14->len = VAR_16;


 if (VAR_14->len > 0) {

  if (VAR_14->buf[VAR_14->len - 1] != '\n')
   VAR_14->len++;
  VAR_14->buf = FUNC_3(VAR_14->buf, VAR_14->len);
  VAR_14->buf[VAR_14->len - 1] = '\n';
 }




 if (VAR_12 != ((void*)0)) {
  FUNC_4(VAR_13);
 }
 return VAR_14;
}
