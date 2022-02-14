
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int usage; int pagesize; TYPE_1__* page_contents; } ;
struct TYPE_3__ {int usage; char const* name; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 char* FUNC_2 (char const*,char*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (char*,char*,int) ;

const char *
FUNC_4(unsigned int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = FUNC_1(VAR_2);
 static char VAR_5[100];
 int VAR_6, VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_1[VAR_7].usage == VAR_3)
   break;
 if (VAR_7 >= VAR_0)
  goto bad;
 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_7].pagesize; VAR_6++) {
  VAR_8 = VAR_1[VAR_7].page_contents[VAR_6].usage;
  if (VAR_8 == -1) {
   FUNC_3(VAR_5,
       FUNC_2(VAR_1[VAR_7].page_contents[VAR_6].name, "%d"),
       VAR_4);
   return VAR_5;
  }
  if (VAR_8 == VAR_4)
   return VAR_1[VAR_7].page_contents[VAR_6].name;
 }
 bad:
 FUNC_3(VAR_5, "0x%04x", VAR_4);
 return VAR_5;
}
