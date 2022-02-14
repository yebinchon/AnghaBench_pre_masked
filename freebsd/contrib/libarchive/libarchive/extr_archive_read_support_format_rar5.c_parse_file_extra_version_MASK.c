
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char const* s; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char const*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (struct archive_string*,char const*) ;
 int FUNC_4 (struct archive_string*) ;
 int FUNC_5 (struct archive_string*) ;
 int FUNC_6 (struct archive_string*,char*,size_t) ;
 scalar_t__ FUNC_7 (struct archive_read*,size_t) ;
 int FUNC_8 (struct archive_read*,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_9(struct archive_read* VAR_4,
    struct archive_entry* VAR_5, ssize_t* VAR_6)
{
 size_t VAR_7 = 0;
 size_t VAR_8 = 0;
 size_t VAR_9 = 0;
 struct archive_string VAR_10;
 struct archive_string VAR_11;


 if(!FUNC_8(VAR_4, &VAR_7, &VAR_9))
  return VAR_0;

 *VAR_6 -= VAR_9;
 if(VAR_3 != FUNC_7(VAR_4, VAR_9))
  return VAR_0;

 if(!FUNC_8(VAR_4, &VAR_8, &VAR_9))
  return VAR_0;

 *VAR_6 -= VAR_9;
 if(VAR_3 != FUNC_7(VAR_4, VAR_9))
  return VAR_0;



 const char* VAR_12 = FUNC_0(VAR_5);
 if(VAR_12 == ((void*)0)) {
  FUNC_2(&VAR_4->archive, VAR_1,
      "Version entry without file name");
  return VAR_2;
 }

 FUNC_5(&VAR_10);
 FUNC_5(&VAR_11);



 FUNC_6(&VAR_10, ";%zu", VAR_8);


 FUNC_3(&VAR_11, VAR_12);
 FUNC_3(&VAR_11, VAR_10.s);


 FUNC_1(VAR_5, VAR_11.s);


 FUNC_4(&VAR_10);
 FUNC_4(&VAR_11);
 return VAR_3;
}
