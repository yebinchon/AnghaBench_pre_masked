
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct udev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char const*,int,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct udev *VAR_2, int VAR_3, const char *VAR_4, int VAR_5,
  const char *VAR_6, const char *VAR_7, va_list VAR_8)
{
 int VAR_9 = 0;
 char VAR_10[VAR_1];
 VAR_9 = FUNC_0(VAR_10, VAR_1, "libudev: %s:%d %s",
   VAR_4, VAR_5, VAR_6);
 if (VAR_9 < VAR_1-1)
  FUNC_2(VAR_10+VAR_9, VAR_1-VAR_9, VAR_7, VAR_8);
 FUNC_1(VAR_0, VAR_10);
}
