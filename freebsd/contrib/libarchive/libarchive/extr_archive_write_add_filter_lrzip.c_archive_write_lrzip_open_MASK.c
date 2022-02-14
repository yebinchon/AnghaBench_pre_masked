
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_lrzip {int compression; scalar_t__ compression_level; int pdata; } ;
struct archive_write_filter {scalar_t__ data; } ;
struct archive_string {int s; } ;


 int FUNC_0 (struct archive_write_filter*,int ,int ) ;
 int FUNC_1 (struct archive_string*,scalar_t__) ;
 int FUNC_2 (struct archive_string*,char*) ;
 int FUNC_3 (struct archive_string*,char*) ;
 int FUNC_4 (struct archive_string*) ;
 int FUNC_5 (struct archive_string*) ;







__attribute__((used)) static int
FUNC_6(struct archive_write_filter *VAR_0)
{
 struct write_lrzip *VAR_1 = (struct write_lrzip *)VAR_0->data;
 struct archive_string VAR_2;
 int VAR_3;

 FUNC_5(&VAR_2);
 FUNC_3(&VAR_2, "lrzip -q");


 switch (VAR_1->compression) {
 case 131:
  break;
 case 133:
  FUNC_2(&VAR_2, " -b");
  break;
 case 132:
  FUNC_2(&VAR_2, " -g");
  break;
 case 130:
  FUNC_2(&VAR_2, " -l");
  break;
 case 129:
  FUNC_2(&VAR_2, " -n");
  break;
 case 128:
  FUNC_2(&VAR_2, " -z");
  break;
 }


 if (VAR_1->compression_level > 0) {
  FUNC_2(&VAR_2, " -L ");
  FUNC_1(&VAR_2, '0' + VAR_1->compression_level);
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1->pdata, VAR_2.s);
 FUNC_4(&VAR_2);
 return (VAR_3);
}
