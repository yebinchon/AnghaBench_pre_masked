
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip {int init_default_conversion; struct archive_string_conv* sconv_default; struct archive_string_conv* opt_sconv; } ;
struct archive_write {int archive; } ;
struct archive_string_conv {int dummy; } ;


 struct archive_string_conv* FUNC_0 (int *) ;

__attribute__((used)) static struct archive_string_conv *
FUNC_1(struct archive_write *VAR_0, struct zip *VAR_1)
{
 if (VAR_1->opt_sconv != ((void*)0))
  return (VAR_1->opt_sconv);

 if (!VAR_1->init_default_conversion) {
  VAR_1->sconv_default =
      FUNC_0(&(VAR_0->archive));
  VAR_1->init_default_conversion = 1;
 }
 return (VAR_1->sconv_default);
}
