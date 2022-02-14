
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*,struct archive_entry**) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct archive*,int ,int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct archive *VAR_4, int VAR_5) {
 struct archive_entry *VAR_6;

 FUNC_4(VAR_4, VAR_3, FUNC_2(VAR_4, &VAR_6));
 FUNC_5("abc", FUNC_1(VAR_6));
 FUNC_3(VAR_1 | 0664, FUNC_0(VAR_6));

 FUNC_4(VAR_4, VAR_3, FUNC_2(VAR_4, &VAR_6));
 if (VAR_5) {

  FUNC_5("def", FUNC_1(VAR_6));
  FUNC_3(VAR_1 | 0664, FUNC_0(VAR_6));
 } else {

  FUNC_5("def/", FUNC_1(VAR_6));
  FUNC_3(VAR_0 | 0775, FUNC_0(VAR_6));
 }

 FUNC_4(VAR_4, VAR_3, FUNC_2(VAR_4, &VAR_6));
 FUNC_5("def/foo", FUNC_1(VAR_6));
 FUNC_3(VAR_1 | 0664, FUNC_0(VAR_6));


 FUNC_4(VAR_4, VAR_3, FUNC_2(VAR_4, &VAR_6));
 FUNC_5("ghi/", FUNC_1(VAR_6));
 FUNC_3(VAR_0 | 0775, FUNC_0(VAR_6));



 FUNC_4(VAR_4, VAR_3, FUNC_2(VAR_4, &VAR_6));

 FUNC_5("jkl/", FUNC_1(VAR_6));
 FUNC_3(VAR_0 | 0775, FUNC_0(VAR_6));



 FUNC_4(VAR_4, VAR_3, FUNC_2(VAR_4, &VAR_6));
 FUNC_5("mno/", FUNC_1(VAR_6));
 FUNC_3(VAR_0 | 0775, FUNC_0(VAR_6));

 FUNC_4(VAR_4, VAR_2, FUNC_2(VAR_4, &VAR_6));
}
