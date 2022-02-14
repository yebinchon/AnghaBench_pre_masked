
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_lrzip {char compression_level; int compression; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_7, const char *VAR_8,
    const char *VAR_9)
{
 struct write_lrzip *VAR_10 = (struct write_lrzip *)VAR_7->data;

 if (FUNC_0(VAR_8, "compression") == 0) {
  if (VAR_9 == ((void*)0))
   return (VAR_1);
  else if (FUNC_0(VAR_9, "bzip2") == 0)
   VAR_10->compression = VAR_2;
  else if (FUNC_0(VAR_9, "gzip") == 0)
   VAR_10->compression = VAR_3;
  else if (FUNC_0(VAR_9, "lzo") == 0)
   VAR_10->compression = VAR_4;
  else if (FUNC_0(VAR_9, "none") == 0)
   VAR_10->compression = VAR_5;
  else if (FUNC_0(VAR_9, "zpaq") == 0)
   VAR_10->compression = VAR_6;
  else
   return (VAR_1);
  return (VAR_0);
 } else if (FUNC_0(VAR_8, "compression-level") == 0) {
  if (VAR_9 == ((void*)0) || !(VAR_9[0] >= '1' && VAR_9[0] <= '9') ||
      VAR_9[1] != '\0')
   return (VAR_1);
  VAR_10->compression_level = VAR_9[0] - '0';
  return (VAR_0);
 }



 return (VAR_1);
}
