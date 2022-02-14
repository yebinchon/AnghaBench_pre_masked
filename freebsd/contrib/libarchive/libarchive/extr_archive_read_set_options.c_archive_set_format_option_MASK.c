
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {struct archive_format_descriptor* format; struct archive_format_descriptor* formats; } ;
struct archive_format_descriptor {int (* options ) (struct archive_read*,char const*,char const*) ;int * name; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct archive_read*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_3, const char *VAR_4, const char *VAR_5,
    const char *VAR_6)
{
 struct archive_read *VAR_7 = (struct archive_read *)VAR_3;
 size_t VAR_8;
 int VAR_9, VAR_10 = VAR_2, VAR_11 = 0;

 for (VAR_8 = 0; VAR_8 < sizeof(VAR_7->formats)/sizeof(VAR_7->formats[0]); VAR_8++) {
  struct archive_format_descriptor *VAR_12 = &VAR_7->formats[VAR_8];

  if (VAR_12->options == ((void*)0) || VAR_12->name == ((void*)0))

   continue;
  if (VAR_4 != ((void*)0)) {
   if (FUNC_0(VAR_12->name, VAR_4) != 0)
    continue;
   ++VAR_11;
  }

  VAR_7->format = VAR_12;
  VAR_9 = VAR_12->options(VAR_7, VAR_5, VAR_6);
  VAR_7->format = ((void*)0);

  if (VAR_9 == VAR_0)
   return (VAR_0);

  if (VAR_9 == VAR_1)
   VAR_10 = VAR_1;
 }


 if (VAR_4 != ((void*)0) && VAR_11 == 0)
  return VAR_2 - 1;
 return (VAR_10);
}
