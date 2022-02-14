
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct magic_set {int flags; int mode; } ;
struct TYPE_2__ {int st_mode; } ;
struct buffer {TYPE_1__ st; } ;
typedef int file_pushbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*,int,struct stat*,void const*,size_t) ;
 scalar_t__ FUNC_2 (struct magic_set*,int*) ;
 int FUNC_3 (struct magic_set*,struct buffer*,int) ;
 int FUNC_4 (struct magic_set*,size_t) ;
 int FUNC_5 (struct magic_set*,struct buffer*,int *,int ,char const**,char const**,char const**) ;
 int FUNC_6 (struct magic_set*,struct buffer*) ;
 int FUNC_7 (struct magic_set*,struct buffer*) ;
 int FUNC_8 (struct magic_set*,char const*,struct buffer*) ;
 char* FUNC_9 (struct magic_set*,int *) ;
 int FUNC_10 (struct magic_set*,char*,...) ;
 int * FUNC_11 (struct magic_set*) ;
 int FUNC_12 (struct magic_set*,struct buffer*,int *,int *,int ,int) ;
 int FUNC_13 (struct magic_set*,struct buffer*) ;
 int FUNC_14 (struct magic_set*,struct buffer*) ;
 int FUNC_15 (struct magic_set*,struct buffer*,char const*) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (char*) ;
 int VAR_13 ;

int
FUNC_18(struct magic_set *VAR_14, int VAR_15, struct stat *VAR_16,
    const char *VAR_17 __attribute__ ((__unused__)),
    const void *VAR_18, size_t VAR_19)
{
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 const char *VAR_23 = ((void*)0);
 const char *VAR_24 = "binary";
 const char *VAR_25 = "data";
 const char *VAR_26 = ((void*)0);
 char *VAR_27 = ((void*)0);
 struct buffer VAR_28;

 FUNC_1(&VAR_28, VAR_15, VAR_16, VAR_18, VAR_19);
 VAR_14->mode = VAR_28.st.st_mode;

 if (VAR_19 == 0) {
  VAR_25 = "empty";
  goto simple;
 } else if (VAR_19 == 1) {
  VAR_25 = "very short file (no magic)";
  goto simple;
 }

 if ((VAR_14->flags & VAR_8) == 0) {
  VAR_22 = FUNC_5(VAR_14, &VAR_28, ((void*)0), 0,
      &VAR_23, &VAR_24, &VAR_26);
 }
 if ((VAR_14->flags & VAR_11) == 0) {
  VAR_20 = FUNC_7(VAR_14, &VAR_28);
  if ((VAR_14->flags & VAR_1) != 0)
   (void)FUNC_16(VAR_13, "[try tar %d]\n", VAR_20);
  if (VAR_20) {
   if (FUNC_2(VAR_14, &VAR_21))
    goto done;
  }
 }


 if ((VAR_14->flags & VAR_9) == 0) {
  VAR_20 = FUNC_6(VAR_14, &VAR_28);
  if ((VAR_14->flags & VAR_1) != 0)
   (void)FUNC_16(VAR_13, "[try json %d]\n", VAR_20);
  if (VAR_20) {
   if (FUNC_2(VAR_14, &VAR_21))
    goto done;
  }
 }


 if ((VAR_14->flags & VAR_5) == 0) {
  VAR_20 = FUNC_13(VAR_14, &VAR_28);
  if ((VAR_14->flags & VAR_1) != 0)
   (void)FUNC_16(VAR_13, "[try cdf %d]\n", VAR_20);
  if (VAR_20) {
   if (FUNC_2(VAR_14, &VAR_21))
    goto done;
  }
 }
 if ((VAR_14->flags & VAR_10) == 0) {
  VAR_20 = FUNC_12(VAR_14, &VAR_28, ((void*)0), ((void*)0), VAR_0, VAR_22);
  if ((VAR_14->flags & VAR_1) != 0)
   (void)FUNC_16(VAR_13, "[try softmagic %d]\n", VAR_20);
  if (VAR_20 == 1 && VAR_27) {
   if (FUNC_10(VAR_14, "%s", VAR_27) == -1)
    goto done;
  }
  if (VAR_20) {
   if (FUNC_2(VAR_14, &VAR_21))
    goto done;
  }
 }


 if ((VAR_14->flags & VAR_12) == 0) {

  VAR_20 = FUNC_3(VAR_14, &VAR_28, VAR_22);
  if ((VAR_14->flags & VAR_1) != 0)
   (void)FUNC_16(VAR_13, "[try ascmagic %d]\n", VAR_20);
  if (VAR_20) {
   goto done;
  }
 }

simple:

 if (VAR_20 == 0) {
  VAR_20 = 1;
  VAR_21 = FUNC_4(VAR_14, VAR_19);
  if (VAR_21 == 0)
   if (FUNC_10(VAR_14, "%s", VAR_25) == -1)
    VAR_21 = -1;
 }
 done:
 if ((VAR_14->flags & VAR_2) != 0) {
  if (VAR_14->flags & VAR_3)
   if (FUNC_10(VAR_14, "; charset=") == -1)
    VAR_21 = -1;
  if (FUNC_10(VAR_14, "%s", VAR_24) == -1)
   VAR_21 = -1;
 }



 FUNC_17(VAR_27);
 FUNC_0(&VAR_28);
 if (VAR_21)
  return VAR_21;

 return VAR_20;
}
