
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_extract {int extract_progress_user_data; int (* extract_progress ) (int ) ;} ;
struct archive_read {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct archive_read_extract* FUNC_0 (struct archive_read*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,void const**,size_t*,int *) ;
 int FUNC_4 (struct archive*,int ,char*,int ) ;
 scalar_t__ FUNC_5 (struct archive*,void const*,size_t,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct archive *VAR_4, struct archive *VAR_5)
{
 int64_t VAR_6;
 const void *VAR_7;
 struct archive_read_extract *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0((struct archive_read *)VAR_4);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 for (;;) {
  VAR_10 = FUNC_3(VAR_4, &VAR_7, &VAR_9, &VAR_6);
  if (VAR_10 == VAR_0)
   return (VAR_2);
  if (VAR_10 != VAR_2)
   return (VAR_10);
  VAR_10 = (int)FUNC_5(VAR_5, VAR_7, VAR_9, VAR_6);
  if (VAR_10 < VAR_3)
   VAR_10 = VAR_3;
  if (VAR_10 < VAR_2) {
   FUNC_4(VAR_4, FUNC_1(VAR_5),
       "%s", FUNC_2(VAR_5));
   return (VAR_10);
  }
  if (VAR_8->extract_progress)
   (VAR_8->extract_progress)
       (VAR_8->extract_progress_user_data);
 }
}
