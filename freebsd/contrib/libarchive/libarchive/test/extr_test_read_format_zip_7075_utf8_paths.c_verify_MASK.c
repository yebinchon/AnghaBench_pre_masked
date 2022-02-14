
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*,struct archive_entry**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct archive*,int ,int ) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static void
FUNC_5(struct archive *VAR_2) {
 struct archive_entry *VAR_3;
 const char *VAR_4;

 FUNC_3(VAR_2, VAR_1, FUNC_1(VAR_2, &VAR_3));
 FUNC_2((VAR_4 = FUNC_0(VAR_3)) != ((void*)0));
 FUNC_4(VAR_4, "File 1.txt");

 FUNC_3(VAR_2, VAR_1, FUNC_1(VAR_2, &VAR_3));
 FUNC_2((VAR_4 = FUNC_0(VAR_3)) != ((void*)0));





 FUNC_4(VAR_4, "File 2 - \xC3\xB6.txt");


 FUNC_3(VAR_2, VAR_1, FUNC_1(VAR_2, &VAR_3));
 FUNC_2((VAR_4 = FUNC_0(VAR_3)) != ((void*)0));





 FUNC_4(VAR_4, "File 3 - \xC3\xA4.txt");



 FUNC_3(VAR_2, VAR_1, FUNC_1(VAR_2, &VAR_3));
 FUNC_2((VAR_4 = FUNC_0(VAR_3)) != ((void*)0));
 FUNC_4(VAR_4, "File 4 - xx.txt");

 FUNC_3(VAR_2, VAR_0, FUNC_1(VAR_2, &VAR_3));
}
