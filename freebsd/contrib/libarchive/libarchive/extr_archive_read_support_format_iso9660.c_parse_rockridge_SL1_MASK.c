
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct file_info {int symlink_continues; TYPE_1__ symlink; } ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,unsigned char) ;

__attribute__((used)) static void
FUNC_3(struct file_info *VAR_0, const unsigned char *VAR_1,
    int VAR_2)
{
 const char *VAR_3 = "";

 if (!VAR_0->symlink_continues || VAR_0->symlink.length < 1)
  FUNC_1(&VAR_0->symlink);
 VAR_0->symlink_continues = 0;







 if (VAR_2 < 1)
  return;
 switch(*VAR_1) {
 case 0:
  break;
 case 1:
  VAR_0->symlink_continues = 1;
  break;
 default:
  return;
 }
 ++VAR_1;
 --VAR_2;
 while (VAR_2 >= 2) {
  unsigned char VAR_4 = *VAR_1++;
  unsigned char VAR_5 = *VAR_1++;
  VAR_2 -= 2;

  FUNC_0(&VAR_0->symlink, VAR_3);
  VAR_3 = "/";

  switch(VAR_4) {
  case 0:
   if (VAR_2 < VAR_5)
    return;
   FUNC_2(&VAR_0->symlink,
       (const char *)VAR_1, VAR_5);
   break;
  case 0x01:
   if (VAR_2 < VAR_5)
    return;
   FUNC_2(&VAR_0->symlink,
       (const char *)VAR_1, VAR_5);
   VAR_3 = "";
   break;
  case 0x02:
   FUNC_0(&VAR_0->symlink, ".");
   break;
  case 0x04:
   FUNC_0(&VAR_0->symlink, "..");
   break;
  case 0x08:
   FUNC_0(&VAR_0->symlink, "/");
   VAR_3 = "";
   break;
  case 0x10:
   FUNC_1(&VAR_0->symlink);
   FUNC_0(&VAR_0->symlink, "ROOT");
   break;
  case 0x20:
   FUNC_0(&VAR_0->symlink, "hostname");
   break;
  default:

   return;
  }
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;
 }
}
