
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
typedef int intmax_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int c_size; int c_extsize; scalar_t__ c_type; scalar_t__ c_magic; int c_count; scalar_t__* c_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int volatile) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (char*) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (void (*) (char*,size_t),size_t*) ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void FUNC_9 (char*,size_t) ;
 void FUNC_10 (char*,size_t) ;
 void FUNC_11 (char*,size_t) ;

void
FUNC_12(void (*VAR_17)(char *, size_t), void (*VAR_18)(char *, size_t),
 void (*VAR_19)(char *, size_t))
{
 int VAR_20;
 volatile off_t VAR_21;
 size_t VAR_22;
 int VAR_23, VAR_24;
 void (*VAR_25)(char *, size_t);
 char VAR_26[VAR_3 / VAR_4][VAR_4];
 char VAR_27[VAR_4];

 VAR_23 = 0;
 VAR_21 = VAR_14.c_size;
 VAR_22 = 0;
 VAR_24 = VAR_14.c_extsize;
 if (VAR_14.c_type == VAR_7)
  FUNC_5("ran off end of tape\n");
 if (VAR_14.c_magic != VAR_1)
  FUNC_5("not at beginning of a file\n");
 if (!VAR_11 && FUNC_7(VAR_13) != 0)
  return;
 VAR_11++;
 VAR_25 = VAR_17;
 if (VAR_21 == 0 && VAR_24 > 0) {
  VAR_25 = VAR_18;
  VAR_21 = VAR_24;
  VAR_24 = 0;
 }
loop:
 for (VAR_20 = 0; VAR_20 < VAR_14.c_count; VAR_20++) {
  if (!VAR_12 && VAR_20 > VAR_5) {
   if (VAR_0) {
    FUNC_3(VAR_15, "spcl.c_count = %jd\n",
        (intmax_t)VAR_14.c_count);
    break;
   } else
    FUNC_5("spcl.c_count = %jd\n",
        (intmax_t)VAR_14.c_count);
  }
  if (VAR_12 || VAR_14.c_addr[VAR_20]) {
   FUNC_6(&VAR_26[VAR_23++][0]);
   if (VAR_23 == VAR_10 / VAR_4) {
    FUNC_8(VAR_19, &VAR_22);
    (*VAR_25)((char *)VAR_26, (long)(VAR_21 > VAR_4 ?
         VAR_10 : (VAR_23 - 1) * VAR_4 + VAR_21));
    VAR_23 = 0;
   }
  } else {
   if (VAR_23 > 0) {
    FUNC_8(VAR_19, &VAR_22);
    (*VAR_25)((char *)VAR_26, (long)(VAR_21 > VAR_4 ?
         VAR_23 * VAR_4 :
         (VAR_23 - 1) * VAR_4 + VAR_21));
    VAR_23 = 0;
   }






   VAR_22 += (long)FUNC_0(VAR_4, VAR_21);
  }
  if ((VAR_21 -= VAR_4) <= 0) {
   if (VAR_21 > -VAR_4 && VAR_23 > 0) {
    FUNC_8(VAR_19, &VAR_22);
    (*VAR_25)((char *)VAR_26,
     (long)((VAR_23 * VAR_4) + VAR_21));
    VAR_23 = 0;
   }
   if (VAR_24 > 0) {
    VAR_25 = VAR_18;
    VAR_21 = VAR_24;
    VAR_24 = 0;
    continue;
   }
   if (VAR_14.c_count - VAR_20 > 1)
    FUNC_1(VAR_16, "skipping %d junk block(s)\n",
     VAR_14.c_count - VAR_20 - 1);
   for (VAR_20++; VAR_20 < VAR_14.c_count; VAR_20++) {
    if (!VAR_12 && VAR_20 > VAR_5) {
     if (VAR_0) {
      FUNC_3(VAR_15,
          "spcl.c_count = %jd\n",
          (intmax_t)VAR_14.c_count);
      break;
     } else
      FUNC_5("spcl.c_count = %jd\n",
          (intmax_t)VAR_14.c_count);
    }
    if (VAR_12 || VAR_14.c_addr[VAR_20])
     FUNC_6(VAR_27);
   }
   break;
  }
 }
 if (FUNC_4(&VAR_14) == VAR_2 && VAR_21 > 0) {
  if (VAR_14.c_type == VAR_6)
   goto loop;
  FUNC_1(VAR_16,
   "Missing address (header) block for %s at %ld blocks\n",
   VAR_9.name, VAR_8);
 }
 if (VAR_23 > 0)
  FUNC_5("getfile: lost data\n");
 FUNC_2(&VAR_14);
 VAR_11 = 0;
}
