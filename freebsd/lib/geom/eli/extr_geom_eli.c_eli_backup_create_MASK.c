
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,unsigned char*,scalar_t__,int ) ;
 int FUNC_6 (struct gctl_req*,char*,...) ;
 unsigned char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char const*,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (int,unsigned char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(struct gctl_req *VAR_5, const char *VAR_6, const char *VAR_7)
{
 unsigned char *VAR_8;
 ssize_t VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = -1;
 VAR_11 = -1;
 VAR_8 = ((void*)0);
 VAR_9 = 0;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9 == 0) {
  FUNC_6(VAR_5, "Cannot get informations about %s: %s.", VAR_6,
      FUNC_9(VAR_4));
  goto out;
 }
 VAR_8 = FUNC_7(VAR_9);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_5, "Cannot allocate memory.");
  goto out;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_8, VAR_9, VAR_0);
 if (VAR_10 != 0) {
  FUNC_6(VAR_5, "Unable to read metadata from %s: %s.", VAR_6,
      FUNC_9(VAR_10));
  goto out;
 }

 VAR_11 = FUNC_8(VAR_7, VAR_3 | VAR_2 | VAR_1, 0600);
 if (VAR_11 == -1) {
  FUNC_6(VAR_5, "Unable to open %s: %s.", VAR_7,
      FUNC_9(VAR_4));
  goto out;
 }

 if (FUNC_11(VAR_11, VAR_8, VAR_9) != VAR_9) {
  FUNC_6(VAR_5, "Unable to write to %s: %s.", VAR_7,
      FUNC_9(VAR_4));
  (void)FUNC_0(VAR_11);
  (void)FUNC_10(VAR_7);
  goto out;
 }
 (void)FUNC_3(VAR_11);
 (void)FUNC_0(VAR_11);

 VAR_12 = 0;
out:
 if (VAR_8 != ((void*)0)) {
  FUNC_1(VAR_8, VAR_9);
  FUNC_2(VAR_8);
 }
 return (VAR_12);
}
