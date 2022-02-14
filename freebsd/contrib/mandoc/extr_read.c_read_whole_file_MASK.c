
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct mparse {scalar_t__ gzip; } ;
struct buf {size_t sz; scalar_t__ buf; } ;
typedef int ssize_t ;
typedef int * gzFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,char*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_10 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_11 (int,int *,size_t) ;
 int FUNC_12 (struct buf*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct mparse *VAR_12, int VAR_13, struct buf *VAR_14, int *VAR_15)
{
 struct stat VAR_16;
 gzFile VAR_17;
 size_t VAR_18;
 ssize_t VAR_19;
 int VAR_20, VAR_21;

 if (FUNC_4(VAR_13, &VAR_16) == -1) {
  FUNC_9(VAR_1, 0, 0, "%s", FUNC_13(VAR_11));
  return -1;
 }
 if (VAR_12->gzip == 0 && FUNC_0(VAR_16.st_mode)) {
  if (VAR_16.st_size > 0x7fffffff) {
   FUNC_9(VAR_5, 0, 0, ((void*)0));
   return -1;
  }
  *VAR_15 = 1;
  VAR_14->sz = (size_t)VAR_16.st_size;
  VAR_14->buf = FUNC_10(((void*)0), VAR_14->sz, VAR_8, VAR_7, VAR_13, 0);
  if (VAR_14->buf != VAR_6)
   return 0;
 }

 if (VAR_12->gzip) {







  if ((VAR_13 = FUNC_2(VAR_13)) == -1) {
   FUNC_9(VAR_0, 0, 0,
       "%s", FUNC_13(VAR_11));
   return -1;
  }
  if ((VAR_17 = FUNC_6(VAR_13, "rb")) == ((void*)0)) {
   FUNC_9(VAR_3, 0, 0,
       "%s", FUNC_13(VAR_11));
   FUNC_1(VAR_13);
   return -1;
  }
 } else
  VAR_17 = ((void*)0);






 *VAR_15 = 0;
 VAR_18 = 0;
 VAR_21 = -1;
 VAR_14->sz = 0;
 VAR_14->buf = ((void*)0);
 for (;;) {
  if (VAR_18 == VAR_14->sz) {
   if (VAR_14->sz == (1U << 31)) {
    FUNC_9(VAR_5, 0, 0, ((void*)0));
    break;
   }
   FUNC_12(VAR_14, 65536);
  }
  VAR_19 = VAR_12->gzip ?
      FUNC_8(VAR_17, VAR_14->buf + (int)VAR_18, VAR_14->sz - VAR_18) :
      FUNC_11(VAR_13, VAR_14->buf + (int)VAR_18, VAR_14->sz - VAR_18);
  if (VAR_19 == 0) {
   VAR_14->sz = VAR_18;
   VAR_21 = 0;
   break;
  }
  if (VAR_19 == -1) {
   if (VAR_12->gzip)
    (void)FUNC_7(VAR_17, &VAR_20);
   FUNC_9(VAR_4, 0, 0, "%s",
       VAR_12->gzip && VAR_20 != VAR_9 ?
       FUNC_14(VAR_20) : FUNC_13(VAR_11));
   break;
  }
  VAR_18 += (size_t)VAR_19;
 }

 if (VAR_12->gzip && (VAR_20 = FUNC_5(VAR_17)) != VAR_10)
  FUNC_9(VAR_2, 0, 0, "%s",
      VAR_20 == VAR_9 ? FUNC_13(VAR_11) :
      FUNC_14(VAR_20));
 if (VAR_21 == -1) {
  FUNC_3(VAR_14->buf);
  VAR_14->buf = ((void*)0);
 }
 return VAR_21;
}
