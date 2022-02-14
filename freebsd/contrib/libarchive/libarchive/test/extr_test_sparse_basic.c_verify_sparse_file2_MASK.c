
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse {int dummy; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*,char const*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive*,struct archive_entry*,int,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct archive*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int) ;

__attribute__((used)) static void
FUNC_11(struct archive *VAR_3, const char *VAR_4,
    const struct sparse *VAR_5, int VAR_6, int VAR_7)
{
 struct archive_entry *VAR_8;
 int VAR_9;

 (void)VAR_5;
 FUNC_5((VAR_8 = FUNC_1()) != ((void*)0));
 FUNC_2(VAR_8, VAR_4);
 if (VAR_7)
  VAR_9 = FUNC_10(VAR_4, VAR_2 | VAR_1);
 else
  VAR_9 = -1;
 FUNC_7(VAR_3, VAR_0,
     FUNC_4(VAR_3, VAR_8, VAR_9, ((void*)0)));
 if (VAR_9 >= 0)
  FUNC_8(VAR_9);



 FUNC_9(VAR_4);
 FUNC_6(VAR_6, FUNC_3(VAR_8));
 FUNC_0(VAR_8);
}
