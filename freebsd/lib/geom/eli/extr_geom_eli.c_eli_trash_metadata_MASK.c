
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int ssize_t ;
typedef int overwrites ;
typedef int off_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 unsigned char* FUNC_5 (int) ;
 int FUNC_6 (int,unsigned char*,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,unsigned int*,int*,int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct gctl_req *VAR_2, const char *VAR_3, int VAR_4, off_t VAR_5)
{
 unsigned int VAR_6;
 unsigned char *VAR_7;
 ssize_t VAR_8;
 int VAR_9;

 VAR_8 = sizeof(VAR_6);
 if (FUNC_8("kern.geom.eli.overwrites", &VAR_6, &VAR_8,
     ((void*)0), 0) == -1 || VAR_6 == 0) {
  VAR_6 = VAR_0;
 }

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 <= 0) {
  FUNC_4(VAR_2, "Cannot obtain provider sector size %s: %s.",
      VAR_3, FUNC_7(VAR_1));
  return (-1);
 }
 VAR_7 = FUNC_5(VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_2, "Cannot allocate %zd bytes of memory.", VAR_8);
  return (-1);
 }

 VAR_9 = 0;
 do {
  FUNC_0(VAR_7, VAR_8);
  if (FUNC_6(VAR_4, VAR_7, VAR_8, VAR_5) != VAR_8) {
   if (VAR_9 == 0)
    VAR_9 = VAR_1;
  }
  (void)FUNC_2(VAR_4);
 } while (--VAR_6 > 0);
 FUNC_1(VAR_7);
 if (VAR_9 != 0) {
  FUNC_4(VAR_2, "Cannot trash metadata on provider %s: %s.",
      VAR_3, FUNC_7(VAR_9));
  return (-1);
 }
 return (0);
}
