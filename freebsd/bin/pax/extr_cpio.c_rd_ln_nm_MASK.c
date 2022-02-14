
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_4__ {scalar_t__ st_size; } ;
struct TYPE_5__ {char* ln_name; size_t ln_nlen; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(ARCHD *VAR_0)
{



 if ((VAR_0->sb.st_size == 0) ||
     ((size_t)VAR_0->sb.st_size >= sizeof(VAR_0->ln_name))) {




  FUNC_0(1, "Cpio link name length is invalid: %ju",
      (uintmax_t)VAR_0->sb.st_size);

  return(-1);
 }




 if (FUNC_1(VAR_0->ln_name, (int)VAR_0->sb.st_size) !=
     (int)VAR_0->sb.st_size) {
  FUNC_0(1, "Cpio link name read error");
  return(-1);
 }
 VAR_0->ln_nlen = VAR_0->sb.st_size;
 VAR_0->ln_name[VAR_0->ln_nlen] = '\0';




 if (VAR_0->ln_name[0] == '\0') {
  FUNC_0(1, "Cpio link name is corrupt");
  return(-1);
 }
 return(0);
}
