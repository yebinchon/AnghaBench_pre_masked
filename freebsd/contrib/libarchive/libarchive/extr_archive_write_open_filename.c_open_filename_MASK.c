
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct write_file_data {int fd; int filename; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,void const*) ;
 int FUNC_1 (int *,void const*) ;
 int FUNC_2 (struct archive*,scalar_t__,char*,...) ;
 int FUNC_3 (struct archive*,struct write_file_data*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct archive *VAR_8, int VAR_9, const void *VAR_10)
{
 struct write_file_data *VAR_11;
 int VAR_12;

 VAR_11 = (struct write_file_data *)FUNC_4(1, sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_8, VAR_3, "No memory");
  return (VAR_2);
 }
 if (VAR_9)
  VAR_12 = FUNC_0(&VAR_11->filename, VAR_10);
 else
  VAR_12 = FUNC_1(&VAR_11->filename, VAR_10);
 if (VAR_12 < 0) {
  if (VAR_4 == VAR_3) {
   FUNC_2(VAR_8, VAR_3, "No memory");
   return (VAR_2);
  }
  if (VAR_9)
   FUNC_2(VAR_8, VAR_0,
       "Can't convert '%s' to WCS",
       (const char *)VAR_10);
  else
   FUNC_2(VAR_8, VAR_0,
       "Can't convert '%S' to MBS",
       (const wchar_t *)VAR_10);
  return (VAR_1);
 }
 VAR_11->fd = -1;
 return (FUNC_3(VAR_8, VAR_11,
  VAR_6, VAR_7, VAR_5));
}
