
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,char*,int) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,struct archive_entry**) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct archive*,int,int ) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void
FUNC_13(struct archive *VAR_3, int VAR_4)
{
 struct archive_entry *VAR_5;

 FUNC_10(VAR_3, VAR_2, FUNC_7(VAR_3, &VAR_5));
 FUNC_12("-", FUNC_1(VAR_5));
 FUNC_9(VAR_0 | 0664, FUNC_0(VAR_5));
 if (VAR_4) {


  FUNC_8(FUNC_3(VAR_5));
  FUNC_9(6, FUNC_2(VAR_5));
 } else {

  FUNC_8(!FUNC_3(VAR_5));
 }







 FUNC_10(VAR_3, VAR_1, FUNC_7(VAR_3, &VAR_5));
 FUNC_10(VAR_3, VAR_2, FUNC_4(VAR_3));
 FUNC_10(VAR_3, VAR_2, FUNC_6(VAR_3));
}
