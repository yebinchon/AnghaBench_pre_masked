
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,char const*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 scalar_t__ FUNC_6 (int,int ,scalar_t__*) ;
 int FUNC_7 (char const*,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4)
{
 struct stat VAR_5;
 off_t VAR_6[2], VAR_7;
 int VAR_8, VAR_9;


 VAR_9 = FUNC_7(VAR_4, VAR_3);
 if (VAR_9 < 0)
  FUNC_4(1, "Cannot open %s", VAR_4);

 if (FUNC_5(VAR_9, &VAR_5) < 0)
  FUNC_4(1, "Cannot stat %s", VAR_4);
 if (FUNC_1(VAR_5.st_mode))
  VAR_7 = VAR_5.st_size;
 else if (FUNC_0(VAR_5.st_mode)) {
  if (FUNC_6(VAR_9, VAR_2, &VAR_7) != 0)
   FUNC_3(1, "ioctl(DIOCGMEDIASIZE)");
 } else
  FUNC_4(1, "%s has an invalid file type", VAR_4);

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_7 - VAR_0;
 if (FUNC_6(VAR_9, VAR_1, VAR_6) != 0)
  FUNC_9("ioctl(DIOCGDELETE)");


 VAR_8 = FUNC_8(VAR_4);
 FUNC_2(VAR_9);
 return (VAR_8);
}
