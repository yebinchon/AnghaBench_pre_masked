
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {int init_default_conversion; struct archive_string_conv* sconv_default; struct archive_string_conv* opt_sconv; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string_conv {int dummy; } ;


 struct archive_string_conv* FUNC_0 (int *) ;

__attribute__((used)) static struct archive_string_conv *
FUNC_1(struct archive_write *VAR_0)
{
 struct cpio *VAR_1;
 struct archive_string_conv *VAR_2;

 VAR_1 = (struct cpio *)VAR_0->format_data;
 VAR_2 = VAR_1->opt_sconv;
 if (VAR_2 == ((void*)0)) {
  if (!VAR_1->init_default_conversion) {
   VAR_1->sconv_default =
       FUNC_0(
         &(VAR_0->archive));
   VAR_1->init_default_conversion = 1;
  }
  VAR_2 = VAR_1->sconv_default;
 }
 return (VAR_2);
}
