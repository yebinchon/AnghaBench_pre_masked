
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int dummy; } ;
struct archive_string {char* s; size_t length; } ;
struct archive_read {int archive; } ;
struct archive_entry_header_ustar {int size; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (struct archive_string*,size_t) ;
 int FUNC_3 (char*,void const*,size_t) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct archive_read*,size_t*) ;

__attribute__((used)) static int
FUNC_6(struct archive_read *VAR_4, struct tar *VAR_5,
    struct archive_string *VAR_6, const void *VAR_7, size_t *VAR_8)
{
 int64_t VAR_9;
 const struct archive_entry_header_ustar *VAR_10;
 const void *VAR_11;

 (void)VAR_5;
 VAR_10 = (const struct archive_entry_header_ustar *)VAR_7;
 VAR_9 = FUNC_4(VAR_10->size, sizeof(VAR_10->size));
 if ((VAR_9 > 1048576) || (VAR_9 < 0)) {
  FUNC_1(&VAR_4->archive, VAR_2,
      "Special header too large");
  return (VAR_0);
 }


 if (FUNC_2(VAR_6, (size_t)VAR_9+1) == ((void*)0)) {
  FUNC_1(&VAR_4->archive, VAR_3,
      "No memory");
  return (VAR_0);
 }

 FUNC_5(VAR_4, VAR_8);


 *VAR_8 = (size_t)((VAR_9 + 511) & ~ 511);
 VAR_11 = FUNC_0(VAR_4, *VAR_8, ((void*)0));
 if (VAR_11 == ((void*)0)) {
  *VAR_8 = 0;
  return (VAR_0);
 }
 FUNC_3(VAR_6->s, VAR_11, (size_t)VAR_9);
 VAR_6->s[VAR_9] = '\0';
 VAR_6->length = (size_t)VAR_9;
 return (VAR_1);
}
