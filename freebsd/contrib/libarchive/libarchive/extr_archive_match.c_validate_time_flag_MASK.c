
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


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
 int FUNC_0 (struct archive*,int ,int ,char const*) ;
 int FUNC_1 (struct archive*,int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_10, int VAR_11, const char *VAR_12)
{
 FUNC_0(VAR_10, VAR_3,
     VAR_8, VAR_12);


 if (VAR_11 &
    ((~(VAR_4 | VAR_1)) & 0xff00)) {
  FUNC_1(VAR_10, VAR_9, "Invalid time flag");
  return (VAR_0);
 }
 if ((VAR_11 & (VAR_4 | VAR_1)) == 0) {
  FUNC_1(VAR_10, VAR_9, "No time flag");
  return (VAR_0);
 }


 if (VAR_11 &
    ((~(VAR_5 | VAR_6
   | VAR_2)) & 0x00ff)) {
  FUNC_1(VAR_10, VAR_9, "Invalid comparison flag");
  return (VAR_0);
 }
 if ((VAR_11 & (VAR_5 | VAR_6
     | VAR_2)) == 0) {
  FUNC_1(VAR_10, VAR_9, "No comparison flag");
  return (VAR_0);
 }

 return (VAR_7);
}
