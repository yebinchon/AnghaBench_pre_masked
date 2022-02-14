
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ddf_meta {TYPE_2__* vdr; } ;
struct TYPE_4__ {TYPE_1__* entry; } ;
struct TYPE_3__ {char* VD_Name; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_1(struct ddf_meta *VAR_0, int VAR_1, char *VAR_2)
{
 const char *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->vdr->entry[VAR_1].VD_Name;
 for (VAR_4 = 15; VAR_4 >= 0; VAR_4--)
  if (VAR_3[VAR_4] != 0x20)
   break;
 FUNC_0(VAR_2, VAR_3, VAR_4 + 1);
 VAR_2[VAR_4 + 1] = 0;
}
