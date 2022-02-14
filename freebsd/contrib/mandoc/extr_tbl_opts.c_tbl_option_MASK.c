
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opts; } ;
struct tbl_node {TYPE_1__ opts; } ;
struct TYPE_4__ {char* name; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tbl_node*,int,char const*,int*,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ,int,int,char*,char const,...) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

void
FUNC_4(struct tbl_node *VAR_4, int VAR_5, const char *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = *VAR_7;
 for (;;) {
  while (VAR_6[VAR_9] == ' ' || VAR_6[VAR_9] == '\t' || VAR_6[VAR_9] == ',')
   VAR_9++;

  if (VAR_6[VAR_9] == ';') {
   *VAR_7 = VAR_9 + 1;
   return;
  }



  VAR_10 = 0;
  while (FUNC_1((unsigned char)VAR_6[VAR_9 + VAR_10]))
   VAR_10++;

  if (VAR_10 == 0) {
   FUNC_2(VAR_1,
       VAR_5, VAR_9, "%c", VAR_6[VAR_9]);
   VAR_9++;
   continue;
  }



  VAR_8 = 0;
  while (VAR_8 < VAR_0 &&
      (FUNC_3(VAR_6 + VAR_9, VAR_3[VAR_8].name, VAR_10) ||
       VAR_3[VAR_8].name[VAR_10] != '\0'))
   VAR_8++;

  if (VAR_8 == VAR_0) {
   FUNC_2(VAR_2,
       VAR_5, VAR_9, "%.*s", VAR_10, VAR_6 + VAR_9);
   VAR_9 += VAR_10;
   continue;
  }



  VAR_9 += VAR_10;
  if (VAR_3[VAR_8].key)
   VAR_4->opts.opts |= VAR_3[VAR_8].key;
  else
   FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_9, VAR_8);
 }
}
