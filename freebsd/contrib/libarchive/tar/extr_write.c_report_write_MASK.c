
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bsdtar {scalar_t__ verbose; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int ,char*) ;
 int VAR_0 ;
 char* FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct bsdtar *VAR_1, struct archive *VAR_2,
    struct archive_entry *VAR_3, int64_t VAR_4)
{
 uint64_t VAR_5, VAR_6;
 int VAR_7;

 if (VAR_1->verbose)
  FUNC_4(VAR_0, "\n");
 VAR_5 = FUNC_3(VAR_2, -1);
 VAR_6 = FUNC_3(VAR_2, 0);
 FUNC_4(VAR_0, "In: %d files, %s bytes;",
     FUNC_2(VAR_2), FUNC_6(VAR_6));
 if (VAR_5 >= VAR_6)
  VAR_7 = 0;
 else
  VAR_7 = (int)((VAR_6 - VAR_5) * 100 / VAR_6);
 FUNC_4(VAR_0,
     " Out: %s bytes, compression %d%%\n",
     FUNC_6(VAR_5), VAR_7);

 FUNC_5(VAR_0, "Current: %s (%s",
     FUNC_0(VAR_3),
     FUNC_6(VAR_4));
 FUNC_4(VAR_0, "/%s bytes)\n",
     FUNC_6(FUNC_1(VAR_3)));
}
