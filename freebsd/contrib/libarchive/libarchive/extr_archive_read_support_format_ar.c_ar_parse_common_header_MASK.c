
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uid_t ;
typedef int time_t ;
struct archive_entry {int dummy; } ;
struct ar {int entry_padding; int entry_bytes_remaining; scalar_t__ entry_offset; } ;
typedef int mode_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct archive_entry*,int ) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,int ,long) ;
 int FUNC_6 (struct archive_entry*,int) ;
 int FUNC_7 (struct archive_entry*,int ) ;

__attribute__((used)) static int
FUNC_8(struct ar *VAR_12, struct archive_entry *VAR_13,
    const char *VAR_14)
{
 uint64_t VAR_15;


 FUNC_2(VAR_13, VAR_0);
 FUNC_5(VAR_13,
     (time_t)FUNC_0(VAR_14 + VAR_2, VAR_3), 0L);
 FUNC_7(VAR_13,
     (uid_t)FUNC_0(VAR_14 + VAR_10, VAR_11));
 FUNC_3(VAR_13,
     (gid_t)FUNC_0(VAR_14 + VAR_4, VAR_5));
 FUNC_4(VAR_13,
     (mode_t)FUNC_1(VAR_14 + VAR_6, VAR_7));
 VAR_15 = FUNC_0(VAR_14 + VAR_8, VAR_9);

 VAR_12->entry_offset = 0;
 VAR_12->entry_padding = VAR_15 % 2;
 FUNC_6(VAR_13, VAR_15);
 VAR_12->entry_bytes_remaining = VAR_15;
 return (VAR_1);
}
